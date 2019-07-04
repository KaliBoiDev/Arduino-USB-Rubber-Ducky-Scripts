#include "HID-Project.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(500);
  Keyboard.write(KEY_ESC);
  delay(50);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.write(KEY_R);
  delay(250);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.print("iexplore -k http://fakeupdate.net/win10u/index.html");
  delay(500);
  Keyboard.write(KEY_ENTER);

}

void loop() {
  // put your main code here, to run repeatedly:

}
