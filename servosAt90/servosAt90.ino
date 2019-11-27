#include<Servo.h>
Servo kneeServo;
Servo hipServo;
void setup(){
  // put your setup code here, to run once:
kneeServo.attach(9);
hipServo.attach(3);
}

void loop() {
  //delay(2000);
kneeServo.write(140);
delay(1000);
hipServo.write(70);
delay(1000);
kneeServo.write(180);
delay(1000);
hipServo.write(10);
delay(1000);
kneeServo.write(120);
delay(1000);
hipServo.write(70);
delay(1000);


}
