//Arduino project code
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100*12);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100*12);
  }
  Serial.println("Nog een rondje");
  delay(100*12);
}