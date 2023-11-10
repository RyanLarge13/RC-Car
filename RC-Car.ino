int motorPin = 2;
int button = 7;

void setup() {
  pinMode(button, INPUT);
	pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH);
}
