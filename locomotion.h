void Vmotion1()   
{
  digitalWrite(V1dir, LOW);
  analogWrite(V1pwm, 50);
}
void Vmotion2()
{
  digitalWrite(V2dir,HIGH);
  analogWrite(V2pwm, 0);
  
 }
 
 void Vmotion3()
{
  digitalWrite(V3dir, HIGH);
  analogWrite(V3pwm, 75);
  
 }
 void Vmotion4()
{
  digitalWrite(V4dir, LOW);
  analogWrite(V4pwm, 50);
  
 }
