import os
from tempfile import NamedTemporaryFile

from utils.resource_utils import build_resource

from pydia import DataSource


def get_test_resources_dir():
    return os.path.join(os.path.dirname(__file__), "..", "CTests", "Resources")


def get_ntdll_datasource():
    return DataSource(os.path.join(get_test_resources_dir(), "ntdll.dll"))


def get_ntoskrnl_22631_datasource():
    return DataSource(os.path.join(get_test_resources_dir(), "ntoskrnl_22631.exe"))


def get_adhoc_test_file(test_file_name: str):
    return os.path.join(get_test_resources_dir(), "AdHoc", "out", test_file_name)


def compile_resource(
    source_code: str, windows_headers: bool = False, output_type: str = "exe"
):
    with NamedTemporaryFile(
        R"w+b", suffix="", delete_on_close=False, delete=False
    ) as binary_file:
        binary_file.flush()
        binary_file.close()
        with NamedTemporaryFile(
            R"w+", encoding="UTF-8", suffix=".cpp", delete_on_close=False, delete=False
        ) as source_code_file:
            source_code_file.write(source_code)
            source_code_file.flush()
            source_code_file.close()
            build_resource(
                [source_code_file.name],
                binary_file.name,
                windows_headers=windows_headers,
                output_type=output_type,
            )
            return f"{binary_file.name}.{output_type}"


class AdHocBinaryDataSource:
    binary_type: str = "exe"  # One of (exe, dll, lib, obj)

    def __init__(self, source_code: str, binary_type: str = "exe"):
        self.source_code = source_code
        self.binary_type = binary_type

    def __copile(self):
        self.test_binary_name = compile_resource(
            self.source_code, windows_headers=False, output_type=self.binary_type
        )
        self.data_source = DataSource(self.test_binary_name)

    def __enter__(self):
        self.__copile()
        assert self.data_source, "DataSource is invalid!"
        return self.data_source

    def __exit__(self, _exc_type, _exc_val, _exc_tb):
        if self.test_binary_name:
            print(f"Test Binary: {self.test_binary_name}")
        pass
