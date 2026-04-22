#include "iikit.h"

void setup()
{
Serial.begin(9600);
pinMode(def_pin_D1, OUTPUT);
delay(2000); // ESPERA USB RECONECTAR APOS RESET
Serial.println("=== ESP32-S3 Teste Minimo ===");
}

void loop()
{
//APAGADO
digitalWrite(def_pin_D1, LOW);
Serial.println("APAGADO");
delay(500);

//ACESSO
digitalWrite(def_pin_D1, HIGH);
Serial.println("APAGADO");
delay(500);
}
