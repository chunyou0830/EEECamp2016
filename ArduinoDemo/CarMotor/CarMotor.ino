
void setup(){
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
}
void loop(){
	digitalWrite(9, HIGH);
	analogWrite(10, 200);
	delay(500);
	digitalWrite(9, LOW);
	analogWrite(10, 0);
}