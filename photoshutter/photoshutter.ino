// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  
int pinServo = 9;
int pinRelay = 8;
int pos = 0;
 
void setup() 
{ 
  myservo.attach(pinServo);  // attaches the servo on pin 9 to the servo object 
  pinMode(pinRelay, OUTPUT);
} 
 
 
void loop() 
{ 
    myservo.write(150);
    digitalWrite(pinRelay, HIGH); 
    delay(4000);                       // waits 15ms for the servo to reach the position 
    digitalWrite(pinRelay, LOW); 
    myservo.write(20);              // tell servo to go to position in variable 'pos' 
    delay(1000);                       // waits 15ms for the servo to reach the position 
}
