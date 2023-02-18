
const int ledRosso=11;
const int pulsante=10;
const int buzzer=13;
bool Rosso;

void setup() {
pinMode (ledRosso, OUTPUT);
pinMode (pulsante, INPUT_PULLUP);
pinMode (buzzer , OUTPUT);
}

void loop() 
{ 
  Rosso=digitalRead(pulsante);
  while(Rosso==0)
  {
    tone (buzzer, 262);
    digitalWrite (ledRosso,HIGH);
    Rosso=digitalRead(pulsante); 
    
  }
  noTone (buzzer);
  digitalWrite (ledRosso,LOW);
}
 
