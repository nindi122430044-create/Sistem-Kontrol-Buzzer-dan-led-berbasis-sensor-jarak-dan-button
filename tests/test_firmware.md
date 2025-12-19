# Test Cases for Firmware

## Overview
This document outlines the test cases for the firmware of the "Sistem Kontrol Buzzer dan LED Berbasis Sensor Jarak dan Button" project. The purpose of these tests is to ensure that the functionality of the buzzer, LED, and sensor operates as intended.

## Test Cases

### Test Case 1: Buzzer Activation
- **Objective**: Verify that the buzzer activates when the sensor detects an object within a specified distance.
- **Preconditions**: The sensor is properly connected and initialized.
- **Steps**:
  1. Place an object within the sensor's detection range.
  2. Observe the buzzer's response.
- **Expected Result**: The buzzer should activate.

### Test Case 2: LED Activation
- **Objective**: Verify that the LED turns on when the button is pressed.
- **Preconditions**: The button and LED are properly connected and initialized.
- **Steps**:
  1. Press the button.
  2. Observe the LED's response.
- **Expected Result**: The LED should turn on.

### Test Case 3: Sensor Distance Reading
- **Objective**: Ensure that the sensor accurately reads the distance of an object.
- **Preconditions**: The sensor is properly connected and initialized.
- **Steps**:
  1. Place an object at a known distance from the sensor.
  2. Read the distance value from the sensor.
- **Expected Result**: The distance reading should match the known distance.

### Test Case 4: Button Debouncing
- **Objective**: Verify that the button press is registered correctly without false triggers.
- **Preconditions**: The button is properly connected and initialized.
- **Steps**:
  1. Rapidly press and release the button multiple times.
  2. Observe the LED's response.
- **Expected Result**: The LED should only turn on when the button is pressed, without any flickering.

### Test Case 5: System Reset
- **Objective**: Ensure that the system resets correctly when the reset button is pressed.
- **Preconditions**: The system is powered on and running.
- **Steps**:
  1. Press the reset button.
  2. Observe the system's behavior.
- **Expected Result**: The system should reset and return to its initial state.

## Conclusion
These test cases will help ensure that the firmware functions correctly and meets the project's requirements. Each test should be documented with results to track the performance and reliability of the system.