# Periodic Sensor Data Generation & Buffering

## 📌 Project Title:
**Simulated Sensor Data Generation and Buffer Processing in C**

---

## 🧠 Problem Statement:

1. Simulate a sensor that generates **random data (0–5 bytes)** every second.
2. Store this data in a **globally accessible buffer**.
3. Every 10 seconds:
   - Check if the buffer has at least **50 bytes**.
   - If yes:
     - Print the **latest 50 bytes in HEX** format.
     - Remove the **printed 50 bytes** from the buffer.

---

## 🛠️ Tools & Technologies:

- **Language:** C
- **Compiler:** GCC
- **Libraries Used:** `<stdio.h>`, `<stdlib.h>`, `<time.h>`, `<unistd.h>`

---

## 🧩 Code Overview:

The program uses:
- A **global buffer** of 1000 bytes.
- `rand()` to simulate random sensor data.
- `sleep(1)` to simulate 1-second timer events.
- Modular functions for:
  - `GenerateSensorData()` – handles data simulation.
  - `CheckAndPrintBuffer()` – handles buffer evaluation & printing.

---

## 🚀 How to Run:

You can run this code in either:

### 🔸 Online Compiler:
- Copy and paste the code into an online C compiler like:
  - [Programiz](https://www.programiz.com/c-programming/online-compiler/)
- Run the program directly in the browser.

### 🔸 Local System:
1. Save the code in a file named `main.c`
2. Open a terminal/command prompt.
3. Compile the code using:
```bash
gcc main.c -o main
```
4. Run the compiled program:
```bash
./main
```

---


---

## 👤 Author:

- **Name:** Pranav R
- **Email:** pranav.mukundh@gmail.com

---
