int motorEN = 7;
int MotorLogic1 = 6;
int MotorLogic2 = 5;

void setup() {
  pinMode(motorEN, OUTPUT);
  pinMode(MotorLogic1, OUTPUT);
  pinMode(MotorLogic2, OUTPUT);
  digitalWrite(motorEN, LOW);
}

void loop() {
  digitalWrite(motorEN, HIGH);
  digitalWrite(MotorLogic1, LOW);
  digitalWrite(MotorLogic2, HIGH);
}
