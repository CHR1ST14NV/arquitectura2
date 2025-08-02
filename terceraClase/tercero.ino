int in = 0;
int ldr = A0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int in = analogRead(ldr);
  Serial.print("Valor del LDR: ");
  Serial.println(in);
  delay(500); 
}
