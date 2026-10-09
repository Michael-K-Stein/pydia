import os
import subprocess
from pathlib import Path


def get_msvc_dir():
    """
    Find the most recent MSVC directory in the given Visual Studio path.
    """
    msvc_base_path = Path(
        R"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC"
    )
    msvc_dirs = [d for d in msvc_base_path.iterdir() if d.is_dir()]
    if not msvc_dirs:
        raise FileNotFoundError("No MSVC directories found.")
    # Sort directories by descending modified time and return the first
    latest_msvc_dir = sorted(msvc_dirs, key=lambda d: d.stat().st_mtime, reverse=True)[
        0
    ]
    return latest_msvc_dir


MSVC_DIR = get_msvc_dir()


def build_resource(
    source_files: list[str],
    output: str,
    windows_headers: bool = False,
    output_type: str = "exe",  # "exe", "dll", or "lib"
    libraries: list[str] | None = None,  # Additional libraries for linking
):
    """
    Build resource files with the given parameters.

    :param source_files: List of file paths to compile.
    :param output: Base name of the output file (without extension).
    :param windows_headers: Whether to include Windows headers.
    :param output_type: Output type: "exe", "dll", or "lib".
    :param libraries: Additional libraries to link (e.g., kernel32.lib).
    """

    # Create output directory if it doesn't exist
    def abs_rel_output(suffix: str):
        if os.path.isabs(output):
            return output + suffix
        else:
            out_dir = Path("out")
            out_dir.mkdir(exist_ok=True)
            return '"' + os.path.join(out_dir, (output + suffix)) + '"'

    # Common compiler arguments
    cl_args = [
        f'/I{os.path.join(MSVC_DIR, "include")}',
        "/Zi",
        "/Od",
        "/Oi",
        f'/Fd{abs_rel_output(".pdb")}',
        f'/Fo{abs_rel_output(".obj")}',
    ]

    lib_paths = [
        f"/LIBPATH:{MSVC_DIR}\\lib\\x64",
    ]
    lib_paths += [
        "/LIBPATH:C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.22621.0\\um\\x64",
        "/LIBPATH:C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.22621.0\\ucrt\\x64",
    ]

    # Add Windows headers if required
    if windows_headers:
        cl_args += [
            "/IC:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.22621.0\\ucrt",
            "/IC:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.22621.0\\um",
            "/IC:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.22621.0\\shared",
            f'/I{os.path.join(MSVC_DIR , "atlmfc" , "include")}',
        ]
    else:
        cl_args += [
            # "/IC:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\Llvm\\x64\\lib\\clang\\17\\include"
        ]

    # Add source files to arguments
    cl_args += source_files

    # Determine output type and linker arguments
    if output_type == "exe":
        cl_args += [
            "/Fe" + abs_rel_output(".exe"),
            "/link",
        ]
    elif output_type == "dll":
        cl_args += [
            "/LD",
            "/Fe" + abs_rel_output(".dll"),
            "/link",
        ]
    elif output_type == "lib":
        cl_args += [
            "/c",  # Compile only, output .obj
            "/Fo" + abs_rel_output(".obj"),
        ]
    else:
        raise ValueError(f"Invalid output_type: {output_type}")

    cl_args += lib_paths

    # Add libraries for linking
    if libraries and output_type != "lib":  # Static libraries don't need linking
        cl_args += libraries

    # Execute the compiler
    cl_exe = os.path.join(MSVC_DIR, "bin", "Hostx64", "x64", "cl.exe")
    print(subprocess.list2cmdline([str(cl_exe)] + cl_args))
    subprocess.run([str(cl_exe)] + cl_args, shell=True, check=True)


# Example usage:
# build_resource(["example.cpp"], "example_output", windows_headers=True)
