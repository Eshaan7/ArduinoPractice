/*
 Programmer's name: Eshaan Bansal
 Date: 05/10/2018
 Topic: UV sensor - Part 1; beam's travel distance calucation
 */

#define trig 12
#define echo 13

 void setup()
 {
  Serial.begin(9600);
  pulseIn(trig, OUTPUT);
  pulseIn(echo, INPUT);
  digitalWrite(trig, LOW); 
 }

void loop()
{
  int duration=0;
  int dist=0;
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  duration=pulseIn(echo, HIGH);
  dist=duration/(34*2);
  Serial.print("Distance= ");
  Serial.println(dist);
  delay(500);
}

 
