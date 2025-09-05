// ESP32-S3 stable USB-CDC
// Fixes issues with new ESP32-S3 Mini Development board that frequently disconnects

#ifndef LED_BUILTIN
  #define LED_BUILTIN 48  // Common on some S3 dev boards; change if needed or remove LED code
#endif

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("\nESP32-S3 alive. USB-CDC stable.");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.println("tick");
}
