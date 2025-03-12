#include <Arduino.h>


#define entrada1  3
#define entrada2  4
#define entrada3  5
#define salida  8

void setup() 
{
  pinMode(entrada1,INPUT);
  pinMode(entrada2,INPUT);
  pinMode(entrada3,INPUT);
  pinMode(salida,OUTPUT);
}

void loop() 
{
  if(digitalRead(entrada1) == 1 && digitalRead(entrada2) == 1 && digitalRead(entrada3) == 1)
  {
    digitalWrite(salida,HIGH);
  }

  else
  {
    digitalWrite(salida,LOW);
  }
}
