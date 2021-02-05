void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);// put your setup code here, to run once:

}

void loop() 
{
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(2,HIGH);
 delay(1000);digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(2,LOW);
 delay(1000);
 
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(4,HIGH);
 delay(1000);digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(9,LOW);
 digitalWrite(4,LOW);
 delay(1000);
 
 digitalWrite(11,HIGH);
 delay(1000);digitalWrite(11,LOW);
 delay(1000);

 digitalWrite(2,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 delay(1000);digitalWrite(2,LOW);
 digitalWrite(11,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 delay(1000);

 
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(4,HIGH);
 delay(1000);digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(9,LOW);
 digitalWrite(4,LOW);
 delay(1000);
 
 
 digitalWrite(11,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(4,HIGH);
 delay(1000);
 digitalWrite(11,LOW);
 digitalWrite(2,LOW);
 digitalWrite(4,LOW);
 delay(1000);
 
 
 
 
 // put your main code here, to run repeatedly:

}
