#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

int value;

void setup()
{
  initDwenguino();
  
  dwenguinoLCD.print("Press C");
  delay(1000);

  pinMode(SW_C, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop()
{
  if(digitalRead(SW_C) == LOW){
    digitalWrite(13, HIGH);
    delay(10);
    
    while(digitalRead(SW_C) == LOW){
      dwenguinoLCD.clear();
      value = analogRead(A0);
      dwenguinoLCD.print("Value: ");
      dwenguinoLCD.print(value);
      delay(1000);
    }
    
    digitalWrite(13, LOW);
  }
}
