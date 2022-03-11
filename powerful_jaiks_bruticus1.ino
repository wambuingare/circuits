// C++ code
//
int Red=12;
int Amber=4;
int Green=2;
void setup()
{
  pinMode(Red,OUTPUT);
  pinMode(Amber, OUTPUT);
  pinMode(Green,OUTPUT);
}

void loop()
{
  digitalWrite(Red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Amber, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Amber, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}