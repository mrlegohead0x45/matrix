# from https://github.com/majkinetor/posh/blob/master/MM_Admin/Invoke-Environment.ps1
# used to add visual studio environment variables to the github actions environment
function Invoke-Environment {
    param
    (
        # Any cmd shell command, normally a configuration batch file.
        [Parameter(Mandatory=$true)]
        [string] $Command
    )

    $Command = "`"" + $Command + "`""
    cmd /c "$Command > nul 2>&1 && set" | . { process {
        if ($_ -match '^([^=]+)=(.*)') {
            [System.Environment]::SetEnvironmentVariable($matches[1], $matches[2])
            # add it to the github actions environment
            Write-Output "$($matches[1])=$($(matches[2]))" >> $env:GITHUB_ENV
        }
    }}

}
