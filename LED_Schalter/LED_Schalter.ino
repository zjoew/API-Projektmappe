const byte led=13;
const byte sw=2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT);
}

void loop() {
  boolean val=digitalRead(sw);
  if (val)
    {
      digitalWrite(led,HIGH);
    }
   else
    {
      digitalWrite(led,LOW);
    }
}
