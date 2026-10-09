# Compile CTests/Resources/AdHoc/*.c(pp) into out/<name>.{obj,pdb}, which the
# PyTests and CTests load as sample inputs. The outputs are gitignored.
$ErrorActionPreference = "Stop"

$vswhere = Join-Path ${env:ProgramFiles(x86)} "Microsoft Visual Studio\Installer\vswhere.exe"
$vs = & $vswhere -latest -property installationPath
cmd /c "`"$vs\VC\Auxiliary\Build\vcvars64.bat`" >nul && set" | ForEach-Object {
    if ($_ -match '^([^=]+)=(.*)$') { Set-Item -Path "env:$($Matches[1])" -Value $Matches[2] }
}

$adhoc = Join-Path $PSScriptRoot "..\..\CTests\Resources\AdHoc"
Push-Location $adhoc
try {
    New-Item -ItemType Directory -Name out -Force | Out-Null
    foreach ($source in Get-ChildItem -File -Include *.c, *.cpp -Path (Join-Path $adhoc "*")) {
        $name = $source.BaseName
        Write-Host "Compiling $($source.Name)"
        cl /nologo /c /Zi /Od /Oi "/Fdout\$name.pdb" "/Foout\$name.obj" $source.Name
        if ($LASTEXITCODE -ne 0) { throw "cl failed for $($source.Name) ($LASTEXITCODE)" }
    }
} finally {
    Pop-Location
}
