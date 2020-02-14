
#define KEY_BACKSPACE 42
#define KEY_ARROW_LEFT 0x50
#include "DigiKeyboard.h"
void setup() {
  pinMode(2, OUTPUT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("notepad"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F(" ______     ______     ______     __     __   __     __     ______   __     __    "));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(F("/\\  == \\   /\\  == \\   /\\  __ \\   /\\ \\   /\\ \"-.\\ \\   /\\ \\   /\\  ___\\ /\\ \\   /\\ \\   "));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(F("\\ \\  __<   \\ \\  __<   \\ \\  __ \\  \\ \\ \\  \\ \\ \\-.  \\  \\ \\ \\  \\ \\  __\\ \\ \\ \\  \\ \\ \\  "));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(F(" \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\  \\ \\_\\  \\ \\_\\\"\\_ \\  \\ \\_\\  \\ \\_\\    \\ \\_\\  \\ \\_\\ "));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(F("  \\/_____/   \\/_/ /_/   \\/_/\\/_/   \\/_/   \\/_/ \\/_/   \\/_/   \\/_/     \\/_/   \\/_/ "));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(50);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(1000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("cmd"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(2, HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(2, LOW);
  DigiKeyboard.delay(50);
}
