#include <DHT11.h>
#define Type DHT11
int sensePin=9;
DHT11 HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int setTime=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
}
