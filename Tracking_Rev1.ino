////////////////////////////////////Tracking//////////////////////


const int tracking_Pin = 9; 
const int ledPin = 13; 
void setup()
{
  Serial.begin(9600);
  pinMode(tracking_Pin, INPUT); 
  pinMode(ledPin, OUTPUT); 
}
void loop()
{
  boolean val = digitalRead(tracking_Pin); // read the value of tracking module
  if(val == HIGH) //if it is HiGH
  { 
    digitalWrite(ledPin, LOW); //turn off the led
    Serial.println("Detect: Black!");
  }
  else
  {
    digitalWrite(ledPin, HIGH); //turn on the led
    Serial.println("Detect: White!");
  }  
}
