#include<Servo.h>
int potpin=4;
int red=1;
int green=2;
int blue=3;
int val;
Servo myservo;
int trigPin=6; 
int echoPin=7;
long distance;
long duration;



void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  myservo.attach(9);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop()
{
  
  myservo.write(4);
  
  if (distance<=100)
  {
             digitalWrite(red,HIGH);
             delay(1000);
             digitalWrite(red,LOW);
             delay (1000);
             myservo.write(60);
   
    
  }
   if (distance<=100)
              
         {
             digitalWrite(green,HIGH);
             delay(1000);
             digitalWrite(green,LOW);
             delay(1000);
             myservo.write(120);
   
 }else
 { myservo.write(0);}
  
  
if (distance<=100)
              
         {
             digitalWrite(blue,HIGH);
             delay(1000);
             digitalWrite(blue,LOW);
             delay(1000);
             myservo.write(180);
   
 }else
 { myservo.write(0);}  
  
       
}
