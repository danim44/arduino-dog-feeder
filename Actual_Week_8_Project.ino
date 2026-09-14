#include <Servo.h>

Servo feeder;

void setup() {
  feeder.attach(9);
  feeder.write(0);
}

void loop() {
  slowMove(feeder, 90, 70, 25);
  delay(800);
  slowMove(feeder, 70, 100, 25);
  delay(54000000UL);
  slowMove(feeder, 90, 70, 25);
  delay(800);
  slowMove(feeder, 70, 100, 25);
  delay(28800000UL);
  }

void slowMove(Servo &s, int startAngle, int endAngle, int stepDelay) {
  if (startAngle < endAngle) {
    for (int pos = startAngle; pos <= endAngle; pos++) {
      s.write(pos);
      delay(stepDelay);
    }
  } else {
    for (int pos = startAngle; pos >= endAngle; pos--) {
      s.write(pos);
      delay(stepDelay);
    }
  }
}
