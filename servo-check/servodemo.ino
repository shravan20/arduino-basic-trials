#include<Servo.h>

Servo myservo;

void setup() 
{
myservo.attach(3);  

}

void loop() 
{
 
 myservo.write(0);
 delay(250);
 myservo.write(20);
 delay(250);
 myservo.write(40);
 delay(250);
  //myservo.detach();
 myservo.write(60);
 delay(250);

 myservo.write(80);
 delay(250);
 myservo.write(100);
 delay(250);
 
 
}
