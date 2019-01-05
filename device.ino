#define RELAY 13

void setup() {
    pinMode(RELAY, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char command = Serial.read();
        if (command == '1') {
            digitalWrite(RELAY, HIGH);
        }
        else if (command == '0') {
            digitalWrite(RELAY, LOW);
        }
    }
}