#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define relayPin1 2
int buttonState1;
int buttonState = 0;
int relayStates;
RF24 radio(9, 10); // CE, CSN
const byte address[6] = "00002";

void setup() {
  Serial.begin(9600);
  pinMode(relayPin1, OUTPUT);
  //digitalWrite(relayPin1, LOW);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
}

void loop() {
  radio.startListening();
  while (!radio.available());
  radio.read(&buttonState1 , sizeof(buttonState1 ));
  Serial.println(buttonState1);

  relayStates=buttonState1; 

  if (relayStates  == 1) {
    digitalWrite(relayPin1, HIGH);
  }
  else  if (relayStates  == 0) {
    digitalWrite(relayPin1, LOW);
  }
  
}
