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
<<<<<<< HEAD
  delay(100*14);
=======
  delay(100*12);
>>>>>>> fef03692225cf870ee62c2f515ed011dc02fd665
}