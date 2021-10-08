
/* POTS */
#define potPin1 A0
#define potPin2 A1
#define potPin3 A2
#define potPin4 A3

/* Wheel 1*/
#define H1pwm 5
#define H1IN1 2
#define H1IN2 4
//#define V1pwm 9
//#define V1dir 26


/* Wheel 2*/
#define H2pwm 10
#define H2IN2 6
#define H2IN1 7
//#define V2pwm 5
//#define V2dir 25

/* Wheel 3*/
#define H3pwm 3
#define H3IN1 13
#define H3IN2 12
//#define V3pwm 7
//#define V3dir 27

/* Wheel 4*/
#define H4pwm 11
#define H4IN1 8
#define H4IN2 9
//#define V4pwm 10
//#define V4dir 28
/* PinModes */
void pins()
{
  /*All Pots*/
  pinMode(potPin1,INPUT);
  pinMode(potPin2,INPUT);
  pinMode(potPin3,INPUT);
  pinMode(potPin4,INPUT);

  /*Wheel 1*/
  pinMode(H1pwm,OUTPUT);
  pinMode(H1IN1,OUTPUT);
  pinMode(H1IN2,OUTPUT);

  /*Wheel 2*/
  pinMode(H2pwm,OUTPUT);
  pinMode(H2IN1,OUTPUT);
  pinMode(H2IN2,OUTPUT);

  /*Wheel 3*/
  pinMode(H3pwm,OUTPUT);
  pinMode(H3IN1,OUTPUT);
  pinMode(H3IN2,OUTPUT);
  /*Wheel 4*/
  pinMode(H4pwm,OUTPUT);
  pinMode(H4IN1,OUTPUT);
  pinMode(H4IN2,OUTPUT);
  

}
