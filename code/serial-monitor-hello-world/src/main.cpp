/*
Author: Spencer Lommel
Date: Sept. 9th, 2024

This program initializes by setting up the Serial output and printing Hello
World!! It then prints the Seconds running since reset each second and blinks
the onboard led (LED_BUILTIN) every second

*/
#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(921600);
  Serial.println("Hello World!!");
}

int seconds = 0;
void loop() {

  Serial.printf("Seconds running: %d\n", seconds);
  seconds++;
  if (seconds % 2 == 0) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);
}
