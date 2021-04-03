const int trig=11;
const int echo=12;

void setup() {
  // put your setup code here, to run once:
 pinMode (trig, OUTPUT);
 pinMode (echo, INPUT);

 Serial.begin (9600);
 Serial.println ("Mjerenje udaljenosti");
 Serial.println("");
}

void loop() {
  // put your main code here, to run repeatedly:

long vrijeme, udaljenost;

digitalWrite (trig, HIGH);
delayMicroseconds (10);
digitalWrite (trig, LOW);

vrijeme = pulseIn (echo, HIGH);
udaljenost = (vrijeme/2)/28;
Serial.print (udaljenost);
Serial.println (" cm.");

delay (50);
}
