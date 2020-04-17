#include <Arduino.h>

const int buzzer = 7;

void setup()
{
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int n = analogRead(A0);
  Serial.println(n);

  if (n > 50)
  {
    tone(buzzer, 1000);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
  else if (n <= 49 && n > 20)
  {
    tone(buzzer, 1000);
    delay(100);
    noTone(buzzer);
    delay(100);
  }
  else if (n < 20)
  {
    tone(buzzer, 1000);
    delay(1000);
  }
}