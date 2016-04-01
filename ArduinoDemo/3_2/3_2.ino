int x = 0;
void setup(){
	Serial.begin(9600);
}
void loop(){
	x+=1;
	switch(x){
		case 100:
			Serial.println(x);
		case 200:
			Serial.println(x);
		case 300:
			Serial.println(x);
	}
}