#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT Serial

Servo servo;
char auth[] = "tnJMeZbl3kTpUMvYmzH-MzzdT8Rre7p-";
char ssid[] = "TECH_AE26";
char pass[] = "126132562";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(16);
}
void loop(){
  Blynk.run();
}

BLYNK_WRITE(V1){
  servo.write(param.asInt());
}
