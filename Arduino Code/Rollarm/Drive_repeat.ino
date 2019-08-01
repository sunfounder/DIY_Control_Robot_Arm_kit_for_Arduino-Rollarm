//Repeat the actions
void Drive_repeat(int n)
{
  //The first axis.
  if (Dif0[n] > 0)
  {
    for (int j = Joint0[n - 1]; j <= Joint0[n]; j++)
    {
      Servo_0.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint0[n - 1]; j >= Joint0[n]; j--)
    {
      Servo_0.write(j);
      delay(10);
    }
  }
  
  //The second axis.
  if (Dif1[n] > 0)
  {
    for (int j = Joint1[n - 1]; j <= Joint1[n]; j++)
    {
      Servo_1.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint1[n - 1]; j >= Joint1[n]; j--)
    {
      Servo_1.write(j);
      delay(10);
    }
  }
  
   //The third axis.
  if (Dif2[n] > 0)
  {
    for (int j = Joint2[n - 1]; j <= Joint2[n]; j++)
    {
      Servo_2.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint2[n - 1]; j >= Joint2[n]; j--)
    {
      Servo_2.write(j);
      delay(10);
    }
  }
  
  //The fourth axis.
  if (Dif3[n] > 0)
  {
    for (int j = Joint3[n - 1]; j <= Joint3[n]; j++)
    {
      Servo_3.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint3[n - 1]; j >= Joint3[n]; j--)
    {
      Servo_3.write(j);
      delay(10);
    }
  }
  
}

//Return to the original positions.
void Drive_init()
{
  //The first axis.
  if (Dif0[0] > 0)
  {
    for (int j = Joint0[Time - 1]; j <= Joint0[0]; j++)
    {
      Servo_0.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint0[Time - 1]; j >= Joint0[0]; j--)
    {
      Servo_0.write(j);
      delay(10);
    }
  }
  
  //The second axis.
  if (Dif1[0] > 0)
  {
    for (int j = Joint1[Time - 1]; j <= Joint1[0]; j++)
    {
      Servo_1.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint1[Time - 1]; j >= Joint1[0]; j--)
    {
      Servo_1.write(j);
      delay(10);
    }
  }
  
  //The third axis.
  if (Dif2[0] > 0)
  {
    for (int j = Joint2[Time - 1]; j <= Joint2[0]; j++)
    {
      Servo_2.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint2[Time - 1]; j >= Joint2[0]; j--)
    {
      Servo_2.write(j);
      delay(10);
    }
  }
  
  //The fourth axis.
  if (Dif3[0] > 0)
  {
    for (int j = Joint3[Time - 1]; j <= Joint3[0]; j++)
    {
      Servo_3.write(j);
      delay(10);
    }
  }
  else
  {
    for (int j = Joint3[Time - 1]; j >= Joint3[0]; j--)
    {
      Servo_3.write(j);
      delay(10);
    }
  }
  
}
