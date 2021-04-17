//////////////////////////Produce tone in passive buzzer//////////////////////////////


const int buzzer = 7; //buzzer to arduino pin 7


void setup()
{
 
  pinMode(buzzer, OUTPUT); // Set buzzer pin as an output

}

void loop()
{
 
  tone(buzzer, 2000); // Send 1KHz sound signal
  delay(1000);        // wait for 1 sec
  noTone(buzzer);     // Stop sound
  delay(1000);        // wait for 1sec
  
}
