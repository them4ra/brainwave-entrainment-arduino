/*
The Brainwave Entrainment Device
This sketch makes a LED connected to pin 9 flash
at a certain frequency. In the area marked "Options"
you can change the flash intensity in hertz.

The set up I use has the LEDs in series but you 
could easily alter this to have a seperate LED 
connected to two different pins. 

A rough outline for ranges are:

Delta 0.5–4 Hz
Theta 4–7 Hz
Alpha 7.5–12.5 Hz
Beta 12.5-30 Hz 
Gamma 25-100 Hz

A study lead by Li-Huei Tsai used a LED strip flickering 
at 40 hz to increase gamma activity in mice:

"Using this device, the researchers found that an hour of exposure to light 
flickering at 40 hertz enhanced gamma oscillations and reduced beta amyloid 
levels by half in the visual cortex of mice in the very early stages of Alzheimer’s.
However, the proteins returned to their original levels within 24 hours."

*/

//*******Option*******
int hertz = 40; // flashing in hertz
//**********************

float rep = (float)(0.5/hertz);

int led = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(rep*1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(rep*1000);                       // wait for a second
}
