#include <Arduino.h>
#define red 9
#define blue 10
#define green 11



void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int gCnt=125;
  for(int n=0;n<256;n++){
    analogWrite(blue,n);
    analogWrite(red,abs(n-255));
    analogWrite(green,gCnt);
    if(n<125){
      gCnt++;
    } 
    else {
      gCnt--;
    }
    delay(10);
  }
  for(int n=255;n>=0;n--){
    analogWrite(blue,n);
    analogWrite(red,abs(n-255));
    analogWrite(green,gCnt);
    if(n>125){
      gCnt--;
    } 
    else {
      gCnt++;
    }
    delay(10);
  }
  
}
