int bp = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int bv = analogRead(bp);
  int boton = 0;

  if (bv >= 150 && bv < 180) {
    boton = 5;
  } else if (bv >= 180 && bv < 230) {
    boton = 4;
  } else if (bv >= 230 && bv < 260) {
    boton = 3;
  } else if (bv >= 300 && bv < 350) {
    boton = 2;
  } else if (bv >= 400) {
    boton = 1;
  } else {
    boton = 0;
  }

  Serial.print("Valor: ");
  Serial.print(bv);
  Serial.print(" -> Botón: S");
  Serial.println(boton);

  delay(500);
}
