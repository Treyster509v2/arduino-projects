// https://forum.arduino.cc/index.php?topic=340860.0

#include <Servo.h>
Servo Servo10;
Servo Servo9;        
int wait = 5000;
void setup() { 
  Serial.begin(9600);
  Servo9.attach(9);  // Servo is connected to digital pin 9 
  Servo10.attach(10);
} 

void loop() { 
  Serial.println("1700");
  Servo9.writeMicroseconds(1700);  
  Servo10.writeMicroseconds(1700);
  delay(wait);   // Wait 2 seconds
  
  Serial.println("1300");
  Servo9.writeMicroseconds(1300);  
  Servo10.writeMicroseconds(1300);
  delay(wait);
  
  Serial.println("1500");
  Servo9.writeMicroseconds(1500);  
  Servo10.writeMicroseconds(1500);
  delay(wait); 
}
