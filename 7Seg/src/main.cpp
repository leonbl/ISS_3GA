#include <Arduino.h>
#define SDI 8
#define SCLK 7
#define LCLK 4

void vpisiBit();
void prikaziBite();

int v1=10;

void setup() {
  pinMode(SDI, OUTPUT);
  pinMode(SCLK, OUTPUT);
  pinMode(LCLK, OUTPUT);
}

void loop() {
  for(int n=0; n<16; n++){
    if(n<15)
      digitalWrite(SDI, LOW);
    else
      digitalWrite(SDI,HIGH);
    vpisiBit();
  }
  prikaziBite();
  delay(1000);
}

void vpisiBit(){
  digitalWrite(SCLK, HIGH);
  delay(v1);
  digitalWrite(SCLK, LOW);
  delay(v1);
}

void prikaziBite(){
  digitalWrite(LCLK, HIGH);
  delay(v1);
  digitalWrite(LCLK, LOW);
  delay(v1);
}