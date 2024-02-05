int red=10;

void setup()
{ 
  pinMode(red,OUTPUT);
}
void loop()
{
  analogWrite(red,75);
  delay(1000);
  analogWrite(red,150);
  delay(200);
  analogWrite(red,255);
  delay(200);
  analogWrite(red,150);
  delay(200);
  analogWrite(red,75);  
}


