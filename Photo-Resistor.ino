///////////////////////////////////////////Photo Resistor////////////////////////////////////////

int LEDPin = 4;       // select a digital pin for the LED
int sensorPin = A0;   // select the analog input pin for the photoresistor
int threshold = 300;  // analog input trigger level from photoresistor
int sensorValue = 0;  // photoresistor value read from analog input pin

void setup() 
{
 
pinMode (LEDPin, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT); // built-in LED, on pin 13
Serial.begin(9600); //Open serial connection

}
void loop() 
{

  Serial.println ("LED ON");
  digitalWrite (LEDPin, HIGH);
  delay(10000);

  Serial.println ("LED OFF");
  digitalWrite (LEDPin, LOW);
  delay(2000);
if (analogRead(sensorPin) < threshold) 
 {
    // low light, so switch the light (LED) on
    digitalWrite(LED_BUILTIN, HIGH);
 }
else
 {
    // light level high enough, so switch the light (LED) off
    digitalWrite(LED_BUILTIN, LOW);
 }
    // wait for ADC to settle before next reading
  
  delay(2000);
} 
