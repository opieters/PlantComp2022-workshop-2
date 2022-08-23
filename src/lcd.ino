#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

void setup()
{
  initDwenguino();
  
  dwenguinoLCD.print("Hello. Press a key...");
  
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  pinMode(CENTER, INPUT);
}

void loop()
{
  if(digitalRead(UP) == HIGH){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("up");
    while(digitalRead(UP) == HIGH);
  }
  if(digitalRead(DOWN) == HIGH){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("down");
    while(digitalRead(DOWN) == HIGH);
  }
  if(digitalRead(LEFT) == HIGH){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("left");
    while(digitalRead(LEFT) == HIGH);
  }
  if(digitalRead(RIGHT) == HIGH){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("right");
    while(digitalRead(RIGHT) == HIGH);
  }
  if(digitalRead(CENTER) == HIGH){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("center");
    while(digitalRead(CENTER) == HIGH);
  }
}
