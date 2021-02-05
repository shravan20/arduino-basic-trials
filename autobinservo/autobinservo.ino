
#include<Servo.h>

Servo x;
int echo=2;
int trig=3;
int dist=0;

int dist_cal()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(20);
  digitalWrite(trig,LOW); 

  float duration=pulseIn(echo,HIGH);
  float xdist=duration/29/2;
  return (int) xdist;
}

void setup() 
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() 
{
  dist=dist_cal();
  Serial.println("\nDISTANCE:"+dist);
  
  if(dist<20)
  {   
    x.attach(4);
    for(int i=0;i<=180;i+=20)
    {
     
      x.write(i);
      delay(250);
     
    }
  }
  else 
  {
   
    x.attach(4);
    delay(1000);
    x.detach();
  }
  
}
