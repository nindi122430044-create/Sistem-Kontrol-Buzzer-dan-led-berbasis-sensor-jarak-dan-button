// This file contains the main Arduino sketch for the project.
// It initializes the hardware components, sets up the loop for reading sensor data,
// and controls the buzzer and LED based on the sensor input and button state.

#include <sensor.h>

const int buzzerPin = 9; // Pin connected to the buzzer
const int ledPin = 10;    // Pin connected to the LED
const int buttonPin = 2;  // Pin connected to the button
int buttonState = 0;      // Variable for reading the button status

void setup() {
    pinMode(buzzerPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
    Serial.begin(9600);
    sensorInit(); // Initialize the sensor
}

void loop() {
    buttonState = digitalRead(buttonPin); // Read the button state
    int distance = readDistance(); // Read distance from the sensor

    if (distance < 20) { // If an object is detected within 20 cm
        digitalWrite(ledPin, HIGH); // Turn on the LED
        if (buttonState == HIGH) { // If the button is pressed
            digitalWrite(buzzerPin, HIGH); // Activate the buzzer
        } else {
            digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
        }
    } else {
        digitalWrite(ledPin, LOW); // Turn off the LED
        digitalWrite(buzzerPin, LOW); // Ensure the buzzer is off
    }

    delay(100); // Delay for stability
}