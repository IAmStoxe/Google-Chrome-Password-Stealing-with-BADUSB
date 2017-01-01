$command = Read-Host -Prompt 'Input String for Encoding'
$bytes = [System.Text.Encoding]::Unicode.GetBytes($command)
$ec =[Convert]::ToBase64String($bytes)
echo "Encoded string"
$ec