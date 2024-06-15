/*
    Project name :Servo Motor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-servo-motor
*/

#include <Servo.h>

Servo myServo;  // Create a servo object

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle); // Set servo position
    delay(15); // Delay for smooth movement
  }

  // Sweep the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle); // Set servo position
    delay(15); // Delay for smooth movement
  }
}
