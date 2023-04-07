void setup()
{
  pinMode(13,OUTPUT);
 // RED LED
  pinMode(12,OUTPUT);
 // WHITE LED
  pinMode(11,OUTPUT);
 // BLUE LED

}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
  

   

}
