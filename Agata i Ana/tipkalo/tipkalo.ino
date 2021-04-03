int tipkalo = 2;
int stanjeTipke;
int led = 13;
int prethodnoStanje = 0;

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
if (stanjeTipke == HIGH && prethodnoStanje == 0) {
  digitalWrite (led, HIGH);
  prethodnoStanje =1;
}
else 
if (stanjeTipke == HIGH && prethodnoStanje == 1) {
  digitalWrite (led, LOW);
  prethodnoStanje = 0;

}
}

