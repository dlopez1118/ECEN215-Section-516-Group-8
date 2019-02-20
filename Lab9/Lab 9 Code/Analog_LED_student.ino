/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.

  Hardware Required:
    LaunchPad with an LED

  This example code is in the public domain.
*/

// most launchpads have a red LED
#define RED RED_LED

//see pins_energia.h for more LED definitions
//#define LED2 GREEN_LED
int x = 0;       //x is the interation counter
int PB1 = PUSH1; // the number of the pushbutton pin
int PB2 = PUSH2;


// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(RED, OUTPUT);
  //  pinMode(LED2, OUTPUT);
  pinMode(PB1, INPUT_PULLUP);
  pinMode(PB2, INPUT_PULLUP);

  Serial.begin(9600);  // opens serial port, data rate = 9600 bps
  delay(10);
}

// the loop routine runs over and over again forever:
void loop() 
{
  
  if (digitalRead(PB1) && x < 10)
  {
    x++;
  }
  if ((digitalRead(PB2)) && x > 0)
  {
    x--;
  }
  analogWrite(RED, 25 * x);
  Serial.println(x);        // print as an ASCII-encoded decimal
  delay(500);               // wait for a 0.5 second
}
