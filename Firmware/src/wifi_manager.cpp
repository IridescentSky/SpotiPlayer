#include <Arduino.h>
#include <WiFi.h>
#include <secrets.h>

void initWifi() {
    WiFi.mode(WIFI_AP_STA);
    WiFi.disconnect();
    delay(100);
    Serial.println("Wifi Set Up");

    WiFi.mode(WIFI_AP_STA);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.println("Connecting to WiFi...");
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print('.');
        delay(1000);
    }
    Serial.println(WiFi.localIP());
}