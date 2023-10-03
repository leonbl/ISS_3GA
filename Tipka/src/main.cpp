#include <Arduino.h>
int staroStanje;

void setup() {
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int stanje = digitalRead(A1);
  if(staroStanje == 1 && stanje == 0){
    digitalWrite(10, !digitalRead(10));
  }
  delay(100);
  staroStanje = stanje;
}

