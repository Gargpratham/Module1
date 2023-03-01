// declares an integer variable called motion and initializes it to a value of 3.
int motion = 3;

// declares a boolean variable called currState and initializes it to false.
bool currState = false;

// This function runs once when the microcontroller starts up.
void setup()
{
// Starts serial communication at a baud rate of 9600 bits per second.
Serial.begin(9600);

// Configures the built-in LED pin as an output.
pinMode(LED_BUILTIN, OUTPUT);

// Configures the motion sensor pin as an input.
pinMode(motion, INPUT);

// Attaches an interrupt to the motion sensor pin, calling the intr function whenever the input state changes.
attachInterrupt(digitalPinToInterrupt(motion), intr, CHANGE);
}

// This function runs repeatedly after setup() has completed.
void loop()
{
// Causes the program to pause for 1000 milliseconds.
delay(1000);
}

// This function is called whenever the interrupt is triggered by a change in the input state of the motion sensor.
void intr()
{
// Inverts the value of currState.
currState = !currState;

// Sets the built-in LED to the value of currState.
digitalWrite(LED_BUILTIN, currState);

// Sends the message "Motion Interrupted" to the serial monitor.
Serial.println("Motion Interrupted");
}
