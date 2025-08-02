int l = 2;
int ap = 0;
void setup() {
  pinMode(l, OUTPUT);
}

void loop() {
  int pd = (1023 - analogRead(ap))/2 + 25;
  digitalWrite(l, HIGH);
  delay(pd);
  digitalWrite(l, LOW);
  delay(pd);
}
