// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
    int botao = digitalRead(4);
    digitalWrite(3, botao);
    delay(10);
}