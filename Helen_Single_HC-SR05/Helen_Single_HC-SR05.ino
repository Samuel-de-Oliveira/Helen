/*
  Ultrasonic Sensor HC-SR04/HC-SR05 
  Arduino Object Detection Tutorial for the Blind and Deaf

  by Nemonet The Young Programmer
  In collaboration with Samuel-de-Oliveira
  

*/


#include <HCSR05.h>
#include <LiquidCrystal_I2C.h>  // includes the LiquidCrystal Library
LiquidCrystal_I2C lcd(0x27, 20, 4);  // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
const int LEDBuzzerPin=1;
const int trigPin = 2;
const int echoPin = 3;
 
UltraSonicDistanceSensor distanceSensor(trigPin, echoPin);
void setup(){
lcd.init();
pinMode(LEDBuzzerPin,OUTPUT); 
}
 
void loop(){
lcd.backlight();
lcd.clear(); 
lcd.print("distance = ");
lcd.setCursor(0,1); 
lcd.print(distanceSensor.measureDistanceCm()+1);
lcd.print(" cm");
if((distanceSensor.measureDistanceCm()+1)<3) {
digitalWrite(LEDBuzzerPin,HIGH); // red LED lights up and buzzer starts ringing
}else
{
digitalWrite(LEDBuzzerPin,LOW); // red LED goes out and buzzer stops
}
delay(500);
}
