// C++ code
//
const int led1 = 3;
const int botao1=2;

int var1;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(botao1, INPUT);
}

void loop()
{
  var1 =digitalRead(botao1);
 
  if(var1){
   
  digitalWrite(led1, HIGH);
  }else{
  digitalWrite(led1, LOW);
  }
  delay(10);
}
