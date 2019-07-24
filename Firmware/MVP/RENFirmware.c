// REN 
// (C) Angus Ryan 2019

#include <clickButton.h>

const int red = D2;
const int green = D1;
const int blue = D0;
const int button = D4;

ClickButton mainbutton(button, LOW, CLICKBTN_PULLUP);
int function = 0;
int num = 10;
int buttonState = 0;

void setup() {
  Particle.publish("Event:", "System Boot");
  //pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

  mainbutton.debounceTime   = 20;   // Debounce timer in ms
  mainbutton.multiclickTime = 250;  // Time limit for multi clicks
  mainbutton.longClickTime  = 1000; // time until "held-down clicks" register
}

void loop() {
  mainbutton.update();

   if (mainbutton.clicks != 0) function = mainbutton.clicks;

  if(mainbutton.clicks == 1) Particle.publish("Event:","EMERGENCY") {
  	digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  }

  if(mainbutton == 2)  Particle.publish("Event:","DOUBLE click");

  if(mainbutton == 3) Particle.publish("Event:","TRIPLE click");

  if(mainbutton == -1)  Particle.publish("Event:","RESET") {
  	    digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
        digitalWrite(green, HIGH);
  }

  if(mainbutton == -2)  Particle.publish("Event:","DOUBLE LONG click");

  if(mainbutton == -3)  Particle.publish("Event:","TRIPLE LONG click");

  function = 0;
  delay(5);
}