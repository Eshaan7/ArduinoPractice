/*
 Programmer's name: Eshaan Bansal
 Date: 04/10/2018
 Topic: Blinking an LED with a switch - Part 2
 */

int switchPin=8;
int ledPin=13; 
boolean lastButton=LOW;
boolean ledOn=false;
boolean curButton=LOW;

void setup() 
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT); 

}

boolean debounce(boolean last)
{
  boolean current=digitalRead(switchPin);
  if (last!=current)
   {
    delay(5);
    current=digitalRead(switchPin);
   }
  return current;
}

void loop() 
{
  curButton=debounce(lastButton);
  if (curButton==HIGH && lastButton==LOW) {
    ledOn=!ledOn;
  }
  lastButton=curButton;
  digitalWrite(ledPin,ledOn);
}
    
