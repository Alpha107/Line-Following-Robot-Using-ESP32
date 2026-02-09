# Line Following Robot Using ESP32

An autonomous robot that follows a line using IR sensors. This project demonstrates sensor-based navigation and motor control.

---

## Introduction
The Line Following Robot is an autonomous robotic system designed to detect and follow a predefined path, usually represented by a black or white line on a contrasting surface. IR sensors continuously monitor the path and send signals to the ESP32, which processes the data in real time and controls the motors to stay on the line.

This project introduces concepts such as sensor interfacing, closed-loop control, and real-time decision making. Line following robots are commonly used in educational robotics, industrial AGVs, and automated delivery systems.

---

## Components Used

| Component | Description | Purpose |
|-----------|------------|--------|
| 3-Wheel Chassis | Two drive wheels and one caster | Mechanical structure |
| BO Motors (2) | DC geared motors | Drive the robot |
| ESP32 | Microcontroller | Decision making and motor control |
| Motor Driver | L298N Dual H-Bridge | Controls motor direction and speed |
| IR Sensors | Infrared reflective sensors | Detect line on the surface |
| Jumper Wires | Connection cables | Electrical connections |
| Batteries | Li-ion / AA | Power supply |
| Battery Holders | Secure battery placement | Power management |

---

## System Diagrams

### Block Diagram
![Block Diagram](images/block_diagram.png)  
*IR sensors detect the line and send signals to the ESP32. The ESP32 processes the signals and controls the motor driver to keep the robot aligned.*

### Circuit Diagram
![Circuit Diagram](images/circuit_diagram.png)  
*The IR sensors are connected to ESP32 GPIO pins. The motor driver receives PWM and direction signals from ESP32 to control the motors. Batteries power both the controller and motors.*

---

## Problems Faced
- Inconsistent IR sensor readings due to surface reflection  
- Difficulty calibrating sensors under different lighting conditions  
- Motor speed mismatch causing deviation from the line  
- Power fluctuations affecting sensor accuracy  
- Heating issues with L298N motor driver  

---

## Future Improvements
- Implement PID control for smoother and more accurate line following  
- Use an array of IR sensors for better path detection  
- Replace L298N with a more efficient motor driver  
- Add PWM-based speed control  
- Integrate Wi-Fi or mobile app monitoring  
- Enable multi-path or junction detection  

---

## Conclusion
The Line Following Robot using ESP32 successfully demonstrates autonomous navigation based on sensor feedback. The project enhanced skills in real-time decision making, sensor integration, and motor control. Despite challenges in sensor calibration and motor synchronization, the robot reliably followed the designated path, providing a strong foundation for more advanced autonomous systems.

---

## Images
*(Replace the placeholders with your actual images)*  
![Line Follower Front](images/line_follower_front.png)  
![Line Follower Top](images/line_follower_top.png)
