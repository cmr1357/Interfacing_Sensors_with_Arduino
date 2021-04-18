/////////////////////////////////////////PIR MOTION SENSOR//////////////////////////


int inpin =9;
int state = LOW;
int value =0;
void setup() 
{
  // setup the led pin
  pinMode(ledpin, OUTPUT);
  pinMode(inpin, INPUT);

  Serial.begin(9600);
}

void loop() 
{
  // program for the MOtion Sensor

  value = digitalRead(inpin);

  if( value == HIGH)
  {
    
    if(state == LOW)
    {
        Serial.println("Motion detected!");
        state = HIGH;
    }
  }
    else
    {
        if(state == HIGH)
        {
          Serial.println("Motion Ented!");
         
          state = LOW;
        }
    }
}
