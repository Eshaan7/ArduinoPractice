/*
 Programmer's name: Eshaan Bansal
 Date: 05/10/2018
 Topic: IR sensor - Part 2
 */

 void setup()
 {
  pinMode(A0, INPUT);
  Serial.begin(9600);
 }

void loop()
{
  int x=analogRead(A0);
  // Serial.println(x);
  // 5V - 1024 baud rate
  Serial.println(5*x/1024.0); // type conversion
}
