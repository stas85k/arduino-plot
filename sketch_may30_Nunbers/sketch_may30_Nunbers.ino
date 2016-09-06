

#include <Stepper.h>

// the number of steps on your motor

#define STEPS 200

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepperX(STEPS, 2, 3, 4, 5);
Stepper stepperY(STEPS, 6, 7, 8, 9);

int coila1 = 10;
int coila2 = 11;

// set pin numbers:
const int buttonPin = 12;
const int ledPin =  13;      // the number of the LED pin
int buttonState = 0;

//declarate go func
void go(int x, int y) {
  digitalWrite(coila1, HIGH);
  digitalWrite(coila2, LOW);
  delay(200);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);
  stepperX.step(x);
  stepperY.step(y);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, HIGH);
  delay(200);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);

}


void setup()
{
  pinMode(coila1, OUTPUT);
  pinMode(coila2, OUTPUT);

  digitalWrite(coila1, HIGH);
  digitalWrite(coila2, LOW);
  delay(100);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);
  delay(100);

  // set the speed of the motor to 30 RPMs
  stepperX.setSpeed(30);
  stepperY.setSpeed(20);

}

void loop()
{

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  digitalWrite(coila1, LOW);
  digitalWrite(coila2, HIGH);
  delay(150);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);
  delay(200);


  if (buttonState == HIGH) {

    // turn LED on:
    digitalWrite(ledPin, HIGH);

    digitalWrite(coila1, LOW);
    digitalWrite(coila2, LOW);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

  delay(200);

  //draw framework (resolution)
  stepperX.step(270);
  stepperY.step(160);
  stepperX.step(-270);
  stepperY.step(-160);
  delay(200);

  //go to place
  go(200, 140);
  delay(200);
  //figure 0
  stepperX.step(30);
  stepperY.step(-40);
  stepperX.step(-30);
  stepperY.step(40);
  stepperY.step(-40);
  go(-40, 40);
  //figure 1
  stepperX.step(15);
  stepperX.step(-15);
  stepperY.step(-40);
  go(-40, 40);
  //figure 2
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(-20);
  stepperX.step(30);
  stepperY.step(-20);
  stepperX.step(-30);
  go(-40, 40);
  //figure 3
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(-20);
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(-20);
  stepperX.step(30);
  stepperX.step(-30);
  go(-40, 40);
  //figure 4
  stepperY.step(-40);
  stepperY.step(20);
  stepperX.step(30);
  stepperY.step(20);
  stepperY.step(-20);
  stepperX.step(-30);
  stepperY.step(-20);

  go(160, -10);
  delay(200);

  //figure 5
  stepperX.step(30);
  stepperY.step(-20);
  stepperX.step(-30);
  stepperY.step(-20);
  stepperX.step(30);
  stepperX.step(-30);
  go(-40, 40);
  //figure 6
  stepperX.step(30);
  stepperY.step(-40);
  stepperX.step(-30);
  stepperY.step(20);
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(-20);
  go(-40, 40);
  //figure 7
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(-40);
  go(-40, 40);
  //figure 8
  stepperX.step(30);
  stepperY.step(-40);
  stepperX.step(-30);
  stepperY.step(20);
  stepperX.step(30);
  stepperX.step(-30);
  stepperY.step(20);
  stepperY.step(-40);

  go(-40, 40);
  //figure 9
  stepperX.step(30);
  stepperY.step(-20);
  stepperX.step(-30);
  stepperY.step(20);
  stepperY.step(-40);
  stepperX.step(30);
  stepperX.step(-30);

  go(-40, -50);

  digitalWrite(coila1, HIGH);
  digitalWrite(coila2, LOW);
  delay(250);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);

  delay(3000);

}


