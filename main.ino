#include<Servo.h> //we are using commands in pre-made servo library

Servo Servo1; //create a servo object, so that we can tell it what to do 

int servoPin = 9; //tell the Arduino which pin it was connected 
int potPin = A0; //since we use potentiometer as an input device to control to servo motor


void setup() {
  Servo1.attach(servoPin); //the void setup link the servo to the pin
}

void loop() {
  int reading = analogRead(potPin); // we need to read the value from analog input to pin A0
  int angle = map(reading, 0, 1023, 0, 180); //as Arduino reads to voltage through pin A0(0 or 1023
 // but servo doesn't understand 1023 it just want 0 to 180 degrees 
  // we utilize voltage as the measurement of the angle!!! :DDD
  Servo1.write(angle); // implement
}
