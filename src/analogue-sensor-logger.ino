#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

int value;

void setup()
{
  initDwenguino();
  
  Serial.begin(9600);
  
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
      Serial.println(value);
      delay(1000);
    }
    
    digitalWrite(0, LOW);
  }
}
