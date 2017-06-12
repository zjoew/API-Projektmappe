const byte led = 13;
const byte cds = A0;
void setup() {
  pinMode (led,OUTPUT);
}

void loop() {
  int val;
  val = analogRead(A0);
  if (val >= 700)
    {
      digitalWrite(13,HIGH);
    }
   else if (val < 600)
    {
      digitalWrite(13,LOW);
    }
}
