#include <TinyWireM.h> 
#include <TinyLiquidCrystal.h>
#include <TinyDHT.h>
#include <avr/power.h>

#define DHTTYPE DHT22
#define TEMPTYPE 1
#define DHTPIN 1
DHT dht(DHTPIN, DHTTYPE);
TinyLiquidCrystal lcd(0);
void setup() {
  if (FCPU == 16000000) clock_prescale_set(clock_div_1);
  dht.begin();
  lcd.begin(16, 2)
  lcd.setBacklight(HIGH);
}
void loop() {
  int8_t h = dht.readHumidity();
  int16_t t
}
