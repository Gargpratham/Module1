int moisture = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  moisture = analogRead(A1);
  digitalWrite(A0, LOW);
  Serial.print("Soil moisture: ");
  Serial.println(moisture);
  if (moisture > 200) 
  {
    digitalWrite(13, HIGH);
  } 
  else
  {
      digitalWrite(13, LOW);
  }
  delay(1000);
}
