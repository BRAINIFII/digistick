
#define KEY_BACKSPACE 42
#define KEY_ARROW_LEFT 0x50
#include "DigiKeyboard.h"
void setup() {
  pinMode(0, OUTPUT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("iexplore -k http://fakeupdate.net/win10u/index.html"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void loop() {
  digitalWrite(0, LOW);
  DigiKeyboard.delay(500);
  digitalWrite(0, HIGH);
  DigiKeyboard.delay(50);
}
