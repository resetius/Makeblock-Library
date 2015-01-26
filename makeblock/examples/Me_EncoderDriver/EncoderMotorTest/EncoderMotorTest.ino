#include "Makeblock.h"
#include <SoftwareSerial.h>
#include <Wire.h>

int led = 13;
int ledState = HIGH;

MeEncoderMotor motor1(0x09, SLOT1);   //  Motor at slot1
MeEncoderMotor motor2(0x09, SLOT2);   //  motor at slot2

void setup()
{
    pinMode(led, OUTPUT);
    motor1.begin();
    motor2.begin();
    Serial.begin(9600);
}

void loop()
{
    motor2.Move(360, 200);

    motor1.RunSpeed(150);
    delay(2000);
    motor1.RunSpeed(0);
    delay(2000);
}

