/* Variables and Constants */

/* Wheel1*/
int sum1 = 0, H1set0=525, H1set90=135, pwm1;
float ki1 = 0.004;
float kp1 = 0.8;
bool flag1c = 0;
int pot1,error1;



/* Wheel2*/
int sum2 = 0, H2set0=119, H2set90=475, pwm2;
float ki2 = 0.0035;
float kp2 = 0.75;
bool flag2c = 0;
int pot2,error2;



/* Wheel3*/
int sum3 = 0, H3set0=830, H3set90=470, pwm3;
float ki3 = 0.009;
float kp3 = 1;
bool flag3c = 0;
int pot3,error3;




/* Wheel4*/

int sum4 = 0, H4set0=394, H4set90=870, pwm4;
float ki4 = 0.006;
float kp4 = 0.8;
bool flag4c = 0;
int pot4,error4;


// M1, M4,LOW =Forward
//M2,M3 HIGH=Forward


/* States */
/*
0 -  read pots
1 - 0 deg
2 - 90 deg
3 - Vmotion()


*/

int state = 1;

/*************************/
