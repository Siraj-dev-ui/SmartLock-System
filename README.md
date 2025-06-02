# 🔍 ESP32 Proximity and Motion Detection System

This project uses an ESP32 microcontroller to detect nearby motion and magnetic state changes using a PIR motion sensor and a magnetic reed switch. The ESP32 broadcasts over Bluetooth Low Energy (BLE), allowing a React Native app to detect proximity and send this information to a remote API.

---

## 📦 Components Used

- **ESP32** (Development board)
- **PIR Motion Sensor** (HC-SR501 or similar)
- **Magnetic Reed Switch**
- **Jumper wires, breadboard, USB cable**

---

## ⚙️ Features

- Detects motion using a PIR sensor.
- Detects door/window state using a magnetic reed switch.
- Broadcasts BLE advertisement when motion or magnetic trigger is detected.
- React Native app scans for the ESP32 and sends the detection data (with RSSI) to an API endpoint.

---

## 🧠 How It Works

1. **ESP32**:
   - Runs a BLE server and advertises as `ESP32-Device`.
   - Monitors the PIR sensor and magnetic reed switch.
   - When a sensor is triggered, the ESP32 advertises itself via BLE.

2. **React Native App**:
   - Scans for BLE devices.
   - Detects the presence of `ESP32-Device`.
   - Sends proximity info (e.g., RSSI) and timestamp to an API.

3. **Backend API**:
   - Stores or processes the received data (e.g., for alerts or logging).

---

## 🔧 Wiring Guide

| Component              | ESP32 Pin        |
|------------------------|------------------|
| PIR Sensor (OUT)       | GPIO 13          |
| Reed Switch (One end)  | GPIO 14          |
| Reed Switch (Other end)| GND              |
| VCC (both sensors)     | 3.3V             |
| GND (both sensors)     | GND              |


