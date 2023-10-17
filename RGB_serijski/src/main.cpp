#include <Arduino.h>
#define red 9
#define blue 10
#define green 11
int gCnt;
int predznak = 1;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  gCnt=124;
  for(int n=0;n<256;n++){
    analogWrite(blue,n);
    analogWrite(red,abs(n-255));
    analogWrite(green,gCnt);
    gCnt = gCnt + 1 * predznak;
    if(gCnt==255) predznak = -1;
    Serial.print(n);
    Serial.print(" ");
    Serial.print(abs(n-255));
    Serial.print(" ");
    Serial.println(gCnt);
    delay(10);
  }
  gCnt=125;
  for(int n=255;n>=0;n--){
    analogWrite(blue,n);
    analogWrite(red,abs(n-255));
    analogWrite(green,gCnt);
    gCnt = gCnt + 1 * predznak;
    if(gCnt==0) predznak = 1;
    Serial.print(n);
    Serial.print(" ");
    Serial.print(abs(n-255));
    Serial.print(" ");
    Serial.println(gCnt);
    delay(10);
  }
  
}
