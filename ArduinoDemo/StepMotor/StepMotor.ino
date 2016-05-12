int Pin0 = 8;
int Pin1 = 9;
int Pin2 = 10;
int Pin3 = 11;
int steps = 0;
boolean dir = true;

void setup(){
    pinMode(Pin0, OUTPUT);
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    pinMode(Pin3, OUTPUT);
}

void loop(){
    switch(steps){
        case 0:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, HIGH);
            break;
        case 1:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, HIGH);
            digitalWrite(Pin3, HIGH);
            break;
        case 2:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, HIGH);
            digitalWrite(Pin3, LOW);
            break;
        case 3:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, HIGH);
            digitalWrite(Pin2, HIGH);
            digitalWrite(Pin3, LOW);
            break;
        case 4:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, HIGH);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            break;
        case 5:
            digitalWrite(Pin0, HIGH);
            digitalWrite(Pin1, HIGH);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            break;
        case 6:
            digitalWrite(Pin0, HIGH);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            break;
        case 7:
            digitalWrite(Pin0, HIGH);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, HIGH);
            break;
        default:
            digitalWrite(Pin0, LOW);
            digitalWrite(Pin1, LOW);
            digitalWrite(Pin2, LOW);
            digitalWrite(Pin3, LOW);
            break;
    }
    if(dir){
        steps++;
    }
    else{
        steps--;
    }
    
    if(steps>7){
        steps=0;
    }
    if(steps<0){
        steps=7;
    }
    
    delay(1);

}
