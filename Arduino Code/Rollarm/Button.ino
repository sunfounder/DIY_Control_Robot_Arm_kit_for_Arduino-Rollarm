//Calculate the time the button  pressed
void Button()
{
  if (digitalRead(3) == 0)
  {
    delay(10);
    if (digitalRead(3) == 0)
    {
      KeyValue = 0;
      while (!digitalRead(3))
      {
        KeyValue++;
        delay(100);
      }
    }
  }  
}
