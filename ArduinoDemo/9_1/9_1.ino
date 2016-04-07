int speakerPin = 7;
int val = 100;
void setup(){
	pinMode(speakerPin, HIGH);
}
void loop(){
	digitalWrite(speakerPin, HIGH);
	delayMicroseconds(val);
	digitalWrite(speakerPin, LOW);
	delayMicroseconds(val);
}