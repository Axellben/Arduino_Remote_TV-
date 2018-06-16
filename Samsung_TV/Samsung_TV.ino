#include "Remote_Control.h"
#include <IRremote.h>

#define SAMSUNG_BITS 32


IRsend  irsend;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char cmd = Serial.read();

  switch (cmd){
    case 'O' : irsend.sendSAMSUNG(On_Off , SAMSUNG_BITS);break;
    case 'U' : irsend.sendSAMSUNG(Volume_Up , SAMSUNG_BITS);break;
    case 'D' : irsend.sendSAMSUNG(Volume_Down , SAMSUNG_BITS);break;
    case '1' : irsend.sendSAMSUNG(KeyPad_1 , SAMSUNG_BITS);break;
    case '2' : irsend.sendSAMSUNG(KeyPad_2 , SAMSUNG_BITS);break;
    case '3' : irsend.sendSAMSUNG(KeyPad_3 , SAMSUNG_BITS);break;
    case '4' : irsend.sendSAMSUNG(KeyPad_4 , SAMSUNG_BITS);break;
    case '5' : irsend.sendSAMSUNG(KeyPad_5 , SAMSUNG_BITS);break;
    case '6' : irsend.sendSAMSUNG(KeyPad_6 , SAMSUNG_BITS);break;
    case '7' : irsend.sendSAMSUNG(KeyPad_7 , SAMSUNG_BITS);break;
    case '8' : irsend.sendSAMSUNG(KeyPad_8 , SAMSUNG_BITS);break;
    case '9' : irsend.sendSAMSUNG(KeyPad_9 , SAMSUNG_BITS);break;
    case '0' : irsend.sendSAMSUNG(KeyPad_0 , SAMSUNG_BITS);break;
  }
  irsend.sendSAMSUNG(Volume_Down , SAMSUNG_BITS);
  delay(1000);
}
