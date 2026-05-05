void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read ADC value
  int adcValue = analogRead(A0);

  // Convert to voltage
  float vout = (adcValue / 1023.0) * 5.0;
  float vin = vout * 5;   // Divider ratio (R1+R2)/R2 = 5

  // Determine battery status
  String status;

  if (vin > 12.6) {
    status = "FULL";
  }
  else if (vin > 12.2) {
    status = "GOOD";
  }
  else if (vin > 11.8) {
    status = "LOW";
  }
  else {
    status = "CRITICAL";
  }

  // Display output
  Serial.println("Battery Monitoring System");
  Serial.println("-------------------------");

  Serial.print("Voltage: ");
  Serial.print(vin, 2);   // 2 decimal places
  Serial.println(" V");

  Serial.print("Status: ");
  Serial.println(status);

  // Warning system
  if (vin < 11.8) {
    Serial.println("WARNING: LOW BATTERY!");
  }

  Serial.println("-------------------------\n");

  delay(1000);
}
