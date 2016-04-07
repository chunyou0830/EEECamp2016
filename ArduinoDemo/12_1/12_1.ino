int servoPin = 9;
void setup(){
	pinMode(servoPin, OUTPUT);
}
void loop(){
	digitalWrite(servoPin, HIGH);
	delayMicroseconds(1500);
	digitalWrite(servoPin, LOW);
	delay(20);
}