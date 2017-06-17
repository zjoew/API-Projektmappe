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
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  lcd.begin(16,2);
  lcd.print("Guten Tag!");
  delay(3000);
}

void loop() {
  boolean val = digitalRead(7);
  unsigned long d = ultras()*10/58;
  if (val)
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.cursor();
      lcd.blink();
      digitalWrite(13,HIGH);
      delay(300);
      digitalWrite(13,LOW);
      delay(300);
      digitalWrite(13,HIGH);
      delay(200);
      digitalWrite(13,LOW);
      delay(200);
      digitalWrite(13,HIGH);
      delay(100);
      digitalWrite(13,LOW);
      delay(100);
      lcd.print("Abstand:");
      lcd.setCursor(0,1);
      lcd.print(d);
      lcd.print(" mm");
      delay(3000);
    }
  else
    {
      digitalWrite(13,LOW);
    }
}
