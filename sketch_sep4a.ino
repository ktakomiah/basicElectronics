// ESP32 Back EMF Detector

const int emfPin = 35; // Analog pin connected to voltage divider

void setup() {
  Serial.begin(115200);
}

void loop() {
  int emfValue = analogRead(emfPin);

  if (emfValue > 100) { // Threshold to avoid noise
    Serial.print("Back EMF detected! Value: ");
    Serial.println(emfValue);
  } else {
    Serial.println("No significant EMF detected.");
  }

  delay(100); // small delay to avoid flooding Serial Monitor
}
