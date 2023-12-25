$computer = Get-WmiObject Win32_ComputerSystem

$type = $computer.PCSystemType

switch ($type ) {
    1 { Write-Host "Desktop" }
    2 { Write-Host "Laptop" }
    3 { Write-Host "Desktop" }
    4 { Write-Host "" }
    5 { Write-Host "" }
    6 { Write-Host "" }
    7 { Write-Host "" }
    8 { Write-Host "" }
    default { Write-Host "Desktop" }
}