/*
NOTATION:
potPinx : Potentiometer reading X- 1,2,3,4

HXpwm   : Pwm(ENB) pin for Horizontal motor X - 1,2,3,4
HXIN1   : IN1 Pin of L298
HXIN2   : IN2 Pin of L298
*/

/************************************************************/
/* Header Files*/
#include "variables.h"
//#include "defination.h"
#include"def1.h"
#include "position.h"
//#include "locomotion.h"
//#include "pot_sync.h"
/***********************************************************/

/* Printing Pot values*/
void pot()
{
  Serial.print(analogRead(A0));
  Serial.print("\t");
  Serial.print(analogRead(A1));
  Serial.print("\t");
  Serial.print(analogRead(A2)); 
  Serial.print("\t");
  Serial.println(analogRead(A3));
}


void setup()
{
  pins();
  Serial.begin(9600);
}

void loop()
{
  pot();
  Hmotion1(H1set0);
  Hmotion2(H2set0);
  Hmotion3(H3set0);
  
// switch(state)
//  {
//    case 0:
//      pot();
//      break;
//      
//    case 1:
//      Hmotion1(H1set0);
//      Hmotion2(H2set0);
//      Hmotion3(H3set0);
//      Hmotion4(H4set0);
//
//      if(flag1c==1 && flag2c==1 && flag3c==1 && flag4c==1)
//      {
//        analogWrite(H1pwm, 0);
//        analogWrite(H2pwm, 0);
//        analogWrite(H3pwm, 0);
//        analogWrite(H4pwm, 0);
//        flag1c = 0;
//        flag2c = 0;
//        flag3c = 0;
//        flag4c = 0;
//        state=2;
//        delay(2000);
//      }
//      break;
//    case 2:
//      Hmotion1(H1set90);
//      Hmotion2(H2set90);
//      Hmotion3(H3set90);
//      Hmotion4(H4set90);
//
//      if(flag1c==1 && flag2c==1 && flag3c==1 && flag4c==1)
//      {
//        analogWrite(H1pwm, 0);
//        analogWrite(H2pwm, 0);
//        analogWrite(H3pwm, 0);
//        analogWrite(H4pwm, 0);
//        flag1c = 0;
//        flag2c = 0;
//        flag3c = 0;
//        flag4c = 0;
//        state=1;
//        delay(2000);
//      }
//      break;
//      case 3:
//        //Vmotion1();
////        Vmotion2();
//       // Vmotion3();
//        // Vmotion4();
//        break;
//      
//      default:
//        analogWrite(H1pwm, 0);
//        analogWrite(H2pwm, 0);
//        analogWrite(H3pwm, 0);
//        analogWrite(H4pwm, 0);
//        break;
//  }
//



}
