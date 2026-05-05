## 🔋 Battery Voltage Monitoring System using Arduino

### 📌 Overview

This project measures battery voltage using an Arduino. A voltage divider is used to safely scale higher voltages into the Arduino’s ADC range. The system calculates real-time voltage and classifies battery health.

---

### ⚙️ Features

* ADC-based voltage measurement
* Voltage divider scaling
* Real-time voltage calculation
* Battery status classification
* Low voltage warning

---

### 🧠 Working Principle

#### Voltage Divider

Vout = Vin × (R2 / (R1 + R2))

#### ADC Conversion

Vout = (ADC / 1023) × 5

#### Final Voltage

Vin = Vout × ((R1 + R2) / R2)

---

### 🔌 Circuit Description

* Battery → Voltage Divider → Arduino A0
* Common ground required
* Resistor values: 30kΩ and 7.5kΩ

---

### 📊 Output Example

```
Voltage: 12.03 V
Status: GOOD
```

---

### ⚠️ Battery Status Logic

| Voltage Range | Status   |
| ------------- | -------- |
| > 12.6V       | FULL     |
| 12.2–12.6V    | GOOD     |
| 11.8–12.2V    | LOW      |
| < 11.8V       | CRITICAL |

---

### 🚀 Future Improvements

* OLED display integration
* Buzzer alert system
* IoT-based monitoring
<img width="1329" height="770" alt="Screenshot 2026-05-05 172112" src="https://github.com/user-attachments/assets/4adeb44d-f703-487b-8bf3-d39db458cc73" />
<img width="741" height="748" alt="image" src="https://github.com/user-attachments/assets/8635045f-733b-4397-b83e-c2823027a5b4" />
