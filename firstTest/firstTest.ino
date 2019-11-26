#include<Servo.h>
Servo kneeServo;
Servo hipServo;
void setup(){
  // put your setup code here, to run once:
kneeServo.attach(9);
hipServo.attach(3);
}

void loop() {
  delay(2000);
kneeServo.write(90);
delay(2000); 
hipServo.write(0);
delay(2000);
kneeServo.write(0);
delay(2000); 
hipServo.write(90);
delay(2000); 
}
