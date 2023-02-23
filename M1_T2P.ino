int motion = 3;
bool currState = false;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(motion, INPUT);

  attachInterrupt(digitalPinToInterrupt(motion), intr, CHANGE);
}

void loop()
{
  delay(1000);
}

void intr()
{
  currState = !currState;
  digitalWrite(LED_BUILTIN, currState);
  Serial.println("Motion Interrupted");
}
