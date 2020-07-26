#include <UbidotsMicroESP8266.h>

#include "DHT.h"
#include "UbiDotsMicroESP8266.h"
#define DHTPIN 4
#define TOKEN "BBFF-5lMQWLxPEAEyanVfwpnqDkbUyN2ooh"
#define ssid "Abyan & Dzakira"
#define psswd "wrminangmaning"
DHT dht(DHTPIN, DHT11);
Ubidots client(TOKEN);
unsigned long last =0;

void setup(){
  Serial.begin(9600);
  dht.begin();
  delay(20);
  client.wifiConnection(ssid,psswd);
  
}

void loop(){
  if (millis()-last>1000){
    float hum = dht.readHumidity();

    float temp = dht.readTemperature();

    last=millis();

    client.add("kelembapan" ,hum);

    client.add("Temp" ,temp);

    client.sendAll(true);
  }
}
