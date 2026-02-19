#define FSR_PIN A0
int fsrValue = 0;
void setup() {
    Serial.begin(9600);
    Serial.println("FSR system initialized");
}