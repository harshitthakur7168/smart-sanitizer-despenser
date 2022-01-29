int input;
#include <LiquidCrystal.h>
#include<Servo.h>
Servo srv;
float cm = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  srv.attach(8);
  lcd.begin(16, 2);
  lcd.print("Hellow Sir ");
  pinMode(7, INPUT);
  delay (5000);
}

void loop() {
  
  
  input = map(analogRead(0), 0, 1023, 0, 300);
  if(input > 199)
  {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  else if (input > 99)
  {
    digitalWrite(13, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
  else if (input > -1)
  {
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
  {
    lcd.clear();
  
  cm = 0.01723 * readUltrasonicDistance(7);
  
  lcd.setCursor(0, 0);
  
  if (cm<50)
  {
  srv.write(90);
  lcd.setCursor(0,0);
  lcd.print("Dispense : YES  ");
  }
  else 
  {
  srv.write(0);
  lcd.setCursor(0,0);
  lcd.print("Dispense : NO");
  }
  }
    
  
  delay(1000);
}

long readUltrasonicDistance(int pin)
{
  pinMode(pin, OUTPUT);  
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  return pulseIn(pin, HIGH);
}
