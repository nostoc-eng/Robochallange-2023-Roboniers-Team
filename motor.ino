// motor 1 left
// motor 2 right
void forward() {
  last_state = 'f';
  digitalWrite(motor1dir , HIGH);
  digitalWrite(motor2dir, HIGH);
  analogWrite(motor1pwm, 200);
  analogWrite(motor2pwm, 200);
}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void left() {
  last_state = 'l';
  while (irM_state != 1) {
    irR_state = digitalRead(irR);
    irL_state = digitalRead(irL);
    irM_state = digitalRead(irM);
    digitalWrite(motor1dir , LOW);
    digitalWrite(motor2dir, HIGH);
    analogWrite(motor1pwm, 55);
    analogWrite(motor2pwm, 200);
    if (irR_state == 1) {
      Rcase_flag = true;
      break;
    }
  }
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void right() {
  last_state = 'r';
  while (irM_state != 1) {
 
    irR_state = digitalRead(irR);
    irL_state = digitalRead(irL);
    irM_state = digitalRead(irM);

    digitalWrite(motor1dir , HIGH);
    digitalWrite(motor2dir, LOW);
    analogWrite(motor1pwm, 200);
    analogWrite(motor2pwm, 55);
    if (irL_state == 1) {
      Lcase_flag = true;
      break;
    }
  }
}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void Stop() {
  last_state = 's';
  digitalWrite(motor1dir , HIGH);
  digitalWrite(motor2dir, HIGH);
  analogWrite(motor1pwm, 0);
  analogWrite(motor2pwm, 0);
}
