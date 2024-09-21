# Water Waste Reduction System

## Overview
The Water Waste Reduction System is a smart and automated solution designed to manage water consumption efficiently. This system prevents water wastage by continuously monitoring water levels using ultrasonic sensors, controlling water pumps and valves based on pre-defined thresholds. It uses two Arduino UNO boards, NRF24L01 transceiver modules, a relay, and other components to maintain optimal water levels.

## Features
- Automated water level monitoring using ultrasonic sensors.
- Wireless communication between water level sensor and pump control using NRF24L01 transceivers.
- Efficient control of water pumps to prevent overflow and water wastage.
- Real-time monitoring and decision-making system.

## System Components
- **Arduino UNO R3 (2x)**: Microcontroller boards to manage sensor input and pump control.
- **NRF24L01 Tx/Rx Module (2x)**: Wireless transceiver modules for communication.
- **Ultrasonic Sensor (1x)**: Measures water levels in the tank or reservoir.
- **DC Motor (1x)**: Simulates the water pump.
- **Relay Module (1x)**: Controls the DC motor based on water level input.
- **9V Batteries (2x)**: Powers the Arduino boards.
- **Jumper Wires, Soldering Kit, etc.**

## Project Flowchart
Below is the flowchart describing the system's workflow:

![image](https://github.com/user-attachments/assets/2a046d64-391b-49e2-90d6-7192ea92f3bd)

## Circuit Schematic
Below is the circuit diagram for the Water Waste Reduction System:

![image](https://github.com/user-attachments/assets/78e7ce61-3029-4c57-b99a-e02b9663d471)

## Installation and Setup

### Hardware Setup
1. **Connect the Components**: Follow the pin diagram to connect the ultrasonic sensor, relay, NRF24L01 modules, and other components to the Arduino UNO boards.
2. **Power Setup**: Attach the 9V batteries to the Arduino UNO boards using battery clips.
3. **Attach Motors and Relay**: Connect the motor and relay to the Arduino UNO controlling the pump.

### Software Setup
1. **Download Arduino IDE**: Install the Arduino IDE from [here](https://www.arduino.cc/en/software).
2. **Install Libraries**:
   - [NRF24L01 Library](https://github.com/nRF24)
   - [SPI Library](https://github.com/arduino-libraries/SPI)
3. **Upload the Code**:
   - Open the provided code files in the Arduino IDE.
   - Upload the code to both Arduino UNO boards (transmitter and receiver).

### Pin Configurations

#### Arduino UNO (Transmitter - Water Level Sensor)
| Component           | Arduino Pin    |
|---------------------|----------------|
| Ultrasonic Sensor - Trig | Pin 3         |
| Ultrasonic Sensor - Echo | Pin 2         |
| NRF24L01 - CE        | Pin 9          |
| NRF24L01 - CSN       | Pin 10         |

#### Arduino UNO (Receiver - Pump Control)
| Component            | Arduino Pin    |
|----------------------|----------------|
| Relay Control        | Pin 2          |
| NRF24L01 - CE        | Pin 9          |
| NRF24L01 - CSN       | Pin 10         |

### Code Overview
- **Transmitter (Water Level Sensor)**:
   - Reads the water level using the ultrasonic sensor.
   - Transmits the water level data wirelessly using NRF24L01 to the receiver unit.
  
- **Receiver (Pump Control)**:
   - Receives the water level data from the transmitter.
   - Controls the relay to turn the pump on/off based on water level conditions.

### Usage
Once the setup is complete:
1. Power up both Arduino UNO boards.
2. The system will start monitoring the water levels and control the pump accordingly.
3. The water pump will turn off when the water level is below the set threshold to prevent overflow.

## Future Enhancements
- Implementing a mobile app for real-time water level monitoring.
- Adding more sensors for multi-point water level monitoring.
- Using solar power for energy efficiency.






