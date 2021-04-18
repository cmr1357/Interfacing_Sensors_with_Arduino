////////////////////////////////////Ultrasonic sensor testing/////////////////////////////

//including the NewPing Library

#include "NewPing.h"

#define Trigger 9
#define echo 10

// maximum distance we want to ping for in cm.

#define Maxdistance 400

//NewPing setup of pins and maximum distance
NewPing sonar(Trigger, echo, Maxdistance);
float duration, distance;

void setup() 
{
  // setup serial monitor
  Serial.begin(9600);
}

void loop() 
{
  // send ping, get distance in cm
  
  distance= sonar.ping_cm();

  // send results to serial Monitor
  Serial.print("Distance = ");

  if(distance >= 400 || distance <= 2)
  {
    Serial.println("out of range");
  }
  else
  {
    Serial.print(distance);
    Serial.println("cm");
  }
   delay(500);
   

}
