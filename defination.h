//Cyt = 9,5,7,10 : 3,4,8,6
//l298= 3,4,11,12

/* POTS */
#define potPin1 A2
#define potPin2 A3
#define potPin3 A4
#define potPin4 A5

/* Wheel 1*/
#define H1pwm 3
#define H1IN1 36
#define H1IN2 37
#define V1pwm 9
#define V1dir 26


/* Wheel 2*/
#define H2pwm 4
#define H2IN2 38
#define H2IN1 39
#define V2pwm 5
#define V2dir 25

/* Wheel 3*/
#define H3pwm 11
#define H3IN1 41
#define H3IN2 40
#define V3pwm 7
#define V3dir 27

/* Wheel 4*/
#define H4pwm 12
#define H4IN1 43
#define H4IN2 42
#define V4pwm 10
#define V4dir 28

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
