#include <Arduino.h>
#define red 9
#define blue 10
#define green 11
int gCnt;
int predznak = 1;
int r,g,b;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 7){
    if(Serial.read() == '#'){
      delay(100);
      r = Serial.parseInt();
      g = Serial.parseInt();
      b = Serial.parseInt();
      analogWrite(red,r);
      analogWrite(green,g);
      analogWrite(blue,b);
      Serial.print(r);
      Serial.print(" ");
      Serial.print(g);
      Serial.print(" ");
      Serial.print(b);
    }
  }
}
