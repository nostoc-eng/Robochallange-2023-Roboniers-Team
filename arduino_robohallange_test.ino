#define irR  PB12 //right IR sensor
#define irM  PB13  // middle IR sensor
#define irL  PB14  // left IR sensor

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#define motor1dir PC14  //Left motor direction
#define motor1pwm PB7   //Left motor speed
#define motor2dir PC15  //Right motor dir
#define motor2pwm PB6   //Right motor speed
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int irL_state = 0;
int irM_state = 0;
int irR_state = 0;
int irRR_state = 0;
int irLL_state = 0;
bool flag = true;
bool stop_flag = false;
bool Rcase_flag = false;
bool Lcase_flag = false;
char last_state = 'f';
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(irR, INPUT);
  pinMode(irL, INPUT);
  pinMode(irM, INPUT);
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  pinMode(motor1dir, OUTPUT);
  pinMode(motor2dir, OUTPUT);
  pinMode(motor1pwm, OUTPUT);
  pinMode(motor2pwm, OUTPUT);
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  Serial.print("Right = ");
  Serial.print(digitalRead(irR));
  Serial.print("  ");
  Serial.print("Middle = ");
  Serial.print("  ");
  Serial.print(digitalRead(irM));
  Serial.print("Left = ");
  Serial.print(digitalRead(irL));
  Serial.print("  ");
*/
 
  irR_state = digitalRead(irR);
  irL_state = digitalRead(irL);
  irM_state = digitalRead(irM);
 
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  if (irL_state == 0 && irM_state == 1 && irR_state == 0 ) {
    forward();
  }
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else if (irL_state == 1 && irM_state == 0 && irR_state == 0) {
    left();
  }
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else if (irL_state == 0 && irM_state == 0 && irR_state == 1 ) {
    right();
  }
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else if (irL_state == 1 && irM_state == 1 && irR_state == 0) {
    left();
  }
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else if (irL_state == 0 && irM_state == 1 && irR_state == 1) {
    right();
  }
  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else if (irL_state == 0 && irM_state == 0 && irR_state == 0 ) {
    if (last_state == 'f') {
      forward();
    }
    else if (last_state == 'l') {
      left();
    }
    else if (last_state == 'r') {
      right();
    }
  }

  /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
  else {
    Stop();
  }
}