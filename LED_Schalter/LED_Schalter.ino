const byte led = 13;
const byte sw = 2;
byte click = 0;
boolean lastState = 0;
boolean toggle = 0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT);
  lastState = digitalRead(sw);
}

void loop() {
  boolean b1 = digitalRead(sw);
  if (b1 != lastState)
    {
      delay (20);
      boolean b2 = digitalRead (sw);
      if (b1 == b2)
        {
          lastState = b1;
          click++;
        }
    }
   if (click == 2)
    {
      click = 0;
      toggle = !toggle;
      digitalWrite (led,toggle);
    }
}
