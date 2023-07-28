#include <SoftwareSerial.h>
#include <Arduino.h>

SoftwareSerial BTserial(10, 11); // RX, TX pins for BT H05 module
int RMF = 3; // IN1
int RMB = 4; //  IN2

void setup() {
  pinMode (RMF, OUTPUT); 
  pinMode (RMB, OUTPUT);
  // Configure the BT H05 module communication
  BTserial.begin(9600);
  Serial.begin(9600);
  Serial.println("Voice-controlled LED with BT H05 module");
}

void loop() {
  if (BTserial.available()) {
    char command = BTserial.read();

    if (command == '1') {
    digitalWrite(RMF, HIGH);
    digitalWrite(RMB,LOW);
    delay(200); // Turn on LED 1
    Serial.println("LED 1 is ON");
    digitalWrite(RMF, LOW);
    digitalWrite(RMB,LOW);
    } 
    else if (command == '2') {
    digitalWrite(RMF, LOW);
    digitalWrite(RMB, HIGH);
    delay(200); // Turn off LED 1
    Serial.println("LED 1 is OFF");
    digitalWrite(RMF, LOW);
    digitalWrite(RMB,LOW);
    } 
    else if (command == '3') {
    digitalWrite (RMF, LOW);
   digitalWrite (RMB, LOW);
   delay (100); // Turn off LED 1
    Serial.println("LED 1 is null");
    } 
  }
}