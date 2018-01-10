int led = 3;
int num = 0;
int brighter = 1;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
//  int num = 0;
//  int brighter = 1;
}

void loop() {
  analogWrite(led, num);
  // 0 = 0%
  // 127 = 50%
  // 255 = 100%
  if (num == 255) {
    brighter = 0;
  }
  if (num == 0) {
    brighter = 1;
  }
  
  if (brighter == 1) {
    num += 1;
  }
  else {
    num -= 1;
  }
  delay(50);
}
