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
  if(digitalRead(CENTER) == HIGH){
    digitalWrite(0, HIGH);
    delay(10);
    
    while(digitalRead(CENTER) == HIGH){
      dwenguinoLCD.clear();
      value = analogRead(A0);
      dwenguinoLCD.print("Value: ");
      dwenguinoLCD.print(value);
      delay(1000);
    }
    
    digitalWrite(0, LOW);
  }
}
