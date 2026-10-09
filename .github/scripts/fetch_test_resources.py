"""Download any missing test resources from the Microsoft symbol server (msdl).

PE files are keyed by <TimeDateStamp:08X><SizeOfImage:x>, PDBs by <GUID:32X><Age:x>.
"""

import sys
import time
import urllib.error
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


ATTEMPTS = 6
BACKOFF_SECONDS = 2


def download(url: str) -> bytes:
    """Fetch url, retrying transient failures with a growing delay."""
    request = urllib.request.Request(
        url, headers={"User-Agent": "Microsoft-Symbol-Server/10.0"}
    )
    for attempt in range(1, ATTEMPTS + 1):
        try:
            with urllib.request.urlopen(request, timeout=60) as response:
                return response.read()
        except urllib.error.HTTPError as error:
            # 4xx other than throttling will not get better by retrying.
            if error.code < 500 and error.code != 429:
                raise
            reason = f"HTTP {error.code}"
        except (urllib.error.URLError, TimeoutError, ConnectionError) as error:
            reason = repr(error)
        if attempt == ATTEMPTS:
            raise RuntimeError(
                f"Giving up on {url} after {ATTEMPTS} attempts ({reason})"
            )
        delay = BACKOFF_SECONDS * 2 ** (attempt - 1)
        print(f"Attempt {attempt} failed ({reason}); retrying in {delay}s", flush=True)
        time.sleep(delay)
    raise AssertionError("unreachable")


def main() -> int:
    for local, name, key in FILES:
        target = RESOURCES / local
        if target.exists():
            continue
        url = f"{MSDL}/{name}/{key}/{name}"
        print(f"Downloading {url} -> {target}")
        target.write_bytes(download(url))
    return 0


if __name__ == "__main__":
    sys.exit(main())
