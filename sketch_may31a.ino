int led = 13;
#include <Servo.h>
int servoPin=11;
Servo myservo;
int trigpin= 8;
int echopin= 7;
long duration;
int distance;
#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,8,7,6,4);


void setup() {
  // put your setup code here, to run once:
SETUP();

}

void loop() {
  // put your main code here, to run repeatedly:
  LCD();
  LED();
  SERVOMOTOR();
  SETUP();
  ULTRASONIC_SENSOR();

}
