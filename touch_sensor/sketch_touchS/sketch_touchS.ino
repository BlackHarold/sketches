int pin2 = 2; //input signal from sensor
int pin13 = 13; //diod ligthing

void setup() {
  // put your setup code here, to run once:
pinMode(pin2, INPUT);
pinMode(pin13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(pin2)){
  digitalWrite(pin13, HIGH);
} else {
  digitalWrite(pin13, LOW);
}
}
