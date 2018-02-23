#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
SoftwareSerial mySerial(3, 2); // RX, TX

void setup() {
  mySerial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  if (mySerial.available()) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(mySerial.read());
  }
}
