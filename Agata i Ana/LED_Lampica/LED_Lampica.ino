int led = 13;
int fotootpornik = A0;
int stanjeFoto;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin (9600);
pinMode (led, OUTPUT);
pinMode (fotootpornik, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:

stanjeFoto = analogRead (fotootpornik);
Serial.println (stanjeFoto);
if (stanjeFoto <= 500) {
    digitalWrite (led, HIGH);
}
else {
    digitalWrite (led, LOW);
}
}
