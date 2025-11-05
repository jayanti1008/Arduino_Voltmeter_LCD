# 🔋 Arduino Voltmeter with LCD Display

This project measures the input voltage using an Arduino Uno and displays it on a 16x2 I2C LCD screen.  
It uses a simple voltage divider circuit to safely read voltages up to 12V.

---

## 🧠 Overview

The Arduino reads an analog value from pin **A0**, converts it into a real voltage using a scaling factor, and displays the voltage on an **I2C LCD display**.

The circuit is safe, low-cost, and perfect for beginners learning how to measure analog voltages using Arduino.

---

## ⚙️ Hardware Requirements

| Component | Quantity | Description |
|------------|-----------|--------------|
| Arduino Uno | 1 | Microcontroller board |
| 16x2 LCD (I2C) | 1 | Display for showing voltage |
| Resistor 7.2kΩ | 1 | Used in voltage divider |
| Resistor 4.8kΩ | 1 | Used in voltage divider |
| Breadboard | 1 | For connections |
| Jumper wires | As needed | For wiring |
| Power Source (max 12V) | 1 | Input voltage to measure |

---

## 🔌 Circuit Connections

| LCD Pin | Arduino Pin |
|----------|--------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

| Voltage Divider | Arduino Pin |
|------------------|-------------|
| Output (middle node) | A0 |
| GND | GND |
| Input (12V max) | From source |

⚠️ **Note:** Never connect voltages higher than 5V directly to A0 — use a proper voltage divider.

---

## 🧮 Formula Used
V_in = (AnalogValue / 1023) × V_ref × ScalingFactor
Where:
- `AnalogValue` → ADC reading (0–1023)
- `V_ref` → 5V (Arduino reference voltage)
- `ScalingFactor` → (R1 + R2) / R2 = 2.4 in this project

---

## 💻 Arduino Code

The main code is in the file `VoltMeter.ino`.  
It reads the analog pin and updates the voltage on the LCD every 0.5 seconds.

---

## 📚 Required Libraries

Install these libraries in Arduino IDE or VS Code:
- `Wire.h` (usually pre-installed)
- `LiquidCrystal_I2C.h`

---

## 🧪 How It Works

1. The voltage divider scales down the input voltage (max 12V) to below 5V.
2. The Arduino reads the analog signal using its 10-bit ADC.
3. The code calculates the actual input voltage using the scaling factor.
4. The LCD displays the voltage in real time.

---

## 📁 Project Structure

Arduino_Voltmeter_LCD/
│
├── voltmeter.ino          # Main Arduino sketch
├── README.md              # Full project documentation
├── components.txt         # List of all electronic components
├── connections.txt        # Wiring connections for circuit
├── LICENSE                # MIT License for open-source use
└── .gitignore             # Files/folders to exclude from Git tracking
 
 ---

## 🧠 Future Improvements

Add OLED or 7-segment display support.

Include max/min voltage tracking.

Display battery status using bar graph.

---

## 🧑‍💻 Author

**Jayanti**  
🎓 Information Science & Engineering Student  
💡 Passionate about IoT, Arduino, and electronics projects.

---

## 🪪 License

This project is open-source under the **MIT License**.  
You’re free to use, modify, and share it with credit.