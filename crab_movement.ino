#include <Servo.h>

// Define the servo objects
//left up 
Servo servo_left_front_first;
Servo servo_left_front_second;
//left down
Servo servo_left_back_first;
Servo servo_left_back_second;
//right up 
Servo servo_right_front_first;
Servo servo_right_front_second;
//right down
Servo servo_right_back_first;
Servo servo_right_back_second;

// Define the pins to which the servos are connected
// pin for left up
const int servo1Pin = 2;
const int servo2Pin = 3;
//pin for left down
const int servo3Pin = 4;
const int servo4Pin = 5;
//pin for right up
const int servo5Pin = 6;
const int servo6Pin = 7;
//pin for right down
const int servo7Pin = 8;
const int servo8Pin = 9;


// Define the angles for the positions
//left up
const int initialAngle_left_front_first = 90; 
const int targetAngle_left_front_first  = 140; 

const int initialAngle_left_front_second = 151; 
const int targetAngle_left_front_second  = 100; 
//left down
const int initialAngle_left_back_first = 90; 
const int targetAngle_left_back_first  = 20; 

const int initialAngle_left_back_second = 140; 
const int targetAngle_left_back_second  = 91; 
//right up
const int initialAngle_right_front_first = 0; 
const int targetAngle_right_front_first  = 90; 

const int initialAngle_right_front_second = 151; 
const int targetAngle_right_front_second  = 100; 
//right down
const int initialAngle_right_back_first = 90; 
const int targetAngle_right_back_first  = 20; 

const int initialAngle_right_back_second = 140; 
const int targetAngle_right_back_second  = 91; 

// Define delay
int delayTime = 500;

void setup() {
  // Attach the servo objects to their respective pins
  //left up
  servo_left_front_first.attach(servo1Pin);
  servo_left_front_second.attach(servo2Pin);
  //left down
  servo_left_back_first.attach(servo3Pin);
  servo_left_back_second.attach(servo4Pin);
   //right up
  servo_right_front_first.attach(servo5Pin);
  servo_right_front_second.attach(servo6Pin);
  //left down
  servo_right_back_first.attach(servo7Pin);
  servo_right_back_second.attach(servo8Pin);


  // Set initial positions
  //left up
  servo_left_front_first.write(initialAngle_left_front_first);
  servo_left_front_second.write(initialAngle_left_front_second);
  //left down
  servo_left_back_first.write(initialAngle_left_back_first);
  servo_left_back_second.write(initialAngle_left_back_second);
   //right up
  servo_right_front_first.write(initialAngle_right_front_first);
  //servo_right_front_second.write(initialAngle_right_front_second);
  //right down
  //servo_right_back_first.write(initialAngle_right_back_first);
  //servo_right_back_second.write(initialAngle_right_back_second);
}

void loop() {
  
  delay(100);
  // Move servo1 to target angle
  servo_left_front_first.write(targetAngle_left_front_first);
  servo_left_back_first.write(targetAngle_left_back_first);
  delay(delayTime);
  
  // Move servo2 to target angle
  servo_left_front_second.write(targetAngle_left_front_second);
  servo_left_back_second.write(targetAngle_left_back_second);
  // Delay for a while
  delay(delayTime);
  
  // Move servo1 back to initial angle
 servo_left_front_first.write(initialAngle_left_front_first);
 servo_left_back_first.write(initialAngle_left_back_first);
  delay(delayTime);
  
  // Move servo2 back to initial angle
  servo_left_front_second.write(initialAngle_left_front_second);
  servo_left_back_second.write(initialAngle_left_back_second);
  // Delay for a while
  delay(delayTime);
}
