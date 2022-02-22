void setup() {
  delay(10000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(3000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(5000);
}
void loop() {
  digitalWrite(3, HIGH);
	digitalWrite(10, HIGH);
	delay(250);
	digitalWrite(3, LOW);
	digitalWrite(10, LOW);
	delay(250);
}
