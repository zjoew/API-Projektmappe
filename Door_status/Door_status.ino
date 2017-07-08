#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,6,5,4,3);

unsigned long ultras()
{
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  return pulseIn(9,HIGH);
}

  boolean state = true;
  unsigned long d;
  int t;  

void setup() {
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  lcd.begin(16,2);
  lcd.print("Guten Tag, Boys!");
  lcd.setCursor(3,1);
  lcd.print("<Arduino>");
  delay(3000);
  lcd.clear();
}

void loop() {
  d = ultras()/58;
  if (d > 3)
  {
    if (state)
    {
      t = millis();
    }
    lcd.home();
    lcd.print("Door is open!   ");
    lcd.setCursor(4,1);
    lcd.print("before ");
    lcd.print((millis()-t)/1000);
    lcd.print("s");
    state = false;
  }
  else
  {
    lcd.print("Door is closed!");
    lcd.setCursor(4,1);
    lcd.print("<Arduino>   ");
    state = true;
  }
}
