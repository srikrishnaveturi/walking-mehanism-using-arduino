#include <Servo.h>
Servo servo1; //rightAnkle
Servo servo2; //rightHip
Servo servo3; //leftAnkle
Servo servo4; //leftHip
void setup() {
  // put your setup code here, to run once:
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  start();
}
void move(int x, int y, int z)
{ int temp;
  switch (z) {
    case 1:
      if (x < y)
      {
        temp = x;
        while (temp != y)
        {
          servo1.write(temp);
          temp++;
          delay(20);
        }
      }
      else
      {
        temp = x;
        while (temp != y)
        {
          servo1.write(temp);
          temp--;
          delay(20);
        }
      }
      break;
    case 2:
      if (x < y)
      {
        temp = x;
        while (temp != y)
        {
          servo2.write(temp);
          temp++;
          delay(20);
        }
      }
      else
      {
        temp = x;
        while (temp != y)
        {
          servo2.write(temp);
          temp--;
          delay(20);
        }
      }
      break;
    case 3:
      if (x < y)
      {
        temp = x;
        while (temp != y)
        {
          servo3.write(temp);
          temp++;
          delay(20);
        }
      }
      else
      {
        temp = x;
        while (temp != y)
        {
          servo3.write(temp);
          temp--;
          delay(20);
        }
      }
      break;
    case 4:
      if (x < y)
      {
        temp = x;
        while (temp != y)
        {
          servo4.write(temp);
          temp++;
          delay(20);
        }
      }
      else
      {
        temp = x;
        while (temp != y)
        {
          servo4.write(temp);
          temp--;
          delay(20);
        }
      }
      break;
  }
}
void walk()
{
move(90,180,1);
move(90,150,3);
move(90,40,2);
move(180,90,1);
move(150,90,3);
move(40,90,2); //end right foot
move(90,0,3);
move(90,40,1);
move(90,140,4);
move(0,90,3);
move(40,90,1);
move(140,90,4);
}
void start()
{
servo1.write(90);
servo2.write(90);
servo3.write(90);
servo4.write(90);
delay(2000);
}
void loop() {
  // put your main code here, to run repeatedly:
//walk();
start();
move(90,180,1);
move(90,150,3);
move(90,40,2);
move(180,90,1);
move(150,90,3);
move(40,90,2); //end right foot
move(90,0,3);
move(90,40,1);
move(90,140,4);
move(0,90,3);
move(40,90,1);
move(140,90,4);
//exit(0);
//delay(1000);
}
