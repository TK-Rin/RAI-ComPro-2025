const int ledPin = 9;
void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() 
{
  digitalWrite(ledPin, 1);
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
}