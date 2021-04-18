///////////////////////////////Seven Color flash//////////////////////////////////////


int LEDPin = 13; // select a digital pin for the LED

void setup() 
{ 
  pinMode (LEDPin, OUTPUT);
  Serial.begin (9600);      // Setup serial communication
}

void loop() 
{
  // Turn the Led on and then off
  Serial.println ("LED ON");
  digitalWrite (LEDPin, HIGH);
  delay(1000);

  Serial.println ("LED OFF");
  digitalWrite (LEDPin, LOW);
  delay(1000);
}
