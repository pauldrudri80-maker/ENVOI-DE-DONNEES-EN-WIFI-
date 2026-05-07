#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "TON_WIFI";
const char* password = "TON_MDP";

WebServer server(80);

int led = 25;
int buzzer = 26;

void setup() {
  Serial.begin(115200);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

