#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 100; i >= 0; i--) {
    Serial.println(i);
    delay(500);
  }
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
