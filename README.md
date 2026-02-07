# Iot-project

Project Overview

This project is a real-time monitoring system for room temperature and humidity using an Arduino microcontroller and a DHT11 sensor. The sensor data is transmitted wirelessly via a Bluetooth module to a mobile application built using MIT App Inventor, where continuous temperature and humidity changes are visualized graphically.
The system demonstrates the integration of hardware sensing, wireless communication, and mobile application development, making it suitable for IoT and sensor-based applications.

Technologies & Tools Used:

Arduino (C++) 

DHT11 Sensor – Temperature and humidity sensing

Bluetooth Module (HC-05) – Wireless communication

MIT App Inventor – Android mobile application development

Arduino IDE – Code upload and debugging



Project Structure:

Arduino/
└── dht11_bluetooth.ino


MobileApp/
└── DHT11application.aia

File Description

dht11_bluetooth.ino: Reads temperature and humidity values from the DHT11 sensor and sends the data via Bluetooth.

DHT11application.aia: MIT App Inventor project file for the mobile application that receives and displays sensor data.




How the System Works:

The Arduino initializes the DHT11 sensor and the Bluetooth module.

Temperature and humidity values are read at fixed intervals.

The readings are sent as serial data via Bluetooth.

The mobile app receives the data wirelessly.

The app displays the values numerically and plots them on real-time graphs.




Setup & Usage:

Connect the DHT11 sensor to the Arduino (VCC, GND, Data pin).

Connect the Bluetooth module to the Arduino RX/TX pins.

Upload the Arduino code using the Arduino IDE.

Install or import the .aia file into MIT App Inventor.

Pair the Bluetooth module with your mobile phone.

Open the app and start monitoring temperature and humidity data.
