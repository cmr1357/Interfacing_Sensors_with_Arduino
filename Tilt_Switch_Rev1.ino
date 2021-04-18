////////////////////////////////////Tilt Switch/////////////////////////////////

int tiltPin = 9;      //  tilt switch pin
int ledPin =  13;     //  LED pin
int tiltState = 0;    // variable for reading the tilt switch status

void setup() 
{  
  pinMode(ledPin, OUTPUT);  // set the LED pin as output      
  pinMode(tiltPin, INPUT);  // set the tilt switch pin as input
}

void loop()
{
  // get the tilt switch state
  tiltState = digitalRead(tiltPin);

  // check if tilt switch is tilted.
  if (tiltState == HIGH) 
  {     
    digitalWrite(ledPin, HIGH);  
  } 
  else 
  {
    digitalWrite(ledPin, LOW); 
  }
}
//observation: it is low when it is up and turn to right all other state it is high
