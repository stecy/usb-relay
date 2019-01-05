#define RELAY 13 /* Use pin 10 instead */

void setup() {
    pinMode(RELAY, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char command = Serial.read();
        if (command == '1') {
            digitalWrite(RELAY, HIGH);
            Serial.write('1');
        }
        else if (command == '0') {
            digitalWrite(RELAY, LOW);
            Serial.write('0');
        }
    }
}