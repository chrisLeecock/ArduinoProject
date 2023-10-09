#include "SRO4.h"

int TRIG_PIN = 12;
int ECHO_PIN = 11;
int LED1_PIN = 13;


SRO4 ultrasonic_sensor1 = SR04(ECHO_PIN, TRIG_PIN);

long distance;

void setup() {
  
Serial.begin(9600);
delay(1000);
pinMode(LED1_PIN, OUTPUT);

}

void loop() {

distane = ultrasonic_sensor1.Distance();
Serial.print(distance);
Seria.println("cm");
delay(500);

if (distance > 50){
  digitalWrite(LED1_PIN, HIGH);
}
  else if (distance > 200){
    digitalWrite(LED1_PIN, HIGH);
  }

  else if (distane > 150){
    digitalWrite()
  }
else (){
  digitalWrite(LED1_PIN, LOW);
}

}
