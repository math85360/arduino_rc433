#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
Serial.begin(9600);
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);

  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
}

char* activeSwitch;
int activeReceiver;

void loop() {
if(Serial.available()){
  int c=Serial.read();
  switch(c){
    case 'A':
      activeSwitch="00001";
      break;
    case 'B':
       activeSwitch="00010";
      break;
    case 'C':
       activeSwitch="00011";
      break;
    case '1':
       activeReceiver=1;
      break;
    case '2':
       activeReceiver=2;
      break;
    case '3':
       activeReceiver=3;
      break;
    case '4':
       activeReceiver=4;
      break;
    case '+':
       mySwitch.switchOn(activeSwitch, activeReceiver);
       delay(100);
      break;
    case '-':
       mySwitch.switchOff(activeSwitch, activeReceiver);
       delay(100);
      break;
  }
}
  // Switch on:
  // The first parameter represents the setting of the first 5 DIP switches. 
  // In this example it's ON-ON-OFF-OFF-ON.
  // 
  // The second parameter represents the setting of the last 5 DIP switches. 
  // As only one of these must be ON, it's the number of the DIP switch which 
  // is ON. In this example the last 5 DIP switches are OFF-ON-OFF-OFF-OFF.  
//  mySwitch.switchOff("00010", 1);
//  mySwitch.switchOff("00010", 2);
  //mySwitch.switchOff("00010", 3);
//  mySwitch.switchOff("00010", 4);
//  mySwitch.switchOff("00001", 1);
//  mySwitch.switchOff("00001", 2);
//  mySwitch.switchOff("00001", 3);
//  mySwitch.switchOn("00001", 4);

  // Wait a second
//  delay(100);
  
  // Switch off

//  mySwitch.switchOn("00010", 1);
//  mySwitch.switchOn("00010", 2);
//  mySwitch.switchOn("00010", 3);
//  mySwitch.switchOn("00010", 4);
//  mySwitch.switchOn("00001", 1);
//  mySwitch.switchOn("00001", 2);
//  mySwitch.switchOn("00001", 3);
//  mySwitch.switchOn("00001", 4);
  // Wait another second
//  delay(100);
  
}




