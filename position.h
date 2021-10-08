/* Motion Functions*/

/* Wheel 1*/
void Hmotion1(int sp1)
{
  pot1 = analogRead(potPin1);                         //Read from pot
  error1 = sp1 - pot1;                            //Calculate error
  sum1 = sum1 + error1;                               //Sum of errors

  digitalWrite( H1IN2, error1>0);
  digitalWrite( H1IN1, error1<0);
  
  if(abs(error1)<10)
  {
    sum1=0;
    error1=0;
    pwm1=0;
    analogWrite(H1pwm, 0);
    flag1c = 1;
    //Serial.println("called");
  }
  if(abs(error1)>30&&flag1c!=1)
    pwm1 = kp1*error1 + ki1*sum1;                       //Pwm Expression
  else if(abs(error1)<30&&flag1c!=1)
    pwm1 = (kp1+0.2)*error1 + (ki1+0.005)*sum1;
  //pwm1 = 170;
  analogWrite(H1pwm, constrain(abs(pwm1),15,250));     //Write pwm  
}

/*Wheel 2*/
void Hmotion2(int sp2)
{
  pot2 = analogRead(potPin2);                         //Read from pot
  error2 = sp2 - pot2;                            //Calculate error
  sum2 = sum2 + error2;                               //Sum of errors

  digitalWrite( H2IN2, error2>0);
  digitalWrite( H2IN1, error2<0);  
  
  if(abs(error2)<5)
  {
    sum2=0;
    error2=0;
    analogWrite(H2pwm, 0);
    flag2c = 1;
    
  }
  
  pwm2 = kp2*error2 + ki2*sum2;                       //Pwm Expression
  //Serial.println("test");
  analogWrite(H2pwm, constrain(abs(pwm2),10,250));     //Write pwm  
}

/*Wheel 3*/
void Hmotion3(int sp3)
{
  pot3 = analogRead(potPin3);                         //Read from pot
  error3 = sp3 - pot3;                            //Calculate error
  sum3 = sum3 + error3;                               //Sum of errors

  digitalWrite( H3IN2, error3>0);
  digitalWrite( H3IN1, error3<0);  
  
  if(abs(error3)<5)
  {
    sum3=0;
    error3=0;
    analogWrite(H3pwm, 0);
    flag3c = 1;
    
  }
  
  pwm3 = kp3*error3 + ki3*sum3;                       //Pwm Expression
  //Serial.println("test");
  analogWrite(H3pwm, constrain(abs(pwm3),10,250));     //Write pwm  
}

/*Wheel4*/
void Hmotion4(int sp4)
{
  pot4 = analogRead(potPin4);                         //Read from pot
  error4 = sp4 - pot4;                            //Calculate error
  sum4 = sum4 + error4;                               //Sum of errors

  digitalWrite( H4IN2, error4>0);
  digitalWrite( H4IN1, error4<0);  
  
  if(abs(error4)<5)
  {
    sum4=0;
    error4=0;
    analogWrite(H4pwm, 0);
    flag4c = 1;
    
  }
  
  pwm4 = kp4*error4 + ki4*sum4;                       //Pwm Expression
  //Serial.println("test");
  analogWrite(H4pwm, constrain(abs(pwm4),10,250));     //Write pwm  
}
