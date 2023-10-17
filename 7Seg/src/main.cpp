#include <Arduino.h>
#define SDI 8
#define SCLK 7
#define LCLK 4

void vpisiBit();
void prikaziBite();
void vpisiStevilo(int stevilo);
void nastaviMesto(int dispNum);

int v1=1;

void setup() {
  pinMode(SDI, OUTPUT);
  pinMode(SCLK, OUTPUT);
  pinMode(LCLK, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vpisiStevilo(0x03);
  nastaviMesto(1);
  prikaziBite();
    vpisiStevilo(0x03);
  nastaviMesto(2);
  prikaziBite();
    vpisiStevilo(0x03);
  nastaviMesto(4);
  prikaziBite();
    vpisiStevilo(0x03);
  nastaviMesto(8);
  prikaziBite();

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

void vpisiStevilo(int stevilo){
  for(int n=0; n<8; n++){
    digitalWrite(SDI, stevilo & 0x01);
    Serial.print(stevilo & 0x01);
    vpisiBit();
    stevilo = stevilo >> 1;
  }
}

void nastaviMesto(int dispNum){
  for(int n=0; n<8; n++){
    if(n<4){
      digitalWrite(SDI,LOW);
      Serial.print(LOW);
    }
    else{
      digitalWrite(SDI,dispNum & 0x01);
      Serial.print(dispNum & 0x01);
      dispNum = dispNum >> 1;
    }
    vpisiBit();
  }
}