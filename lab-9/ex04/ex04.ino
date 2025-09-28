const int potPin = A0;
int potValue = 0;
const int ledPin = 9;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  potValue = analogRead(potPin);
  Serial.print("Raw Value: ");
  Serial.print(potValue);
  Serial.print(", ");
  Serial.println(potValue);
  delay(1000);
  
  if (potValue > 500) 
  {
    digitalWrite(ledPin, 1);
  }
  else
  {
    digitalWrite(ledPin, 0);
  }
}