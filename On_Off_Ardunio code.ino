#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX, TX

const int ledPin = 13;

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    BTSerial.begin(9600);
}

void loop() {
    if (BTSerial.available()) {
        char receivedChar = BTSerial.read();
        Serial.print("Received: ");
        Serial.println(receivedChar);

        if (receivedChar == '1') {
            digitalWrite(ledPin, HIGH);
            Serial.println("LED ON");
        } 
        else if (receivedChar == '0') {
            digitalWrite(ledPin, LOW);
            Serial.println("LED OFF");
        }
    }
}
