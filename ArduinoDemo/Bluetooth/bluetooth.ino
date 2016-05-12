#include <SoftwareSerial.h>
#include <Wire.h>

#define MAX_STRING 128
// The maximum received command length from an Android system over the bluetooth

/*
 * Connections Between HC-06 and Arduino ---
 * HC-06    Arduino
 * TX       RX/Pin10
 * RX       TX/Pin11
 */

SoftwareSerial BTSerial(10,11);     // HC06 <-> Arduino RX/TX

byte cmd[MAX_STRING];               // var: Received command from Android
int cmd_len = 0;                    // var: Received command length record
int mode = 0;

void setup(){
    Serial.begin(9600);             // Init: Arduino <-> Computer Baud Rate
    BTSerial.begin(9600);           // Init: HC-06 <-> Arduino Baud Rate
    pinMode(13, OUTPUT);
}

void loop() {
    char str[MAX_STRING];           // var: String to be print
    int cmd_tmp_size;               // var: Command size waiting to be read.
    int i;                          // var: Reading loop counter
    int tick = 0;                   // var: 

    while ( tick < MAX_STRING ){
        cmd_tmp_size = BTSerial.available();        // Get the size of commands waiting to be read
        if ( cmd_tmp_size > 0 ){                    // If there are commands waiting
            for ( i=0; i < cmd_tmp_size; i++ ){     // For each command character waiting
                cmd[(cmd_len++)%MAX_STRING] = char(BTSerial.read());
                                                    // Read command character and save it into cmd
            }
        }
        else {
            tick++;
        }
    }

    if (cmd_len){                   // If cmd have content
        sprintf(str,"%s",cmd);      // Convert cmd to string, and print formatted string to str
        Serial.println(str[0]);   // Print str by Serial
        cmd[0] = '\0';              // Clean cmd
        if(str[0]=='0')
          mode = 0;
        else
          mode = 1;
    }
    cmd_len = 0;                    // Reset cmd's length record
    
    if(mode != 0)
      digitalWrite(13,HIGH);
    else
      digitalWrite(13, LOW);
}
