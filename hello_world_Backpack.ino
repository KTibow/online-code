#include <TinyWireM.h>
#include <TinyLiquidCrystal.h>
TinyLiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.print("hello, World!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
