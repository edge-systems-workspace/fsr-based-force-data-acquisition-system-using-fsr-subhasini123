#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author subhasini123
 * @date 2026-02-23
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */



#include <Arduino.h>
int value=0;
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {
    // write your code here
    value=analogRead(A0);
    Serial.println(value);
    delay(500);
}