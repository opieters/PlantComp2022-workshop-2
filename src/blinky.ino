#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

void setup()
{
  initDwenguino();
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
