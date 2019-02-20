/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/

// most launchpads have a red LED
// #define LED1 RED_LED

//see pins_energia.h for more LED definitions
#define LED2 GREEN_LED

int i = 0;
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED1, OUTPUT);    
  pinMode(LED2, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED1, HIGH);
  delay(500);
  if (i % 5 == 0)
  {
    digitalWrite(LED2, HIGH);
  }
  digitalWrite(LED1, LOW);
  delay(500);
  digitalWrite(LED2, LOW);
  i++;
}
