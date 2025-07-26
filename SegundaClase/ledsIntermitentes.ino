int l1 = 12;
int l2 = 13;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);

}

void loop() {
  digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
  delay(1000); 
  digitalWrite(l2, HIGH);
    digitalWrite(l1, LOW);
  delay(1000); 
}
 
