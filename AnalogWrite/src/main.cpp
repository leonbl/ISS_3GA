#include <Arduino.h>

int m;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  m=255;
  for (int n = 120; n < 256; n++){
    analogWrite(10, n);
    analogWrite(11, m);
    m--;
    delay(5);
  }
  for (int n = 255; n > 119; n--){
    analogWrite(10, n);
    analogWrite(11, m);
    m++;
    delay(5);
  }
}
