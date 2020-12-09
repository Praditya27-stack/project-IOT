#include "DHT.h"
#define DHPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPN< DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println(F("DHT11 testl"));
  dht.begin();
}

void loop(}{
  delay(2000)
  float h = dht.readHumity();
  float t = dht.readTemperature();

  if(isnan)||isnan(t)){
    Serial.printin(f("failed to read DHT sensor"));
    return;
  }
  Serial.print(F("Humidity :"));
  Serial.print(h);
  Serial.print(F("% Temperature: "));
  Serial.print(t);
  Serial.println(F("("))
}
