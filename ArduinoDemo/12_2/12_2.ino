int servoPin = 9;
void setup(){
	pinMode(servoPin, OUTPUT);
}
void loop(){
	for(int i = 0; i <= 40; i++){
		digitalWrite(servoPin, HIGH);
		delayMicroseconds(1000);
		digitalWrite(servoPin, LOW);
		delay(20);
	}
	for(int i = 0; i <= 40; i++){
		digitalWrite(servoPin, HIGH);
		delayMicroseconds(2000);
		digitalWrite(servoPin, LOW);
		delay(20);
	}
}