//Record the values ot the potentiometers.
void Record()
{
  Joint0[Time] = analogRead(A0);
  Joint1[Time] = analogRead(A1);
  Joint2[Time] = analogRead(A2);
  Joint3[Time] = analogRead(A3);
}

//Read the values ot the potentiometers.
void ReadPot()
{
  SensVal[0] = 0;
  SensVal[1] = 0;
  SensVal[2] = 0;
  SensVal[3] = 0;
  
  SensVal[0] = analogRead(A0);
  SensVal[1] = analogRead(A1);
  SensVal[2] = analogRead(A2);
  SensVal[3] = analogRead(A3);
}

//The value of the potentiometer is matched to the angle value.
void Mapping0()
{
  SensVal[0] = map(SensVal[0], 0, 1023, 10, 170); 
  SensVal[1] = map(SensVal[1], 0, 1023, 10, 170);
  SensVal[2] = map(SensVal[2], 0, 1023, 10, 170); 
  SensVal[3] = map(SensVal[3], 0, 1023, 100, 180);
}

//The value of the potentiometer is matched to the angle value.Record the times of the actions
void Mapping1()
{
  Joint0[Time] = map(Joint0[Time], 0, 1024, 0, 170); 
  Joint1[Time] = map(Joint1[Time], 0, 1024, 0, 170); 
  Joint2[Time] = map(Joint2[Time], 0, 1024, 0, 170); 
  Joint3[Time] = map(Joint3[Time], 0, 1024, 100, 175); 
  Time++;
}

//Calculate the difference between each action
void Calculate()
{
  for (int i = 0; i < Time; i++)
  {
    if (i == 0)
    {
      Dif0[0] = Joint0[0] - Joint0[Time - 1];         
      Dif1[0] = Joint1[0] - Joint1[Time - 1];
      Dif2[0] = Joint2[0] - Joint2[Time - 1];
      Dif3[0] = Joint3[0] - Joint3[Time - 1];
    }
    else
    {
      Dif0[i] = Joint0[i] - Joint0[i - 1];
      Dif1[i] = Joint1[i] - Joint1[i - 1];
      Dif2[i] = Joint2[i] - Joint2[i - 1];
      Dif3[i] = Joint3[i] - Joint3[i - 1];
    }
  }
}
