/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP8266 chip.

  NOTE: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right ESP8266 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID           "TMPL2-dD6qy91"
#define BLYNK_TEMPLATE_NAME         "ESP8266"
#define BLYNK_AUTH_TOKEN            "cE3bGMZ5zhCoJy26siIg_hW6Ri4OfQyB"

#include <dummy.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "WLL-Inatel";
char pass[] = "inatelsemfio";

// Variáveis para os sensores
int nivelAgua = 0; // Variável para o dashboard V0
int umidade = 0;   // Variável para o dashboard A0
const int nivelAguaPin = 0; // GPIO0, substituindo D3

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Configuração do pino como entrada
  pinMode(nivelAguaPin, INPUT);

  // Conexão com Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  // Atualiza o Blynk
  Blynk.run();

  // Leitura do sensor de umidade
  umidade = analogRead(A0);
  umidade = map(umidade, 0, 1023, 0, 100);
  Blynk.virtualWrite(V1, umidade);

  // Simulação do sensor de nível de água
  if (digitalRead(nivelAguaPin) == HIGH) {
    nivelAgua = 50; // Nível máximo
  } else {
    nivelAgua = 0; // Nível mínimo
  }
  Blynk.virtualWrite(V0, nivelAgua);
}
