/*
  ECEN215, Boolean Logic
*/

// most launchpads have a red LED
// #define LED1 RED_LED
// #define LED1 78

//see pins_energia.h for more LED definitions
#define LED2 GREEN_LED
int PB1 = PUSH1; // the number of the pushbutton pin
int PB2 = PUSH2; // the number of the pushbutton pin
int x  = 0;       //x  is (the number of PB1 press/release cycles)%4
int x1 = 0;       //x1 is the current state of PB1
int x2 = 0;       //x2 is the current state of PB2


// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(PB1, INPUT_PULLUP);
  pinMode(PB2, INPUT_PULLUP);
  Serial.begin(9600);  // opens serial port, data rate = 9600 bps
  delay(10);
}

// the loop routine runs over and over indefinitely:
void loop()
{
  while (digitalRead(PB1));  // pause program until PB1 is unpressed

  if (x == 0)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }

  else if (x == 1)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }

  else if (x == 2)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }

  else if (x == 3)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
  }

  Serial.print("x = ");
  Serial.println(x);        // print as an ASCII-encoded decimal

  x = x + 1;                // increment x
  x = x % 4;                // compute the next 2-bit Binary state
  
  while (!digitalRead(PB1));  // pause program until PB1 is pressed

}
