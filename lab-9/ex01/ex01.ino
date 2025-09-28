const int potPin = A0;
int potValue = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  potValue = analogRead(potPin);
  Serial.print("Raw Value: ");
  Serial.print(potValue);
  Serial.print(", ");
  Serial.println(potValue);
  delay(1000);
}