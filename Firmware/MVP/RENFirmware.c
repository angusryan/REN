// REN 
// (C) Angus Ryan 2019

const int red = D2;
const int green = D1;
const int blue = D0;
const int button = D3;
int buttonState = 0;

void setup() {
  //pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
    if (buttonState == HIGH) {
        if(newpublish) {
            Particle.publish("Event:", "Emergency");
        }
        newpublish = false;
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
        digitalWrite(green, HIGH);
  
     } else {
     newpublish = true;
     digitalWrite(red, HIGH);
     digitalWrite(blue, LOW);
     digitalWrite(green, LOW);
  }
}