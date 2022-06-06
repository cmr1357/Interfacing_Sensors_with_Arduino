/////////////////////////////////////////Linear Hall/////////////////////////////////

int digitalPin = 3; // linear Hall magnetic sensor digital interface
int analogPin = A0; // linear Hall magnetic sensor analog interface
int digitalVal ; // digital readings
int analogVal; // analog readings

void setup ()
{
  pinMode (led, OUTPUT); 
  pinMode (digitalPin, INPUT); 
  pinMode(analogPin, INPUT); 
  Serial.begin(9600);
}

void loop ()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin) ; 
  if (digitalVal == HIGH) // checking for the magnetic field
  {
    Serial.println("Magnetic field is present");
  }
  else
  {
    Serial.println("No Magnetic field ");
  }
  
  // Read the analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal); // print analog value

  delay(100);
}
