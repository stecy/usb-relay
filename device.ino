#define RELAY 12
#define LED 13

void setup() {
    pinMode(RELAY, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) 
    {
        switch(Serial.read())
        {
          case '0':
            digitalWrite(RELAY, LOW);
            digitalWrite(LED, LOW);
            Serial.println("Off");
            break;
          case '1':
            digitalWrite(RELAY, HIGH);
            digitalWrite(LED, HIGH);
            Serial.println("On!");
            break;
          default:
            Serial.println("WTF");
            break;
        }
    }
}