#include <Arduino.h>
int staroStanjeA;
int staroStanjeB;

void setup() {
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int stanjeA = digitalRead(A1);
  if(staroStanjeA == 1 && stanjeA == 0){
    digitalWrite(10, LOW);
  }
  int stanjeB = digitalRead(A2);
  if(staroStanjeB == 1 && stanjeB == 0){
    digitalWrite(10, HIGH);
  }
  delay(100);
  staroStanjeA = stanjeA;
  staroStanjeB = stanjeB;
}

