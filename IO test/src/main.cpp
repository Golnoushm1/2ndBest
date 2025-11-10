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
  int randomNumber = random(0, 101);
  Serial.print("Random Number: ");
  Serial.println(randomNumber);
  
  if (randomNumber > 50) {
    Serial.println("STUPID!");
  } else if (randomNumber < 50) {
    Serial.println("EVEN WORSE!!!!! 🤡");
  } else {
    Serial.println("Equal to 50");
  }
  
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}