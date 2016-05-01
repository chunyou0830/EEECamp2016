int VRA=1;
int VRB=2;
int SW=3;
int vala,valb,vals;

void setup(){
	Serial.begin(9600);
}

void loop()
{
	vala = analogRead(VRA);
	valb = analogRead(VRB);
	vals = analogRead(SW);
	Serial.println(vala);
	Serial.println(valb);
	Serial.println(vals);
	Serial.println("\n");
	delay(500);
}
