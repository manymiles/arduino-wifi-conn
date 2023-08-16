#include <WiFi.h>

bool setupWiFi(const char* ssid, const char* pw) {
  int max_attempts = 20;
  int attempted = 0;

  WiFi.begin(ssid, pw);

  while (attempted < max_attempts) {
    if (WiFi.status() == WL_CONNECTED)
    {
      return true;
    }
    else
    {
      delay(500);
    }

    attempted++;
  }

  return false;
}

