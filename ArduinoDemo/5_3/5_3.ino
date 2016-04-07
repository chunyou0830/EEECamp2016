int ledPin = 13;
int inPin1 = 6;
int inPin2 = 7;
int val1;
int val2;
int delayval = 100;
void setup(){
	pinMode(ledPin, OUTPUT);
	pinMode(inPin1, INPUT);
	pinMode(inPin2, INPUT);
}
void loop(){
	val1 = digitalRead(inPin1);
	val2 = digitalRead(inPin2);
	if(val1 == HIGH && val2 == HIGH){
		digitalWrite(ledPin, LOW);
	}
	else if(val1 == LOW && val2 == HIGH){
		delayval = 100;
		digitalWrite(ledPin, HIGH);
		delay(delayval);
		digitalWrite(ledPin, LOW);
		delay(delayval);
	}
	else if(val1 == HIGH && val2 == LOW){
		delayval = 1000;
		digitalWrite(ledPin, HIGH);
		delay(delayval);
		digitalWrite(ledPin, LOW);
		delay(delayval);
	}
	else{
		digitalWrite(ledPin, HIGH);
	}
}