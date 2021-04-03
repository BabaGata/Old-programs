int tipkalo = 2;
int tipkalo2 = 1;
int stanjeTipke;
int stanjeTipke2;
int led = 13;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin (9600);
pinMode (tipkalo, INPUT); 
pinMode (tipkalo2, INPUT);
pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

stanjeTipke = digitalRead (tipkalo);
Serial.println (stanjeTipke);

stanjeTipke2 = digitalRead (tipkalo2);
Serial.println (stanjeTipke2);
if (stanjeTipke == HIGH && stanjeTipke2 ==HIGH) {
  digitalWrite (led, HIGH);
  delay (100);
  digitalWrite (led, LOW);
  delay (100);
}
else {
  digitalWrite (led, LOW);

}
}

