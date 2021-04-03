
const int trig = 13;        // Trig na PIN11
const int echo = 12;        // Echo na PIN12



int redLed1 = 1, redLed2 = 2; //LED pin numbers
void setup() {
  

  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);  // pocetak serijske komunikacije

  Serial.println("");

}

void loop() {
  // put your main code here, to run repeatedly:



   
long vrijeme, udaljenost;
  
  digitalWrite(trig, HIGH);   // Slanje triga
  delayMicroseconds(10);      // Odaslani trig traje 10 μs = 0.1 ms
  digitalWrite(trig, LOW);
  
  vrijeme = pulseIn(echo, HIGH);   // Primanje reflektiranog triga
  udaljenost = (vrijeme/2) / 28;      // Racunanje udaljenosti, u cm
                                        // konacna udaljenost senzora od predmeta
                                       // u cm je varijabla "udaljenost"
  Serial.print(udaljenost);   
  Serial.println(" cm");
  if (udaljenost<4)
  {
    digitalWrite(redLed1,HIGH);
    digitalWrite(redLed2;LOW);
  }

 delay(50); // preporucena pauza izmedu ocitanja najmanje 50ms 

   
}



