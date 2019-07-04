#include "HID-Project.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(5000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.write(KEY_ESC); //These 2 commands serves as the windows key without having to use the GUI function.
  delay(1000);
  Keyboard.releaseAll();
  Keyboard.print("iexplore http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg"); //This uses Internet explorer to open the image file.
  delay(1000);
  Keyboard.write(KEY_ENTER);
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL); //These 2 commands allow Internet explorer to download the image onto the host's computer.
  Keyboard.write(KEY_S);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.write(KEY_ENTER);
  delay(300);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.write(KEY_ESC);
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("%USERPROFILE%\\Pictures\\01-rubberduck-hongkong.jpg"); //This is a command that opens the file in the Pictures app NOTE: Sometimes when typing a slash, you must type it twice
  delay(3000);
  Keyboard.write(KEY_ENTER);
  delay(1000);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB);
  delay(500);
  Keyboard.write(KEY_TAB); //These tabs move the selection over to the drop down menu
  delay(1000);
  Keyboard.write(KEY_ENTER); // This selects the dropdown menu
  delay(500);
  Keyboard.write(KEY_DOWN);
  delay(500);
  Keyboard.write(KEY_DOWN);
  delay(500);
  Keyboard.write(KEY_DOWN);
  delay(500);
  Keyboard.write(KEY_DOWN);
  delay(500);
  Keyboard.write(KEY_DOWN);
  delay(500);
  Keyboard.write(KEY_DOWN); //These downs move the selection to the "set as" section
  delay(500);
  Keyboard.write(KEY_ENTER);//Selects "set as"
  delay(500);
  Keyboard.write(KEY_DOWN);//Selects "set as background." You can change the number of downs depending on what you want the image to be set as 
  delay(500);
  Keyboard.write(KEY_ENTER);//Sets the image as background
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
