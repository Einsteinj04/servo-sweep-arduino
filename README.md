# Servo Sweep Arduino Project

This simple Arduino sketch demonstrates how to control a servo motor using the Servo library.  
The servo smoothly sweeps from 0° to 180° and back again in a continuous loop.

## 🧠 What You’ll Learn
- How to use the `Servo.h` library  
- How to attach a servo to a digital pin  
- How to control servo angles with code  

## ⚙️ Hardware Requirements
- Arduino Uno (or compatible board)
- 1 Servo motor (e.g., SG90)
- Jumper wires
- Power supply (5V from Arduino)

## 🚀 How It Works
The sketch gradually increases the servo angle from 0 to 180 degrees, then reverses the motion.  
The `delay(15)` gives the servo time to move smoothly between each position.

---

### 🧩 Wiring Diagram (Simple)
| Servo Pin | Arduino Pin |
|------------|--------------|
| Signal (Orange/Yellow) | 9 |
| Power (Red) | 5V |
| Ground (Brown/Black) | GND |
