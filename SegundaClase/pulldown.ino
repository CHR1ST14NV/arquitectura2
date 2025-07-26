//LINK DEL VIDEO https://youtube.com/shorts/Or1AfXYJM5A?si=X_4SDMiSSa5uhImo
int l1 = 12;
int k = 3;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(k, INPUT);
}

void loop() {
  if (digitalRead(k) == HIGH) {
    digitalWrite(l1, HIGH);
  } else {
    digitalWrite(l1, LOW);
  }
}
