int moisture = 0;                     // declaring the global variable moisture of integer data type initially equal to zero

void setup()
{
  pinMode(A1, INPUT);                 // setting pin A1 as input pin where the soil moisture is connected
  Serial.begin(9600);                 // initializing the serial monitor at baud rate 9600
}

void loop()
{
  moisture = analogRead(A1);          // value of variable equals to the analog data received from the sensor on pin A1     
  Serial.print("Soil moisture: ");    // printing this line on serial monitor
  Serial.println(moisture);           // printing the value of the variable moisture
  if (moisture > 200)                 // if condition which states that if the value of varible is more than 200 then...
  {
    digitalWrite(13, HIGH);           // ...pin 13 which is the pin for builtin LED gets high
  } 
  else                                // else condition which will make the...
  {
      digitalWrite(13, LOW);          // pin 13 low if the value of moisture is less than 200
  }
  delay(1000);                        // value is measured after a delay of 1 second
}
