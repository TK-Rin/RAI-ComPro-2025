// C++ code
//
void setup()
{
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

int a = 0;
float A;

void loop()
{
  a = analogRead(A0);
  A = a/1023.0*5;
  Serial.print("10 bit Val: ");
  Serial.print(a);
  Serial.print(", Real Val: ");
  Serial.print(A);
  Serial.println("V");
  Serial.println(" ");
  delay(1000);
  
  if (a <= 250) 
  {
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
  }
  else if (a <= 500) 
  {
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
  }
  else if (a <= 750) 
  {
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);
    digitalWrite(13, 0);
  }
  else if (a <= 1000) 
  {
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);
    digitalWrite(13, 1);
  }
}