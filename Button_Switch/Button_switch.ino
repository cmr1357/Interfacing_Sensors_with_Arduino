//////////////////////////////////When push the button LED in Arduino board will turn on///////////////////////////////



int inPin = 2;         // The number of the input pin(pin to the button switch)
int outPin = 13;       // The number of the output pin(LED pin in the board)

int currentstate = HIGH;      // the current state of the output pin
int reading;                 // the current reading from the input pin
int previousstate = LOW;    // the previous reading from the input pin

// the follow variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.

long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // the debounce time, increase if the output flickers

void setup()
{
  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);
}

void loop()
{
  reading = digitalRead(inPin);

  // if the input just went from LOW and HIGH and we've waited long enough
  // to ignore any noise on the circuit, toggle the output pin and remember
  // the time
 
  if (reading == HIGH && previousstate == LOW && millis() - time > debounce) 
  {
    if (currentstate == HIGH)
       currentstate = LOW;
    else
       currentstate = HIGH;

    time = millis();    
  }

  digitalWrite(outPin, state);

  previousstate = reading;
}
