////////////////////////////////ROTARY ENCODER/////////////////////////////////


//SETUP INPUT PINS
#define clk 2
#define dt 3
#define sw 4

int counter =0;
int currentclk;
int lastclk;
String currentdir ="";
unsigned long lastbuttonpress = 0;


void setup() 
{
  // Set Encoder inputpins

  pinMode(clk,INPUT);
  pinMode(dt,INPUT);
  pinMode(sw,INPUT_PULLUP);

  //setup serial monitor

  Serial.begin(9600);

  //Read the initial state of clk
  lastclk = digitalRead(clk);
  

}

void loop() 
{
  
  // Read the current state of clk
  currentclk = digitalRead(clk);

  //If last and current state of clk are different, then pulse occured
  //read to only 1 state change to avoid double count

  if(currentclk != lastclk && currentclk == 1)
  {
    
    //If the dt state is different than the clk state then
    // the encoder is rotating CCW so decrement
    if(digitalRead(dt)!= currentclk)
    { 
      counter--;
      //currentdir =="CCW";
      Serial.print("counterclockwise");
    }
    else
    {
      //encoder is rotating cw so increment
      counter ++;
      //currentdir ="CW";
      Serial.print("clockwise");
     }
     Serial.print("direction:");
     Serial.print(currentdir);
     Serial.print(" 1 counter:");
     Serial.println(counter);
     }
     
     lastclk = currentclk;

         
}
