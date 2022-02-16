const int led1 = 2;
const int led2 = 3;
const int botao1 = 4;
const int botao2 = 5;

int var1;
int var2;
  
 void setup()
 { 
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){
       digitalWrite(led1, HIGH);
   }else{
       digitalWrite(led1, LOW);
   }

   if(!var2){
       digitalWrite(led2, HIGH);
   }else{
       digitalWrite(led2, LOW);
   }
 }
