#include "Ultrasonic.h"

//Trig-D12 & Echo-D13 pins onto Arduino Nano
Ultrasonic ultrasonic(12, 13);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("testing...");
}

void loop() {
  
  // put your main code here, to run repeatedly:
Serial.print(ultrasonic.Ranging(CM));
Serial.println("cm");
delay(500);
}
