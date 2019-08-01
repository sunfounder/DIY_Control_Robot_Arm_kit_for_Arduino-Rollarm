/* -----------------------------------------------------------------------------
  Author             : Allen
  Check              : Amy
  Version            : V1.0
  Date               : 17/06/2016
  Description        : Initial positions of steering gears
  Company website    : http://www.sunfounder.com
   ---------------------------------------------------------------------------*/

/* Include -------------------------------------------------------------------*/
#include <Servo.h>    // Create servo object to control a servo 

/* Define -------------------------------------------------------------------*/
Servo Servo_0;
Servo Servo_1;
Servo Servo_2;
Servo Servo_3;

/*
  - setup function
  ---------------------------------------------------------------------------*/
void setup() 
{
  //Start the serial. 
  Serial.begin(9600);
  
  //Attach the servos on pins to the servo object
  Servo_0.attach(4);
  Servo_1.attach(5);
  Servo_2.attach(6);
  Servo_3.attach(7);

}

/*
  - loop function
   ---------------------------------------------------------------------------*/
void loop() 
{
  //Set the initial positions of steering gears
  Servo_0.write(90);
  Servo_1.write(90);
  Servo_2.write(90);
  Servo_3.write(170);
  while(1);
}
