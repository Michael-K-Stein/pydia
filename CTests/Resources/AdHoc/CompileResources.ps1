function GetMsvcDir {
    param ()
    # First prefer MSVC directory with atlmfc
    $atlFile = Get-ChildItem -Path "C:\Program Files*\Microsoft Visual Studio\*\*\VC\Tools\MSVC\*\atlmfc\include\atlbase.h" -ErrorAction SilentlyContinue | Select-Object -First 1
    if ($atlFile) {
        return (Split-Path -Parent (Split-Path -Parent (Split-Path -Parent $atlFile.FullName)))
    }
    $vswhere = "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe"
    if (Test-Path $vswhere) {
        $vsDir = & $vswhere -latest -products * -property installationPath
        if ($vsDir -and (Test-Path "$vsDir\VC\Tools\MSVC")) {
            $toolDir = Get-ChildItem "$vsDir\VC\Tools\MSVC" | Where-Object { $_.PSIsContainer } | Sort-Object -Descending | Select-Object -First 1
            if ($toolDir) { return $toolDir.FullName }
        }
    }
    $fallback = Get-ChildItem -Path "C:\Program Files\Microsoft Visual Studio\2022\*\VC\Tools\MSVC" -ErrorAction SilentlyContinue | Where-Object { $_.PSIsContainer } | Sort-Object -Descending | Select-Object -First 1
    if ($fallback) { return $fallback.FullName }
    throw "MSVC directory not found"
}

function GetWindowsKitIncludeDir {
    param ()
    $kit = Get-ChildItem -Path "C:\Program Files (x86)\Windows Kits\10\Include\10.*" -ErrorAction SilentlyContinue | Where-Object { $_.PSIsContainer } | Sort-Object -Descending | Select-Object -First 1
    if ($kit) { return $kit.FullName }
    return "C:\Program Files (x86)\Windows Kits\10\Include\10.0.22621.0"
}

$MSVCDir = GetMsvcDir
$WinKitDir = GetWindowsKitIncludeDir

function Build-Resource {
    [CmdletBinding()]
    param (
        [Parameter(Mandatory = $true)]
        [string[]]
        $Files,

        [Parameter(Mandatory = $true)]
        [string]
        $Output,

        [Parameter(Mandatory = $false)]
        [bool]
        $WindowsHeaders = $false
    )

    begin {
        New-Item -ItemType "Directory" -Name "out" -ErrorAction SilentlyContinue | Out-Null
    }

    process {
        $ClArgs = @(
            "/I$WinKitDir\ucrt",
            "/I$MSVCDir\include",
            '/c',
            '/Zi',
            '/FS',
            '/Od',
            '/Oi',
            "/Fdout\$Output.pdb",
            "/Foout\$Output.obj"
        )
        if ($WindowsHeaders) {
            $ClArgs += @(
                "/I$WinKitDir\um",
                "/I$WinKitDir\shared",
                "/I$MSVCDir\atlmfc\include"
            )
        }
        $ClArgs += $Files

        Write-Host "Compiling $Output..."
        & "$MSVCDir\bin\Hostx64\x64\cl.exe" $ClArgs
    }
}

$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
if ($scriptDir) { Set-Location $scriptDir }

Build-Resource -Files @("complex_hashables.cpp") -Output "complex_hashables" -WindowsHeaders $true
Build-Resource -Files @("simple_hashables.cpp") -Output "simple_hashables"
Build-Resource -Files @("equal_structs_a.c") -Output "equal_structs_a"
Build-Resource -Files @("equal_structs_b.c") -Output "equal_structs_b" -WindowsHeaders $true
Build-Resource -Files @("modifiers.c") -Output "modifiers"
Build-Resource -Files @("my_structs.c") -Output "my_structs"
Build-Resource -Files @("stub.c") -Output "stub"
