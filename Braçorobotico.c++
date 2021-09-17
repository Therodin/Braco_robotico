#include <Servo.h>
#define potGarra A0
#define potBase A1
#define potMotorEsq A2
#define potMotorDir A3

#define pins1 3
#define pins2 6
#define pins3 9
#define pins4 5

Servo garra, motorEsq, motorDir, base;

int Garra,MotorEsq,MotorDir,Base;

void setup() {
garra.attach(pins1);
motorEsq.attach(pins2);
motorDir.attach(pins3);
base.attach(pins4);
}

void loop() {

Garra = map( analogRead(potGarra), 0, 1023, 0, 180);
delay(15);
MotorEsq = map( analogRead(potMotorEsq), 0, 1023, 0, 180);
delay(15);
MotorDir = map( analogRead(potMotorDir), 0, 1023, 0, 180);
delay(15);
Base = map( analogRead(potBase), 0, 1023, 0, 180);
delay(15);

garra.write(Garra);
motorEsq.write(MotorEsq);
motorDir.write(MotorDir);
base.write(Base);
}