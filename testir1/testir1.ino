const int sensorPin = A0; // Analog pin connected to the sensor

void setup() {
  Serial.begin(9600); // Start the serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the analog voltage
  float distance = analogToDistance(sensorValue); // Convert analog value to distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Add a delay to make the output more readable
}

// Function to convert analog value to distance in centimeters
float analogToDistance(int analogValue) {
  // Adjust these parameters based on your sensor's datasheet
  float distance = 4800 / (analogValue - 20.0);
  return distance;
}

