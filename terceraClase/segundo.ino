int lp = 13;
int ldr = A0;
int limit = 500;

void setup() {
  pinMode(lp, OUTPUT); 
}

void loop() {
  int in = analogRead(ldr);

  if (in > limit) {
    digitalWrite(lp, HIGH);
  } else {
    digitalWrite(lp, LOW);
  }

  delay(500); 
}
