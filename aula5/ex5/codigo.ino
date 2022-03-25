// C++ code
//
const int led = 2;
const int bot = 4;
  int var;
void setup()
{
  pinMode(led, OUTPUT);
   pinMode(bot, INPUT);
}

void loop()
{
  var = digitalRead(bot);
  
  if(var){
       digitalWrite(led,HIGH);
  }else{
       digitalWrite(led,LOW);
  }
  delay(10); // Wait for 1000 millisecond(s)
}
