/*
 Programmer's name: Eshaan Bansal
 Date: 04/10/2018
 Topic: Blinking an LED with a switch - Part 1
 */

int switchPin=8;
int ledPin=13; 

void setup() {
  pinMode(swtichPin, INPUT);
  pinMode(ledPin, OUTPUT); 

}

void loop() {
  if (digitalRead(switchpin)==HIGH)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
}
