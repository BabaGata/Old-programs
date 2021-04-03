#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

float tlak, temperatura;
float visina;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin (9600);
if (bmp.begin())
{
    Serial.println ("OK");
}
else
{
    Serial.println ("Greška u radu senzora!");
}
}

void loop() {
  // put your main code here, to run repeatedly:
delay(5000);

tlak = bmp.readPressure ()/float(100);
temperatura = bmp.readTemperature ();
visina = 44330*(1-pow(tlak/1012, 1/5.255));

Serial.print ("Tlak: ");
Serial.print (tlak);
Serial.println (" hPa");

Serial.print ("Temperatura: ");
Serial.print (temperatura);
Serial.println (" C");

Serial.print ("Visina: ");
Serial.print (visina);
Serial.println (" m");
Serial.println (" ");
}

