
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Ib_UygmhO3EJEzyjJjtfyci1J_gQSihD";

char ssid[] = "OPPO F7";
char pass[] = "12345678";

WidgetLED led1(V1);

int sensor = D4;

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode(sensor,INPUT);
  while(Blynk.connect() == false){
  Serial.println("tidak terdeteksi");
  
}

}

void loop()
{
  int sensorval = digitalRead(sensor);
  delay(1000);

  if (sensorval == 1){
    led1.on();
  }
  
  if (sensorval == 0){
    led1.off();
  }
  
  Blynk.run();
}
