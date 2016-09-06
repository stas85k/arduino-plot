

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

//declarate func go
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
//declarate func line
void drwLn(int stpNmb , int dirX, int dirY) {
  for (int i = 0; i < stpNmb; i++) {
    stepperX.step(dirX);
    stepperY.step(dirY);

  }
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
  stepperX.setSpeed(40);
  stepperY.setSpeed(30);

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
  go(190, 156);
  delay(100);

  //cat had
  drwLn(1, 0, -50);
  drwLn(8, -3, -2);
  drwLn(1, -36, 0);
  drwLn(8, -3, 2);
  drwLn(1, 0, 50);
  drwLn(10, 3, -2);
  drwLn(1, 22, 0);
  drwLn(10, 3, 2);
  //go to place
  go(-4, -5);
  //ears
  drwLn(1, 0, -15);
  delay(200);
  drwLn(1, -15, 0);
  delay(200);
  drwLn(15, 1, 1);
  delay(200);
  go(-72, 0);
  drwLn(1, 0, -15);
  delay(200);
  drwLn(1, 15, 0);
  delay(200);
  drwLn(15, -1, 1);
  delay(200);

  go(8, -25);
  delay(200);
  //eys
  drwLn(1, 18, -10); //hv
  delay(200);
  drwLn(11, -2, 1); //d
  delay(200);
  drwLn(1, 15, -6); //hv
  delay(200);
  drwLn(1, 0, 6); //v
  drwLn(1, 3, 0); //h
  go(26, 0);
  delay(200);
  drwLn(1, 0, -10); //v
  delay(200);
  drwLn(11, 2, 1); //d
  drwLn(1, -18, 0); //h
  drwLn(1, 3, -6); //hv
  delay(200);
  drwLn(1, 0, 6); //v
  delay(200);
  drwLn(1, -6, 0); //h
  delay(200);

  go(2, -28);
  delay(200);
  //nose
  drwLn(12, -2, 1); //d
  drwLn(1, 19, 0); //h
  drwLn(12, -2, -1); //d
  delay(100);
  go(0, 0);
  drwLn(4, 2, 1); //d  ? go(, );   go(, );
  delay(100);
  go(0, 0);
  drwLn(1, 10, 0); //h
  delay(100);
  drwLn(1, -10, 0); //h
  go(22, 5);
  //mustache
  delay(100);
  drwLn(18, 4, 1); //d
  go(8, -20);
  drwLn(1, -70, 0); //h
  go(-5, -5);
  drwLn(18, 4, -1); //d
  go(-188, 0);
  drwLn(18, 4, 1); //d
  go(-5, 5);
  drwLn(1, -70, 0); //h
  go(8, 20);
  drwLn(18, 4, -1); //d
  delay(200);

  go(40, -16);
  //body
  delay(100);
  drwLn(1, 19, 0); //h
  delay(100);
  drwLn(15, 1, -1); //d
  drwLn(30, -1, -2); //d
  drwLn(5, 3, -1); //d
  drwLn(1, 0, -8); //v
  drwLn(1, -6, 4); //hv
  drwLn(1, 0, -4); //v
  drwLn(1, -6, 4); //hv
  drwLn(1, 0, -4); //v
  drwLn(1, -3, 0); //h
  drwLn(5, -4, 1); //d
  delay(100);
  drwLn(7, -1, 6); //d
  drwLn(7, -1, -6); //d
  delay(100);
  drwLn(1, 15, 0); //h
  drwLn(1, -15, 0); //h
  delay(100);
  go(0, 0);
  delay(100);
  drwLn(5, -4, -1); //d
  delay(100);
  go(0, 0);
  drwLn(1, -4, 4); //hv
  drwLn(1, 0, -4); //v
  drwLn(1, -6, 4); //hv
  drwLn(1, 0, -4); //v
  delay(100);
  drwLn(1, -6, 0); //h
  delay(100);
  drwLn(1, 0, 8); //v
  drwLn(5, 3, 1); //d
  drwLn(30, -1, 2); //d
  drwLn(15, 1, 1); //d
  delay(100);
  drwLn(1, 19, 0); //h


  go(-6, -62);
  //tail
  drwLn(10, -3, 1); //d
  drwLn(5, -2, 1); //d
  int dX = -2;
  int dY = 1;
  for (int i = 0; i < 8; i++) {
    drwLn( 2, dX, dY);
    //dX++;
    dY++;
  }
  delay(100);
  drwLn(18, -1, -1); //d
  drwLn(7, 1, -4); //d
  drwLn(6, 1, -3); //d
  drwLn(8, 1, -1); //d
  drwLn(6, 1, -1); //d
  drwLn(3, 3, -1); //d
  drwLn(13, 4, -1); //d

  go(25, 50);
  //dollar
  delay(100);
  drwLn(1, 0, 2); //v
  drwLn(5, 1, 1); //d
  drwLn(1, 6, 0); //h
  drwLn(5, 1, -1); //d
  drwLn(1, 0, -3); //v
  drwLn(8, -2, -1); //d
  drwLn(1, 0, -3); //v
  drwLn(5, 1, -1); //d
  drwLn(1, 6, 0); //h
  drwLn(5, 1, 1); //d
  drwLn(1, 0, 2); //v
  delay(100);
  go(-8, -10);
  delay(100);
  drwLn(1, 0, 30); //v
  go(3, 0);
  drwLn(1, 0, -30); //v
  go(-6, 0);
  drwLn(1, 0, 30); //v

  go(8, 44);
  //M
  delay(100);
  drwLn(1, 0, 5); //v
  delay(100);
  drwLn(5, -1, -1); //d
  delay(100);
  drwLn(6, -1, 1); //d
  delay(100);
  drwLn(1, 0, -5); //v
  delay(100);
  //go to place
  go(-156, -130);

  digitalWrite(coila1, HIGH);
  digitalWrite(coila2, LOW);
  delay(250);
  digitalWrite(coila1, LOW);
  digitalWrite(coila2, LOW);

  delay(3000);

}


