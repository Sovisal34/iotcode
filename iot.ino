[Forwarded from Pen Pagna]
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// visal Device  
#define BLYNK_TEMPLATE_ID "TMPLETckYb2u"
#define BLYNK_DEVICE_NAME "Smart Home"
#define BLYNK_AUTH_TOKEN "UOO2OCL6Hc-Pf2ZXFMO_pXojTQy_JgNM"

// Testing device
#define BLYNK_TEMPLATE_ID "TMPLylDsnG5V"
#define BLYNK_DEVICE_NAME "Automation Smart home"
#define BLYNK_AUTH_TOKEN "smwosETkWfojmLLelaTrZBuNticIe0hB"
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "#";              //Enter your WIFI name
char pass[] = "#";      //Enter your WIFI password


BLYNK_WRITE(V0) { digitalWrite(D0, param.asInt());}    // Pin D0 connect to relay R5,  and Blynk Pin V0 ->R5  
BLYNK_WRITE(V1) { digitalWrite(D1, param.asInt());}    // Pin D1 connect to relay R1,  and Blynk Pin V1 ->R1 
BLYNK_WRITE(V2) { digitalWrite(D2, param.asInt());}    // Pin D1 connect to relay R2,  and Blynk Pin V2 ->R2 
BLYNK_WRITE(V5) { digitalWrite(D5, param.asInt());}    // Pin D5 connect to relay R4,  and Blynk Pin V5 ->R3 
BLYNK_WRITE(V6) { digitalWrite(D6, param.asInt());}    // Pin D6 connect to relay R5,  and Blynk Pin V6 ->R4 
BLYNK_WRITE(V8) { digitalWrite(D8, param.asInt());}    // Pin D8 connect to relay R6,  and Blynk Pin V8 ->R6 
BLYNK_WRITE(V3) { digitalWrite(D3, param.asInt());}    // Pin D3 connect to relay R8,  and Blynk Pin V3 ->R8

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D3, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
