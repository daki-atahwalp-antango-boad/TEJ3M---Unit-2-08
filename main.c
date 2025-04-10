/*
 * Created by: Daki
 * Created on: Apr 2025
 * 
 * This program turns a servo dependent on what the resistance is
 * 
 */

// variables and components
# include <Servo.h>
float analogPin = 0;
float potentiometerValue;
const int CONVERT_ANGLE = 5.7;
Servo servoNumber1;

void setup(){
    // attaching servo to arduino
    servoNumber1.attach(8);
}

void loop(){
    // finding the potVal by reading analogPin
    potentiometerValue;
    potentiometerValue = analogRead(analogPin);
    // converting potVal into degrees of a circle
    potentiometerValue = potentiometerValue / CONVERT_ANGLE;
    // turning servo to potVal in degrees
    servoNumber1.write(potentiometerValue); 
    delay(100);
}
