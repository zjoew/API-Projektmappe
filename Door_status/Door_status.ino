#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,6,5,4,3);

void setup() {
  pinMode(7,INPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Guten Tag, Boys!");
  lcd.setCursor(3,1);
  lcd.print("<Arduino>");
  delay(3000);
}

void loop() {
  int foto = analogRead(A0);
  boolean val = digitalRead(7);
  if (foto>=1010 && val==false)
  {
    lcd.clear();
    lcd.cursor();
    lcd.blink();
    lcd.print("Door is closed.");
  }
  else
  {
    lcd.clear();
    lcd.cursor();
    lcd.blink();
    lcd.print("Door is open.");
  }
}
