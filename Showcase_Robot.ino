#include <Servo.h>

int servoPin1 = 13;
int servoPin2 = 12;
Servo servo1, servo2;
int angle = 230;   // servo position in degrees
int angle2 = 50;
int i = 0;
const int in2 = 6;    // 6  10
const int in7 = 5;    // 5    9
const int in10 = 10;   // 10    6
const int in15 = 9;  // 9    5

void setup()
{
  servo1.attach(servoPin1);
  servo1.write(angle);
  servo2.attach(servoPin2);
  servo2.write(angle2);
  pinMode(in2, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in10, OUTPUT);
  pinMode(in15, OUTPUT);
  delay(3000);

  // START MOVING


  digitalWrite(in2, HIGH);
  digitalWrite(in7, LOW);
  digitalWrite(in10, HIGH);
  digitalWrite(in15, LOW);
  delay(2000);     // goes straight - both wheels move

// TURNS CCW--------
  digitalWrite(in2, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in10, LOW);
  digitalWrite(in15, HIGH);
  delay(3500);      

  digitalWrite(in2, HIGH);
  digitalWrite(in7, LOW);
  digitalWrite(in10, HIGH);
  digitalWrite(in15, LOW);
  delay(2000);

// TURNS RIGHT-------CW
  digitalWrite(in2, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in10, LOW);
  digitalWrite(in15, LOW);
  delay(3500);

  digitalWrite(in2, HIGH);
  digitalWrite(in7, LOW);
  digitalWrite(in10, HIGH);
  digitalWrite(in15, LOW);
  delay(2000);

  digitalWrite(in2, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in10, LOW);
  digitalWrite(in15, LOW);
  delay(3500);

  digitalWrite(in2, HIGH);
  digitalWrite(in7, LOW);
  digitalWrite(in10, HIGH);
  digitalWrite(in15, LOW);
  delay(2000);

  digitalWrite(in2, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in10, LOW);
  digitalWrite(in15, LOW);
  delay(3500);

  digitalWrite(in2, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in10, LOW);
  digitalWrite(in15, LOW);
  delay(1000);     // turns left for 0.5 sec- only right wheel moves

  for (angle = 230; angle > 70; angle--)
  {
    servo1.write(angle);
    delay(15);
  }
  delay(1000);
  for (angle2 = 120; angle2 <= 120; angle2 += 1 )
  {
    servo2.write(angle2);
    delay(15);
    break;
  }

}

void loop()
{

}

