void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);
  if (LDR>50)
  {
    digitalWrite(4, HIGH);
  }
  else
  {
    digitalWrite(4, LOW);
  }
}
