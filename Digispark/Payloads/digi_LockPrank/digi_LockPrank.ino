
#define KEY_BACKSPACE 42
#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_L,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
}

void loop() {
  digitalWrite(1, LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(KEY_A,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_BACKSPACE);
}
