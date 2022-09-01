#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

int value;

void setup()
{
  initDwenguino();

  Serial.begin(9600);
  
  dwenguinoLCD.print("Reading sensor");
  delay(1000);
}

void loop()
{
  dwenguinoLCD.clear();
  value = analogRead(A0);
  dwenguinoLCD.print("Value: ");
  dwenguinoLCD.print(value);
  Serial.println(value);
  delay(1000);
}
