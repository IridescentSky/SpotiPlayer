#include <Arduino.h>
#include "SpotifyEsp32.h"
#include <secrets.h>

Spotify sp(CLIENT_ID, CLIENT_SECRET);

void initSpotify() {
    // SpotifyEsp32 Library Setup

    // Set Custom Scopes
    sp.begin();
    while (!sp.is_auth()) {
    sp.handle_client();
    }

    Serial.printf("Authenticated! Refresh token: %s\n", sp.get_user_tokens().refresh_token);
}