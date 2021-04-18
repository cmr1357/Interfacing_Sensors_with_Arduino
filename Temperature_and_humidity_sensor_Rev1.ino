///////////////////////////////////Temperature and Humidity Sensor/////////////////

  // include the dht library
#include "dht.h"
#define dht_apin A0 //Analog pin A0 is connected.

dht DHT;
void setup() 
{
 
  Serial.begin(9600);
  delay(500);
  
}

void loop() 
{
  //program to read the data

  DHT.read11(dht_apin);

  Serial.print("Current humidity =");
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("temperature=");
  Serial.print(DHT.temperature);
  Serial.println("c");

  delay(5000);
  

}
