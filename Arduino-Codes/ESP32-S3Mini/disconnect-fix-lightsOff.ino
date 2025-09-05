// ESP32-S3 minimal "quiet" sketch
// Keeps LEDs OFF, keeps USB-CDC active for a stable COM port.

#include <Arduino.h>

#ifndef LED_BUILTIN
  #define LED_BUILTIN 48   // Change if your board uses a different pin
#endif

// If your board has an onboard RGB LED (e.g., WS2812/NeoPixel),
// it's often on GPIO 48 or 38. We'll disable it by not initializing it.
#define RGB_LED_PIN 38   // Adjust if your board uses a different pin

void setup() {
  // Keep serial alive for stable USB COM port
  Serial.begin(115200);
  Serial.println("\nESP32-S3 quiet mode: LEDs off, USB stable.");

  // Force built-in LED off
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  // If board has an RGB LED, drive it LOW too (disables white flash)
  pinMode(RGB_LED_PIN, OUTPUT);
  digitalWrite(RGB_LED_PIN, LOW);
}

void loop() {
  // Do nothing, keep idle
  delay(1000);
}
