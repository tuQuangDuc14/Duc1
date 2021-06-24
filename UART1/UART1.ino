int led = 6;
long VL = 0;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  VL =  analogRead(A0);
  int  value = float((VL * 225) / 1023.0);

  analogWrite(led, value);
  Serial.println( value);
}
