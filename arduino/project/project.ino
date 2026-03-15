//Arduino project code
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
<<<<<<< HEAD
    delay(100*14);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100*14);
  }
  Serial.println("Nog een rondje");
  delay(100*14);
=======
    delay(2100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(2100);
  }
  Serial.println("Hello World");
  delay(2100);
>>>>>>> 57daa8faeaa95f118feb3f41ea622f839f3e23ed
}