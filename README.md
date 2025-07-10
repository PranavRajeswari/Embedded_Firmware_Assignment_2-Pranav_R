# 🛠️ Sensor Buffer Simulation in C

This repository contains my solution for a C programming assignment, simulating periodic sensor data generation and buffer processing.

---

## 📌 Problem Overview

- Simulate a sensor that generates **0–5 random bytes** every second.
- Store this data in a **global buffer**.
- Every **10 seconds**, checks if the buffer has **at least 50 bytes**:
  - If yes, it prints the **latest 50 bytes in hexadecimal format**.
  - Then **remove** those 50 bytes from the buffer.

---

## 📁 Project Structure

| File | Description |
|-----------------------------|---------------------------------------------|
| `main.c`| Source code in C implementing the logic |
| `Embedded Firmware Engineer Assignment Report - Pranav R.pdf` | Explanation of the problem, approach & code |
| `output_screenshot.png` | Sample terminal output of the running code |

---

## 🧠 Concepts Used

- Buffer management using `unsigned char` arrays
- Time-based simulation using `sleep(1)` and `time.h`
- Random data generation using `rand()`
- Basic conditional and loop control in C
- Printing in **hexadecimal format** (`%02X`)
- Simple **debouncing logic** for byte collection

---

## 💻 How to Run

1. Compile the code using `gcc` or any C compiler.
