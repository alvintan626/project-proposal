#include <Servo.h>
Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
int pos1 = 90;    // variable to store the servo position
int pos2 = 0;
int sensorPin = 13; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
 
  Serial.begin(9600); //sets serial port for communication

  myservo1.attach(11);  // attaches the servo on pin 11 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 10 to the servo object

  myservo1.write(90);
  myservo2.write(0);
}
void loop() {
  sensorValue = analogRead(sensorPin);    // read the value from the sensor
  Serial.println(sensorValue);          //prints the values coming from the sensor on the screen
delay(1000);
 // if (sensorValue <= 100) {
    for (pos1 = 0; pos1 <= 90; pos1 += 1) {
      myservo1.write(pos1);
    }
    for (pos2 = 90; pos2 >= 0; pos2 -= 1) {
      myservo2.write(pos1);
    //  break;
    }
/*  }
  else {
    myservo1.write(pos1);     //holds position of left servo
    myservo2.write(pos2);     //holds position of left servo
  }
  */
}
