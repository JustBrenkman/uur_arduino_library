#ifndef UUR_ROV_H
#define UUR_ROV_H

#include <Servo.h>
#include "ButtonDuo.h"
#include "MotorController.h"

#define BTN_0 18
#define BTN_1 19
#define BTN_2 20
#define BTN_3 21

#define A_IN_1 4
#define B_IN_1 2
#define PWM_1 3

#define A_IN_2 7
#define B_IN_2 8
#define PWM_2 5

#define A_IN_3 13
#define B_IN_3 12
#define PWM_3 6

#define A_IN_4 14
#define B_IN_4 15
#define PWM_4 9

#define SERVO_0 10
#define SERVO_1 11

class ROV {
    public:
        ROV();
        ButtonDuo getLeftBtns();
        ButtonDuo getRightBtns();
        ButtonDuo getMiddleBtns();
        ButtonDuo getExtraBtns();

        void update();
        void setup();

        Motor getMotor0();
        Motor getMotor1();
        Motor getMotor2();
        Motor getMotor3();

        Servo getServo0();
        Servo getServo1();
    private:
        ButtonDuo _btnDuo0;
        ButtonDuo _btnDuo1;
        ButtonDuo _btnDuo2;
        ButtonDuo _btnDuo3;
        Motor _motor0;
        Motor _motor1;
        Motor _motor2;
        Motor _motor3;
        Servo _servo0;
        Servo _servo1;
};

#endif