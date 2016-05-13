#define TRIGPIN 12
#define ECHOPIN 13

long ping() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  return pulseIn(ECHOPIN, HIGH)/58;
}

void setup() {
  Serial.begin(9600);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
}

void loop() {
  long cm = ping();
  Serial.println(cm);
  
  delay(100);
}