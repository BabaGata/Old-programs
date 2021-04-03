#include <DHT.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;
DHT dht;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin (9600);
Serial.println();
Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");
dht.setup(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);

float temperature = dht.getTemperature();
float humidity = dht.getHumidity();

Serial.print (dht.getStatusString());
Serial.print ("\t");
Serial.print (humidity, 1);
Serial.print ("\t\t");
Serial.print (temperature, 1);
Serial.println ("\t\t");

double a=17.625;
double b=243.04;
double temp=(a*T)/(b+T);
double brojnik=b*(log(RH/100)+temp);
double nazivnik=a-log(RH/100)-temp;
double Td=brojnik/nazivnik;

Serial.print (Td);

}

