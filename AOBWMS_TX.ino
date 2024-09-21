#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define buttonPin1 A0

const int trigPin = 3;
const int echoPin = 2;

long duration;
int distance;

int buttonState1 = 0;

RF24 radio(9, 10); // CE, CSN

const byte address[6] = "00002";

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buttonPin1, INPUT);
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
 duration = pulseIn(echoPin, HIGH);
 distance= duration*0.034/2;


  if (distance<2 )
  {
    buttonState1 = 0;
  }
  else
  {
    if(distance>5)
    {
      buttonState1 = 1;
    }
  }
  
  Serial.print(buttonState1);
  radio.write(&buttonState1 , sizeof(buttonState1 ));
  
  Serial.println(distance);
  delay(500);
}
