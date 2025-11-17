# Whoops!
A distraction-free, open-source vital tracker
> ### 🚧 **Project Status: Prototyping** 🚧
> **THIS PROJECT IS IN THE EARLY STAGES OF DEVELOPMENT**. The hardware and software details on this page are subject to change. Check the project logs for progress updates.

## The Idea
Modern commercial wearables like Whoop and Oura are fantastic, but they come with significant drawbacks:

- **High Cost & Subscriptions**: They are expensive and lock you into a recurring payment.

- **Digital Noise**: They add another screen and source of notifications to your life.

- **Closed Ecosystem**: You have no control over your data or the device's features.
  
*Whoops!* solves this by being a fully open-source, custom-built vital tracker. It focuses on the essentials: extreme battery life and distraction-free operation. Its primary goal is to be a "silent" logger that monitors health and sleep, provides a smart, gentle wake-up alarm based on real sleep cycle data, and tracks work outs and recovery.

## Core Features
- **24/7 Vital Monitoring**: Tracks heart rate (HR), Heart Rate Variability (HRV), blood oxygen (SpO2), movement (actigraphy), and skin temperature.

- **Advanced Sleep Staging**: Uses HRV and movement data to analyze sleep cycles (e.g., light, deep). This algorithm is inspired by research papers and open-source projects in the sleep science community.

- **Smart Wake-Up Alarm**: A gentle haptic alarm that activates during a "light sleep" window, ensuring a groggy-free wake-up.

- **Distraction-Free UI**: Minimalist E-Ink display (or hidden LED matrix) for time and alarm status only. No notifications.

- **Extreme Battery Life**: Designed from the ground up for multi-day/week-long battery life through deep-sleep optimization.

- **Local-First Data**: Logs all data onboard and syncs to a phone app on-demand via BLE.

- **Open Source**: All hardware designs and firmware will be open source.

## Hardware
| Part          | Description                                                                | Part number                                     |
|---------------|----------------------------------------------------------------------------|-------------------------------------------------|
| MCU           | Ultra-low-power BLE System-on-Chip.                                        | nRF52840                                        |
| Vitals Sensor | PPG sensor for Heart Rate (HR) and SpO2.                                   | MAX30101 (or MAX30102)                          |
| IMU Sensor    | 6-axis IMU for activity and sleep tracking.                                | BMI270 (or LSM6DSV16X)                          |
| Display       | Low-power, distraction-free display.                                       | (TBD - E-Ink or LED Matrix)                     |
| Haptics       | Gentle, programmable wake-up alarm.                                        | LRA + DRV2605L                                  |
| Controls      | TBD - "Digital Crown" for UI interaction  and/or capacitive touch control. | Magnetic Rotary Encoder (AS5601)  and/or MPR121 |
| Power         | LiPo battery and charging circuit.                                         | (TBD)                                           |
| Enclosure     | Custom 3D Printed pod.                                                     | (Custom Design)                                 |
| Band          | Commercial knit band for comfort.                                          | (Whoop 4.0 Compatible)                          |


## Project Roadmap
At this early stage, the project roadmap is as follows:

- [x] Initial concept and feature definition

- [x] Core component research and selection

- [x] Order initial parts (MCU, sensors, soldering kit)
- [ ] Breadboard prototyping: Sensor validation (IMU + PPG)

- [ ] Firmware V1: Read sensors, filter data, and log to serial

- [ ] Firmware V2: Implement deep-sleep & power management

- [ ] Firmware V3: Implement smart alarm logic (HRV + actigraphy)

- [ ] Hardware V1: Design custom PCB
- [ ] Mechanical V1: 3D model and print enclosure/pod

- [ ] Integration and final testing
