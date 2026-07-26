#include <Arduino.h>

// Wifi Manager
#include <wifi_manager.h>

// Spotify Manager
#include <spotify.h>

#include <secrets.h>

/*
=======================================================================================
Function Declarations
=======================================================================================
*/
void initWiFi();

/*
=======================================================================================
Setup
=======================================================================================
*/
// TODO: Add refresh token

void setup() {
  // Setting Baud Rate
  Serial.begin(115200);

  // WiFi Setup - https://randomnerdtutorials.com/esp32-useful-wi-fi-functions-arduino/
  // Setting the WiFi mode to both access point and station, and disconnecting if previously connected

  // Initializing Wifi
  initWiFi();

  // Initializing Spotify
  initSpotify();
  
}

/*
=======================================================================================
Loop
=======================================================================================
*/
void loop() {
  // put your main code here, to run repeatedly:
}

/*
=======================================================================================
Function Definitions
=======================================================================================
*/
// Taken from https://randomnerdtutorials.com/esp32-useful-wi-fi-functions-arduino/



