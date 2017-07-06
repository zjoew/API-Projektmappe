#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,6,5,4,3);

unsigned long ultras()
{
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  return pulseIn(9,HIGH);
}

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
  unsigned long d = ultras()*10/58;
  if (d>=5)
  {
    lcd.print("Door is open!   ");
  }
  else
  {
    lcd.setCursor(8,0);
    lcd.print("closed!");
  }
}
