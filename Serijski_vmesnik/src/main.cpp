#include <Arduino.h>
int stevec=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()!=0){
    int stevilo = Serial.available();
    Serial.print("Imam ");
    Serial.print(stevilo);
    Serial.print(" znakov, prebral sem: ");
    char crka = Serial.read();
    Serial.println(crka);
  }
  
}

