/**
 * Pin Connection:
 * D0	->	Sensor
 * +	->	LED
 * G	->	GND
 *
 * When detecting black area, the val should be 1. Otherwise, the value will be 0.
 */
int Led=13;
int buttonpin=3;
int val;

void setup(){
	pinMode(Led,OUTPUT);
	pinMode(buttonpin,INPUT);
	Serial.begin(9600);
}

void loop(){
	val=digitalRead(buttonpin);
	Serial.println(val);
	if(val==HIGH){
		digitalWrite(Led,HIGH);
	}
	else{
		digitalWrite(Led,LOW);
	}
}
