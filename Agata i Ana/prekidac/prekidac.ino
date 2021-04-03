int tipkalo = 2;
int stanjeTipke;
int led = 13;
int brojac = 0;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin (9600);
pinMode (tipkalo, INPUT); 
pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

stanjeTipke = digitalRead (tipkalo);
Serial.println (stanjeTipke);
Serial.println (brojac);
if (stanjeTipke == HIGH) {
  digitalWrite (led, HIGH);
  delay (100);
  digitalWrite (led, LOW);
  delay (100);
  brojac++;
}
else {
  digitalWrite (led, LOW);

}
}

