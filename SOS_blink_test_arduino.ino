int ledPin = 13;

void blink(int time_on, int time_off) {
  digitalWrite(ledPin, HIGH);
  delay(time_on);
  digitalWrite(ledPin, LOW);
  delay(time_off);
}

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  blink(100,100);
  blink(100,100);
  blink(100,200);

  blink(350,200);
  blink(350,200);
  blink(350,200);

  blink(100,100);
  blink(100,100);
  blink(100,400);
}
