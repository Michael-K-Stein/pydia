# pydia3

## The ultimate Python wrapper for the [Microsoft's DIA SDK (Debug Interface Access)](https://learn.microsoft.com/en-us/visualstudio/debugger/debug-interface-access/debug-interface-access-sdk)

---

## Goal

**pydia3** aims to ease the manual handling of [PDB](https://en.wikipedia.org/wiki/Program_database) files. No more hacking together some [IDA-Python](https://python.docs.hex-rays.com/) - you can now use your favorite python ditribution and simply install a package!
**pydia3** makes all the common functionality used when working with PDB files extremely accessible.

### My future vision

Hopefully, we can make **pydia3** so powerful we will be able to accurately recreate header files from PDBs alone.

## How?

The ideaology of **pydia3** is as follows:

* Every DIA2 SDK [COM](https://learn.microsoft.com/en-us/windows/win32/com/component-object-model--com--portal) function is wrapped by a neat C++ function which handles all memory allocation/de-allocation and reference count tracking. These C++ wrappers are found in DiaLib.
* Each DIA2 SDK "class" is implemented as a [C-API Python](https://docs.python.org/3/c-api/) class in pydia (the sub-project).
  * The C-Python wrapper will never directly call a COM function - rather it will call a DiaLib method which will wrap the low level memory managment.
* The C-Python wrappings (pydia) must be as user-friendly and safe as possible. It should be actively difficult to missuse pydia's exported Python API.
* The DiaLib wrappings should be 100% responsible for all low-level management - especially memory-wise. Unless the user is a dehydrated donkey they should not be able to cause DiaLib to "[seg-fault](https://en.wikipedia.org/wiki/Segmentation_fault)" (0xC0000005 - `STATUS_ACCESS_VIOLATION`).

## Installation

pydia3 is Windows-only (x64) and supports **CPython 3.12, 3.13 and 3.14**.

```powershell
pip install pydia3
```

Install it as `pydia3` and import it as `pydia3`. The DIA runtime
(`msdia140.dll`) must be registered on the machine; it ships with Visual Studio
(`<VS install>\DIA SDK\bin\amd64\msdia140.dll`). If it isn't registered, run from
an elevated prompt:

```powershell
regsvr32 "<VS install>\DIA SDK\bin\amd64\msdia140.dll"
```

## Usage

```python
import pydia3
from pydia3 import DataSource

# Accepts a .pdb, or a binary whose PDB can be found via the symbol path.
data_source = DataSource(r"C:\Windows\System32\ntdll.dll")

for enum in data_source.get_symbols(pydia3.SymTag.Enum):
    print(enum.get_name(), enum.get_length(), enum.get_values())

for udt in data_source.get_symbols(pydia3.SymTag.UDT):
    print(udt.get_name())
    for member in udt.enumerate_members():
        print("   ", member.get_name(), hex(member.get_offset()))
```

See [Examples/Python/ntdll_header_builder.py](Examples/Python/ntdll_header_builder.py)
for a full example that rebuilds C headers (enums and structs) from PDBs, and
[PyTests](PyTests) for more API usage.

## Internals

### Directory structure

* CTests
  * Testing framework for DiaLib based on Microsoft's [CppUnitTestFramework](https://learn.microsoft.com/en-us/visualstudio/test/microsoft-visualstudio-testtools-cppunittestframework-api-reference?view=vs-2022).
  * Resources
  * Generally useful binary/misc resources for tests.
* DiaLib
  * Implementation of the C++ wrapper library for the DIA2 SDK.
* PyTests
  * Testing framework for pydia (the C-API Python module) based on [pytest](https://docs.pytest.org/en/stable/).
* pydia
  * Implementation of the C-API Python module which wraps DiaLib (and by transitivity also the DIA2 SDK)

## Building from source

### Prerequisites

* Windows x64.
* Visual Studio 2022 with the **Desktop development with C++** workload (this
  includes the DIA SDK, at `<VS install>\DIA SDK`).
* CPython 3.12, 3.13 or 3.14 x64 (python.org installer), including its headers and import libraries.

### Build

From a *Developer PowerShell for VS 2022*:

```powershell
# Where the target Python (3.12-3.14) is installed (defaults to C:\Python312).
# The extension is built for, and the wheel tagged for, this interpreter.
$env:PYTHON_HOME = python -c "import sys; print(sys.base_prefix)"
# Optional: only needed if the DIA SDK isn't at <VS install>\DIA SDK.
# $env:DIA_SDK_DIR = "C:\path\to\DIA SDK"

msbuild pydia.sln /m /p:Configuration=Release-3.12 /p:Platform=x64 /t:pydia
```

Alternatively, open `pydia.sln` in Visual Studio and build the `Release-3.12 | x64`
configuration (the name is historical; it builds for whichever Python `PYTHON_HOME` points at). The build produces `pydia3.pyd` and stages a ready-to-package
folder at `x64\Release-3.12\package`.

### Build and install a wheel

```powershell
cd x64\Release-3.12\package
python -m pip install build
python -m build --wheel
python -m pip install (Get-ChildItem dist\*.whl).FullName
python -c "import pydia3; print(pydia3.DataSource)"
```

### Running the tests

```powershell
python -m pip install pytest
$env:PYTHONPATH = "$PWD\x64\Release-3.12\package"
python -m pytest
```

The C++ tests in `CTests` use the Microsoft CppUnitTestFramework and run from
Visual Studio's Test Explorer.

### Linting

```powershell
python -m pip install -r requirements-dev.txt
python -m ruff check .
python -m ruff format --check .
```
