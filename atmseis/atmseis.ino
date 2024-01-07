#include <Ultrasonic.h>

// GPIO pin for Trig
const int trigPin = 14;

// GPIO pin for Echo
const int echoPin = 12;

//define the sensor
Ultrasonic ultrasonic(trigPin, echoPin);

void setup() {
  Serial.begin(115200);
}

void loop() {
  //Read the ultrasonic sensor value and assign it to a variale
  float distance = ultrasonic.read();
  
  //print text in serial monitor
  Serial.print("Distance: ");

  //print distance in serial monitor
  Serial.print(distance, 2);

  //print text in serial monitor
  Serial.println(" cm");

  delay(1000); // Adjust as needed
}
