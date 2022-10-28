/*
 * Created by Doğuhan POLAT
 * 
 * Github: https://github.com/doguhanpolat
 *
*/
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

LiquidCrystal_I2C lcd(0x3f, 16, 2);
//LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 4
#define DHTTYPE DHT11
//#define DHTTYPE DHT21
//#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
             


void setup() {
 
 lcd.backlight();// turn on lcd backlight
 lcd.init();// initialize lcd
 dht.begin();// initialize the sensor
  
  int i;
  for(i=0; i<17; i++)
  {
    lcd.setCursor(4,0); //We set the column and row.
    lcd.print("D.POLAT");
    lcd.setCursor(i,1);
    lcd.print("Welcome");
    delay(300);
    lcd.setCursor(i,1);
    lcd.print(" ");
   }
 }
void loop() {
 
   lcd.clear();
   lcd.setCursor(0,0); // We set the column and row.
   lcd.print("Temp=");
   lcd.print((float)dht.readTemperature()); //print the temperature
   lcd.print("Celsius");
   lcd.setCursor(0,1); // We set the column and row.
   lcd.print("Humidity=");
   lcd.print((float)dht.readHumidity()); //print the humidity
   lcd.print("%");
   delay(2000);
   lcd.clear();

}
