# HID
Stealing Chrome passwords with HID (Human Interface Device) emulation

BadUSB is a vulnerability in the microcontroller chip of every USB device, that let us reprogram the original firmware with a patched one, that makes a device type to be presented in the victim as an other type, usually HID keyboard.
To demonstrate this, we use a cheap Arduino board “DIGISPARK ATTINY85”. 
This Board allows itself to be programed as a HID keyboard.
Files used.
1)	s.ps1 – This is a powershell script that downloads a executable and then executes it to get an output file containing passwords. The script also emails the password file.
2)	wp1.exe – This is the executable that decrypts the passwords stored in the Chrome browser. The executable has an option to produce a .csv file by using --o option.
3)	Digikeyboard.h – Library file for the microcontroller.