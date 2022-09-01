#include <Wire.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>

void setup()
{
  initDwenguino();
  
  dwenguinoLCD.print("Hello. Press a key...");
  
  pinMode(SW_N, INPUT_PULLUP);
  pinMode(SW_S, INPUT_PULLUP);
  pinMode(SW_E, INPUT_PULLUP);
  pinMode(SW_W, INPUT_PULLUP);
  pinMode(SW_C, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop()
{
  if(digitalRead(SW_N) == LOW){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("up");
    while(digitalRead(SW_N) == LOW);
  }
  if(digitalRead(SW_S) == LOW){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("down");
    while(digitalRead(SW_S) == LOW);
  }
  if(digitalRead(SW_W) == LOW){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("left");
    while(digitalRead(SW_W) == LOW);
  }
  if(digitalRead(SW_E) == LOW){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("right");
    while(digitalRead(SW_E) == LOW);
  }
  if(digitalRead(SW_C) == LOW){
    dwenguinoLCD.clear();
    dwenguinoLCD.print("center");
    while(digitalRead(SW_C) == LOW);
  }
}
