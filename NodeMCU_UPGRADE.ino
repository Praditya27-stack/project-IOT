#include <WiFi.h>
#include <WiFiUdp.h>
#include <WiFiClient.h>
#include <WiFiServer.h>

#include <Blynk.h>


#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
Servo servo; 

char auth[] = "Ib_UygmhO3EJEzyjJjtfyci1J_gQSihD";
char ssid[] = "OPPO F7";
char pass[] = "12345678";

void setup(){
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
servo.attach(4);
}

void loop(){
  Blynk.run();
}
BLYNK_WRITE(V1){
 servo.write(param.asInt());
}
