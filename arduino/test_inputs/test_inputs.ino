const int buttonPin = 2;  
const int ledPin = LED_BUILTIN;  

int buttonState = 0;  

//Opstellen pinmodes
void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

//Programma Loop
void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println(“HIGH”);
  } else {
    digitalWrite(ledPin, LOW);
  }
}