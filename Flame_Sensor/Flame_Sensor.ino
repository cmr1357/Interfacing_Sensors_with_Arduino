/////////////////////////////Program to detect Fire////////////////////////////////

//setting the lowest and highest sensor readings:
const int sensorMin = 0;     // sensor minimum
const int sensorMax = 1024;  // sensor maximum

void setup() 
{
  Serial.begin(9600); // initialize serial communication @ 9600 baud:  
}
void loop() 
{
  int sensorReading = analogRead(A0);// read the sensor on analog A0:
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3); // map the sensor range:
  
 
  switch (range) 
  {
  case 0:    // A fire closer than 1.5 feet away.
    Serial.println("** Close Fire **");
    break;
  
  case 1:    // A fire between 1-3 feet away.
    Serial.println("** Distant Fire **");
    break;
  
  case 2:    // No fire detected.
    Serial.println("No Fire");
    break;
  }
  
  delay(1);  // delay between reads
}
