#ifndef SENSOR_H
#define SENSOR_H

// Function to initialize the sensor
void initSensor();

// Function to read distance data from the sensor
float readDistance();

// Constants related to the sensor
#define MAX_DISTANCE 400 // Maximum distance in centimeters
#define MIN_DISTANCE 10   // Minimum distance in centimeters

#endif // SENSOR_H