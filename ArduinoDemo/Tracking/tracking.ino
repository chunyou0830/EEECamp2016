/**
 * Pin Connection:
 * S	->	Sensor
 * V+	->	LED
 * GS	->	GND
 *
 * When detecting black area, the val should be 1. Otherwise, the value will be 0.
 */
int led=13;
int irSensor=3;
int val;

void setup(){
	pinMode(led,OUTPUT);
	pinMode(irSensor,INPUT);
	Serial.begin(9600);
}

void loop()
{
	val = digitalRead(irSensor);
	Serial.println(val);
	if(val==HIGH){
		digitalWrite(led,HIGH);
	}
	else{
		digitalWrite(led,LOW);
	}
}
