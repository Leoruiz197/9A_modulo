const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;

const int bot1 = 8;
const int bot2 = 9;
const int bot3 = 10;
  
 void setup()
 { 
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);

   pinMode(bot1, INPUT);
   pinMode(bot2, INPUT);
   pinMode(bot3, INPUT);
 }
 
 int var1;
 int var2;
 int var3;

 void loop()
 {
   var1 = digitalRead(bot1);
   var2 = digitalRead(bot2);
   var3 = digitalRead(bot3);

   if(var1){
    acendePar();
   }
   if(var2){
    acendeImpar();
   }
   if(var3){
    apagarTudo();
   }
 }

void acendeTudo(){
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, HIGH);
}

void acendePar(){
   digitalWrite(led2, HIGH);
   digitalWrite(led4, HIGH);
}

void acendeImpar(){
   digitalWrite(led1, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led5, HIGH);
}

void apagarTudo(){
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW); 
}
