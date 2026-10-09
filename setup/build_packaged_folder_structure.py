"""Stage the built pydia.pyd into a directory that can be built into a wheel."""

import argparse
import shutil
from pathlib import Path


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pyd_file", type=Path)
    parser.add_argument("out_root_dir", type=Path)
    parser.add_argument("setup_root_dir", type=Path)
    parser.add_argument("project_root_dir", type=Path)
    args = parser.parse_args()

    if args.pyd_file.suffix != ".pyd":
        parser.error("File extension must be .pyd !")

    package_dir = (args.out_root_dir / "package").resolve()
    extension_dir = package_dir / "pydia"
    extension_dir.mkdir(parents=True, exist_ok=True)

    (extension_dir / "__init__.py").write_text(
        "from .pydia import *\n", encoding="utf-8"
    )
    shutil.copy(args.pyd_file, extension_dir / "pydia.pyd")

    for name in ("pyproject.toml", "setup.py"):
        shutil.copy(args.setup_root_dir / name, package_dir / name)
    for name in ("README.md", "LICENSE"):
        shutil.copy(args.project_root_dir / name, package_dir / name)


if __name__ == "__main__":
    main()
