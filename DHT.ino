#include <TinyWireM.h> 
#include <TinyLiquidCrystal.h>
#include <TinyDHT.h>
#include <avr/power.h>

#define DHTTYPE DHT22
#define TEMPTYPE 1
#define DHTPIN 1
DHT dht(DHTPIN, DHTTYPE);
TinyLiquidCrystal lcd(0);
