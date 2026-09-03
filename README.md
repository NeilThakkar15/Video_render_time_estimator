
# Video Render Time Estimator

A command-line interface (CLI) application built in C that estimates video export and rendering times based on hardware specifications, resolution, frame rate, and timeline duration. 

Designed to move beyond basic calculators by modeling real-world system bottlenecks and editing workloads.

---

## 🚀 Key Features
* **Hardware-Aware Scaling:** Computes frame density and adjusts processing multipliers based on system RAM (supporting standard 8GB machines up to high-end 32GB pro rigs).
* **Realistic Variance Windows:** Outputs an estimated time range instead of a rigid single number to account for complex video effects, transitions, and color grading.
* **Defensive Error Handling:** Validates resolution inputs and gracefully catches non-standard configurations.
* **Interactive Control Loop:** Utilizes a `do-while` loop for multi-run efficiency without needing to restart the program.

---

## 🛠️ How to Compile and Run

1. Make sure you have a C compiler installed (like GCC).
2. Open your terminal or command prompt and compile the program:
   ```bash
   gcc render_time.c -o render_time
Run the executable:

On Windows:

DOS
render_time.exe
On macOS/Linux:

Bash
./render_time
🧪 Tested Scenarios
High-End Pro Rig: 2160p (4K), 60 FPS, 32 GB RAM

Standard Student Setup: 1080p, 30/60 FPS, 8 GB RAM

Defensive Validation: Non-standard resolution checks (e.g., error fallback trigger)

💻 Author
Built with ❤️ by a 1st-year Computer Science and Engineering student exploring systems-level programming.
