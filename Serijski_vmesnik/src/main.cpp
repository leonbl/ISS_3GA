#include <Arduino.h>
int stevec = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void loop()
{
  if(Serial.available()!=0){
    char crka = Serial.read();
    Serial.println(crka);
    if(isDigit(crka) == 1){
      if(crka=='1'){
        digitalWrite(10, LOW);
      }
    }
  }

}
