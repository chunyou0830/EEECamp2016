void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("HELLO, this is a massage from your Arduino");
  Serial.println("What's 7X11?");
  Serial.println("7X11=");
  Serial.println(7*11, DEC);
  Serial.println("--------------------");
  delay(1000);
}
