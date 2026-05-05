## 🔋 Battery Voltage Monitoring System using Arduino

---

### 💡 What problem does this solve?

Monitoring battery voltage is critical in embedded systems to prevent over-discharge and potential hardware damage. This project demonstrates how higher voltages can be safely measured using a microcontroller by scaling, converting, and interpreting analog signals.

---

### 📌 Overview

This project measures battery voltage using an Arduino. A voltage divider is used to safely scale higher voltages into the Arduino’s ADC range (0–5V). The system calculates real-time voltage and classifies battery health into different levels.

---

### ⚙️ Features

* ADC-based voltage measurement
* Voltage divider for safe scaling
* Real-time voltage calculation
* Battery status classification (FULL / GOOD / LOW / CRITICAL)
* Low voltage warning system

---

### 🧠 Working Principle

#### Voltage Divider

Vout = Vin × (R2 / (R1 + R2))

* R1 = 30kΩ
* R2 = 7.5kΩ
* Scaling factor = 0.2

---

#### ADC Conversion

Arduino ADC (10-bit resolution):

* 0V → 0
* 5V → 1023

Vout = (ADC / 1023) × 5

---

#### Final Voltage Calculation

Vin = Vout × ((R1 + R2) / R2)

---

### 🔌 Circuit Description

* Battery positive → R1 → Junction → A0
* Junction → R2 → GND
* Arduino GND connected to battery GND

---

### 🔧 Circuit Diagram

<img width="1329" height="770" alt="Screenshot 2026-05-05 172112" src="https://github.com/user-attachments/assets/3a740ef1-4a22-443c-bc4a-df7fef08c3a1" />

<img width="660" height="487" alt="image" src="https://github.com/user-attachments/assets/4ef7839d-e167-4707-8657-c41a1a760b2d" />

---

### 📊 Output Example

```
Battery Monitoring System
-------------------------
Voltage: 12.03 V
Status: GOOD
-------------------------
```

---

### 📸 Output Screenshot

<img width="741" height="748" alt="Screenshot 2026-05-05 174540" src="https://github.com/user-attachments/assets/8fd787aa-afe8-4382-835f-8eae557c6e97" />


---

### ⚠️ Battery Status Logic

| Voltage Range | Status   |
| ------------- | -------- |
| > 12.6V       | FULL     |
| 12.2 – 12.6V  | GOOD     |
| 11.8 – 12.2V  | LOW      |
| < 11.8V       | CRITICAL |

---

### ⚙️ Design Decisions

* Used voltage divider to protect Arduino from voltages above 5V
* Selected resistor ratio to safely measure up to ~25V
* Implemented threshold-based classification based on 12V battery characteristics

---

### 🧪 Testing & Validation

The system was tested with multiple input voltages (5V–15V).
Measured output values closely matched expected theoretical values, with minor deviations due to ADC resolution and resistor tolerances.

---

### 📌 Key Achievement

Implemented a complete analog-to-digital measurement system with real-time decision-making for battery health monitoring.

---

### 🚀 Future Improvements

* OLED display integration (SSD1306)
* Buzzer alert for low battery
* IoT-based remote monitoring
* Data logging and visualization

---
