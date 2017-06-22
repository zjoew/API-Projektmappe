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
  pinMode(8,OUTPUT);
  digitalWrite(13,HIGH);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Guten Tag, Boys!");
  lcd.setCursor(3,1);
  lcd.print("<Arduino>");
  delay(5000);
}

void loop() {
  boolean val = digitalRead(7);
  unsigned long d;
  if (val)
    {
      lcd.clear();
      lcd.cursor();
      lcd.blink();
      lcd.print("Signal kommt...");
      digitalWrite(13,LOW);
      delay(500);
      digitalWrite(13,HIGH);
      delay(500);
      digitalWrite(13,LOW);
      delay(500);
      digitalWrite(13,HIGH);
      delay(500);
      digitalWrite(13,LOW);
      delay(500);
      digitalWrite(8,HIGH);
      digitalWrite(13,HIGH);
      delay(800);
      d = ultras()*10/58;
      digitalWrite(8,LOW);
      digitalWrite(13,LOW);
      lcd.clear();
      lcd.print("Abstand:");
      lcd.setCursor(3,1);
      lcd.print(d);
      lcd.print("mm");
      delay(5000);
    }
  else
    {
      digitalWrite(13,HIGH);
      lcd.clear();
      lcd.cursor();
      lcd.blink();
      lcd.print("No signal...");
      lcd.setCursor(12,1);
      lcd.print(millis()/1000);
    }
}
