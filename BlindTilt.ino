// Tilt my Blinds

#include <Stepper.h>


#define STEPS 2038

#define in1Pin 15
#define in2Pin 16
#define in3Pin 17
#define in4Pin 18

#define LED_PIN 9

Stepper stepper(STEPS, in1Pin, in2Pin, in3Pin, in4Pin);

void setup() {
  stepper.setSpeed(10);
  
  Serial.begin(9600);
}

void loop() {
  Serial.println("clockwise");
  stepper.step(2038);
  delay(1000);

  Serial.println("counter-clockwise");
  stepper.step(-2038);
  delay(1000);
}
