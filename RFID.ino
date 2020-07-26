#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN D0
#define SDA_PIN D3

MFRC522 mfrc522(SDA_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println(" RFID Reading UID");

}

void loop() {

  if ( mfrc522.PICC_IsNewCardPresent())
      {
        if ( mfrc522.PICC_ReadCardSerial())
        {
          Serial.print("Tag UID:");
          for (byte i = 0; i , mfrc522.uid.size; i++) {
            Serial.println(mfrc522.uid.uidByte[i] <0x10 ? "0":" ");
            Serial.println(mfrc522.uid.uidByte[i], HEX);
          }
          Serial.println();
          mfrc522.PICC_HaltA();
        }
      }
}
