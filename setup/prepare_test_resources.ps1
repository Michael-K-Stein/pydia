# Prepares local test resources required by CTests and PyTests.
param(
    [string]$ResourcesDir = "$PSScriptRoot\..\CTests\Resources"
)

$ResourcesDir = [System.IO.Path]::GetFullPath($ResourcesDir)
$AdHocDir = Join-Path $ResourcesDir "AdHoc"
$CompileScript = Join-Path $AdHocDir "CompileResources.ps1"

Write-Host "Building AdHoc test resources..."
if (Test-Path $CompileScript) {
    & pwsh -File $CompileScript
}

$ntdllPdb = Join-Path $ResourcesDir "ntdll.pdb"
if (-not (Test-Path $ntdllPdb)) {
    Write-Host "Downloading ntdll.pdb from Microsoft Symbol Server..."
    $url = "https://msdl.microsoft.com/download/symbols/ntdll.pdb/FB228B943D718A0426415A200E27CB761/ntdll.pdb"
    curl.exe -L -s -o $ntdllPdb $url
    if (-not (Test-Path $ntdllPdb) -or ((Get-Item $ntdllPdb).Length -lt 1000)) {
        Write-Warning "Failed to download ntdll.pdb from symbol server."
    } else {
        Write-Host "Successfully downloaded ntdll.pdb."
    }
}

$ntdllDll = Join-Path $ResourcesDir "ntdll.dll"
if (-not (Test-Path $ntdllDll)) {
    $sys32Ntdll = "C:\Windows\System32\ntdll.dll"
    if (Test-Path $sys32Ntdll) {
        Write-Host "Copying ntdll.dll from System32..."
        Copy-Item $sys32Ntdll $ntdllDll
    }
}

Write-Host "Test resources prepared."
