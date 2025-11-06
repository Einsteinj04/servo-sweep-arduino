#include <Servo.h>

Servo einstein;   // Create a Servo object named 'einstein'
int pos = 0;      // Variable to store the servo position

void setup() {
  einstein.attach(9);  // Attach the servo to digital pin 9
}

void loop() {
  // Move the servo from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    einstein.write(pos);   // Set servo position
    delay(15);             // Wait 15 ms for the servo to reach the position
  }

  // Move the servo back from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    einstein.write(pos);   // Set servo position
    delay(15);             // Wait 15 ms for the servo to reach the position
  }
}
