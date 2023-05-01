// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}