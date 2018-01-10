int sensor = A0;
int sensorReading;

void setup() {
  Serial.begin(9600);         // Serial monitor with baud rate of 9600
  pinMode(sensor, INPUT);     // Initialize pin A0 as input
}

void loop() {
  sensorReading = analogRead(sensor);   // Stores sensor into sensorReading
  Serial.print("Sensor Reading: ");     // Prints data in serial monitor
  Serial.println(sensorReading);
  Serial.println();
  delay(500);
}
