#include <HCSR04.h>

#define trigger 14
#define echo 12

HCSR04 distance (trigger, echo );

void setup(){
  Serial.begin(4800);
}

void loop(){
  float jarak = distance.dist();
  Serial.begin(jarak);
  delay(800);
}
