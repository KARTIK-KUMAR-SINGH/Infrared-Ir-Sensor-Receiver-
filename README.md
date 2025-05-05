# Infrared-Ir-Sensor-Receiver-
This project uses an Arduino Uno, a TSOP1738 infrared receiver, and an IR remote to wirelessly control an LED. When a specific button on the remote is pressed, the Arduino reads the IR signal and toggles the LED's state between ON and OFF, allowing simple remote-controlled lighting functionality.
This project demonstrates how to use an Arduino Uno and a TSOP1738 infrared (IR) receiver to control an LED using a standard IR remote control. The core functionality involves receiving an IR signal from a remote, decoding it, and using it to toggle the state of an LED—turning it ON or OFF based on user input.

The TSOP1738 sensor detects modulated infrared signals (usually at 38kHz) emitted by the remote. When a button is pressed on the remote, the sensor sends a signal to the Arduino through a digital pin. The Arduino runs a program using the IRremote library, which decodes the received signal into a unique hexadecimal code corresponding to the pressed button.

When the code matches a predefined value (assigned to a specific remote button), the Arduino toggles the state of the connected LED. This means that each press of the remote button alternately turns the LED ON or OFF, providing a simple and effective way to control electronics wirelessly.

The LED can be either the built-in LED on pin 13 or an external one connected through a current-limiting resistor to a digital pin (e.g., pin 7). This setup is ideal for beginners in embedded systems, showcasing the basics of wireless control, sensor interfacing, and digital output using Arduino.

This project can be extended to control multiple devices, build a remote-controlled appliance system, or integrate with relay modules for higher voltage control, making it a great foundation for smart home applications.
