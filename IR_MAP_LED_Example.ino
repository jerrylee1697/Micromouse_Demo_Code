int sensor = A0;
int led = 3;

int sensorReading = 0;
int mappedValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  sensorReading = analogRead(sensor);
  mappedValue = map(sensorReading, 72, 431, 0, 255); // Remap range of values
  analogWrite(led, mappedValue);
  delay(100);
}
