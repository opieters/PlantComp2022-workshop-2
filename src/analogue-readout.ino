#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

int value;

void setup()
{
  initDwenguino();
  
  dwenguinoLCD.print("Reading the sensor value");
  delay(1000);
}

void loop()
{
  dwenguinoLCD.clear();
  value = analogRead(A0);
  dwenguinoLCD.print("Value: ");
  dwenguinoLCD.print(value);
  delay(1000);
}
