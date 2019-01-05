#define RELAY 10
#define LED 13

void setup() {
    pinMode(RELAY, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char command = Serial.read();
        if (command == '1') {
            digitalWrite(RELAY, HIGH);
            digitalWrite(LED, HIGH);
        }
        else if (command == '0') {
            digitalWrite(RELAY, LOW);
            digitalWrite(LED, LOW);
        }
    }
}
