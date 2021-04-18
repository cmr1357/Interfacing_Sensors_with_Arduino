
/////////////////////////////////////////Metal Touch//////////////////////////////////


int analogInput = A0;
int digitalInput = 3;
 
void setup ()
{
  pinMode (analogInput, INPUT);
  pinMode (digitalInput, INPUT);     
  Serial.begin (9600);
}
 
 
void loop ()
{
  float Analog;
  bool Digital;
 
  // Current value will be read and converted to the voltage
  Analog = analogRead (analogInput) * (5.0 / 1023.0); 
  Digital = digitalRead (digitalInput);
 
  // Print the Analog voltage value
  Serial.print ("Analog voltage value:"); 
  Serial.print (Analog, 4);  
  Serial.print ("V, ");
  Serial.print ("Touch input:");
 
  if(Digital== HIGH )
  {
      Serial.println (" detected");
      delay (250);
  }
  else
  {
      Serial.println (" not detected");
  }
  
  delay (2500);
}
