// C++ code
//

const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;
  
  void setup ()
  {
  
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
  
}

int var1;
int var2;
int var3;
int var4;
int var5;

void loop ()
{
  
   var1 = digitalRead(2);
   var2 = digitalRead(3);
   var3 = digitalRead(4);
   var4 = digitalRead(5);
   var5 = digitalRead(6);
  
  if(var1){
   Serial.println("oi tudo bem?"); 
  }
  if(var2){
   Serial.println("como você está?"); 
  }
   if(var3){
   Serial.println("onde você mora?"); 
  }
   if(var4){
   Serial.println("quantos anos você tem?"); 
  }
   if(var5){
   Serial.println("qual o seu nome?"); 
  }

  
  delay(10);
}
