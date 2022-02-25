const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;

const int bot2 = 8;
const int bot3 = 9;
const int bot4 = 10;
void setup()
{
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);


  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot4, INPUT);
  
}

int var1 = digitalRead(bot2);
int var2 = digitalRead(bot3);
int var3 = digitalRead(bot4);

void loop()
{
  var1 = digitalRead(bot2);
  var2 = digitalRead(bot3);
  var3 = digitalRead(bot4);  
  
  if(var1){
  	acendePar();	    
  }
  if (var2){
  	acendeImpar();	    
  }
  if (var3){
  	apagaTudo();
  }
}

void acendeTudo(){
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
 
void acendePar(){
  digitalWrite(led2,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led6,HIGH);
}
 void apagaTudo(){
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
  void acendeImpar(){
  
  digitalWrite(led3,HIGH);
  digitalWrite(led5,HIGH);

}  
    
    

