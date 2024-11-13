#include <Arduino.h>

// Parameter für das PWM-Signal
const int pwmPin = 14;      // Der GPIO-Pin, an dem das PWM-Signal ausgegeben wird
const int pwmFreq = 5000;   // PWM-Frequenz in Hz
const int pwmChannel = 0;   // PWM-Kanal (ESP32 unterstützt bis zu 16 Kanäle)
const int pwmResolution = 8; // Auflösung des PWM-Signals (8 Bit = 0 bis 255)

// Duty Cycle (0-255 für 8 Bit Auflösung)
int dutyCycle = 128; // 50% Duty Cycle (kann zwischen 0 und 255 angepasst werden)

void setup() {
  // PWM-Kanal konfigurieren
  ledcSetup(pwmChannel, pwmFreq, pwmResolution);
  
  // PWM-Kanal dem GPIO-Pin zuweisen
  ledcAttachPin(pwmPin, pwmChannel);
  
  // Duty Cycle setzen (konstantes PWM-Signal)
  ledcWrite(pwmChannel, dutyCycle);
}

void loop() {
  // Der Loop bleibt leer, da das PWM-Signal konstant ausgegeben werden soll
}
