#include <Servo.h>
Servo Dm;
Servo Lm;

const int pingPin = 3;

void setup() {

  Dm.attach(7);
  Lm.attach(6);

  Serial.begin(9600);

}
 
void loop() {

 long duration, cm;
 
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  cm = microsecondsToCentimeters(duration);

  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(100);
  Lm.writeMicroseconds(1700);         // Pin 13 counterclockwise
  Dm.writeMicroseconds(1300);        // Pin 12 clockwise
  delay(3000);
  
if (cm < 2) {
  
  Lm.writeMicroseconds(1500);
  Dm.writeMicroseconds(1500);
}
else {
  Lm.writeMicroseconds(1700);
  Dm.writeMicroseconds(1300); 
}
  delay(100);

}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}

