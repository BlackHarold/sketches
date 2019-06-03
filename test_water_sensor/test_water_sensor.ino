int water;

void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
water=analogRead(A0);

Serial.print("water sensor value is: ");
Serial.print(water);

if (water >= 200){
  digitalWrite(13, HIGH);
  Serial.println(" : Alarm is ON ! (Diod pin13 is HIGH)");
} else {
  digitalWrite(13, LOW);
  Serial.println("");
}

delay(1000);

}
