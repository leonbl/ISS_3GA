#include <Arduino.h>
int staroStanjeA;
int stevec = 10;

void setup() {
  pinMode(A2, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int stanjeA = digitalRead(A1);
  if(staroStanjeA == 1 && stanjeA == 0){
    digitalWrite(stevec, LOW);
    if(stevec == 10) digitalWrite(13, HIGH);
    else digitalWrite(stevec-1, HIGH);
    stevec++;
    if(stevec == 14) stevec = 10;
  }
  delay(100);
  staroStanjeA = stanjeA;
}

