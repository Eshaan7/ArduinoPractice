/*
 Programmer's name: Eshaan Bansal
 Date: 05/10/2018
 Topic: IR sensor
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
  // 5V - 1024
  Serial.println(5*x/1024);
}
