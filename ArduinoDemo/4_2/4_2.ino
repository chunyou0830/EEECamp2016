void setup(){
	Serial.begin(9600);
	Serial.print("Ready");
	pinMode(3, OUTPUT);
}
void loop(){
	if(Serial.available()){
		char ch = Serial.read();
		Serial.print(ch);
		switch (ch) {
		    case 't':
		      digitalWrite(3, HIGH);
		      break;
		    case 'r':
		      digitalWrite(3, LOW);
		      break;
		}
	}
}