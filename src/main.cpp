#define FSR_PIN A0
int fsrValue = 0;
void setup() {
    Serial.begin(9600);
    Serial.println("FSR system initialized");
}
void loop() {
    fsrValue = analogRead(FSR_PIN);

    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    if (fsrValue > 400) {
        Serial.println("Pressure detected");
    } else {
        Serial.println("No significant pressure");
    }
    delay(500);

}