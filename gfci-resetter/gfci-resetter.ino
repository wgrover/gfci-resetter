#include <Servo.h>
Servo myservo; 
int pos = 0;

void setup() {
  myservo.attach(9, 500, 2500);
}

void loop() {
  for (pos = 20; pos <= 40; pos += 1) {
    myservo.write(pos); 
    delay(50);                
  }
  delay(200);
  for (pos = 40; pos >= 20; pos -= 1) {
    myservo.write(pos); 
    delay(30);
  }
  delay(86400000UL);
}