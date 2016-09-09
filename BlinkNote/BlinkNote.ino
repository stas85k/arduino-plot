/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

  ;

  digitalWrite(8, HIGH);
  delay(400);              // wait for a second
  digitalWrite(8, LOW);
  delay(80);

  digitalWrite(9, HIGH);
  delay(100);              // wait for a second
  digitalWrite(9, LOW);
  delay(80);

  digitalWrite(8, HIGH);
  delay(100);              // wait for a second
  digitalWrite(8, LOW);
  delay(80);

  digitalWrite(10, HIGH);
  delay(100);              // wait for a second
  digitalWrite(10, LOW);
  delay(80);

  digitalWrite(11, HIGH);
  delay(100);              // wait for a second
  digitalWrite(11, LOW);
  delay(80);

  digitalWrite(11, HIGH);
  delay(100);              // wait for a second
  digitalWrite(11, LOW);
  delay(80);

  digitalWrite(12, HIGH);
  delay(400);              // wait for a second
  digitalWrite(12, LOW);
  delay(80);

  digitalWrite(13, HIGH);
  delay(400);              // wait for a second
  digitalWrite(13, LOW);
  delay(80);

  for (int i = 13; i > 5 ; i--) {
     digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(40);              // wait for a second

     digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
     delay(10);              // wait for a second

    }
/*
    for (int i = 6; i < 14 ; i++) {
     digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(300);              // wait for a second

     digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
     delay(10);
    }

    for (int j = 0; j < 1; j++) {
     for (int i = 10; i < 14; i++) {
       digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
       delay(200);
       digitalWrite(12, LOW);
       digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
       delay(100);              // wait for a second
       digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
       delay(50);              // wait for a second
       digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
       delay(40);              // wait for a second// wait for a second
     }
    }



    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(8, HIGH);
    delay(200);              // wait for a second
    digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(8, LOW);
    delay(40);

    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(7, HIGH);
    delay(200);              // wait for a second
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(7, LOW);
    delay(40);

    digitalWrite(11, HIGH);
    digitalWrite(13, HIGH);
    delay(600);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
    delay(40);


    for (int i = 15; i > 5 ; i--) {
     digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(20);              // wait for a second

     digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
     delay(10);              // wait for a second

     }
     digitalWrite(8, HIGH);
     delay(200);              // wait for a second
     digitalWrite(8, LOW);
     delay(40);              // wait for a second// wait for a second

     digitalWrite(13, HIGH);
     delay(400);
     digitalWrite(13, LOW);
     delay(40);              // wait for a second// wait for a second

     digitalWrite(8, HIGH);
     delay(200);              // wait for a second
     digitalWrite(8, LOW);
     delay(40);

     digitalWrite(13, HIGH);
     delay(600);              // wait for a second// wait for a second

     digitalWrite(13, LOW);
     delay(40);              // wait for a second// wait for a second

     digitalWrite(12, HIGH);

     for (int i = 5; i < 14 ; i++) {
     digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(50);              // wait for a second

     digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
     delay(10);
     }
     delay(40);              // wait for a second// wait for a second
  */
}
