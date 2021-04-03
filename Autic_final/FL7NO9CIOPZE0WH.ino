#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); 

#include <Servo.h>
Servo servoRight;
Servo servoLeft;

const int buzzer = 7;
const int lLed = 8;
const int dLed = 9;

void setup()  
{
  servoRight.attach(12);
  servoLeft.attach(13);

  pinMode (lLed, OUTPUT);
  pinMode (dLed, OUTPUT);
  pinMode (buzzer, OUTPUT);
  
  BT.begin(9600);
  // Send test message to other device
  BT.println("Hello from Arduino");
}
char a; // stores incoming character from other device
void loop() 
{
  if (BT.available())
  // if text arrived in from BT serial...
  {
    a=(BT.read());
    if (a=='F')
    {
    forward ();
    BT.println("Forward");
    }
   else if (a=='B')
    {
    backward ();
    BT.println("Backward");
    }
   else if (a=='L')
    {
    turnLeft ();
     BT.println("Left");
    }   
    else if (a=='R')
    {
   turnRight ();
    BT.println("Right");
    }
    if (a=='U')
    {
      digitalWrite (lLed, HIGH);
    }
     if (a=='u')
    {
      digitalWrite (lLed, LOW);
    } 
    if (a=='W')
    {
      digitalWrite (dLed, HIGH);
    } 
    if (a=='w')
    {
      digitalWrite (dLed, LOW);
    }
      if (a=='X')
    {
     stopServos ();
    }
      if (a=='V')
    {
     tone (buzzer, 800);
    }
      if (a=='v')
    {
    noTone (buzzer);
    }
  }
}

void forward()                       // Forward function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise 
}

void turnLeft()                      // Left turn function
{
  servoLeft.writeMicroseconds(1500);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
}

void turnRight()                     // Right turn function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1500);        // Right wheel counterclockwise
}

void backward()                      // Backward function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
}

void stopServos()                         // Halt servo signals
{                                            
  servoLeft.writeMicroseconds(1500);         // Left wheel clockwise
  servoRight.writeMicroseconds(1500);
}
void disableServos()                         // Halt servo signals
{                                            
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}
