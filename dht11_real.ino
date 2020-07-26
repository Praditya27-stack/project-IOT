#include "DHT.h"
#define DHTPIN 5
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println(F("coba DHT11"));
  dht.begin();
}

void loop(){
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();  

  if(isnan(h) || isnan(t)){ //is not a number
    Serial.println(F("Failed to read from DHT sensor"));
    return;
  }

  Serial.print(F("Humidity :"));
  Serial.print(h);
  Serial.print(F("% Temperature: "));
  Serial.print(t);
  Serial.println(F("C"));
  
}
