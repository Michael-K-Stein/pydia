"""Download any missing test resources from the Microsoft symbol server (msdl).

PE files are keyed by <TimeDateStamp:08X><SizeOfImage:x>, PDBs by <GUID:32X><Age:x>.
"""

import sys
import urllib.request
from pathlib import Path

MSDL = "https://msdl.microsoft.com/download/symbols"
RESOURCES = Path(__file__).resolve().parents[2] / "CTests" / "Resources"

# (local file name, symbol-server name, symbol-server key)
FILES = [
    ("ntdll.dll", "ntdll.dll", "F9F266E7217000"),
    ("ntdll.pdb", "ntdll.pdb", "FB228B943D718A0426415A200E27CB761"),
    ("ntoskrnl_22631.exe", "ntoskrnl.exe", "D17EE5031047000"),
    ("ntkrnlmp.pdb", "ntkrnlmp.pdb", "D02CE8D8DC7B091B9CEB3F31A7F1ABAA1"),
]


def main() -> int:
    for local, name, key in FILES:
        target = RESOURCES / local
        if target.exists():
            continue
        url = f"{MSDL}/{name}/{key}/{name}"
        print(f"Downloading {url} -> {target}")
        request = urllib.request.Request(
            url, headers={"User-Agent": "Microsoft-Symbol-Server/10.0"}
        )
        with urllib.request.urlopen(request) as response:
            target.write_bytes(response.read())
    return 0


if __name__ == "__main__":
    sys.exit(main())
