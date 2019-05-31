#include <Arduino.h>
#include "ROV.h"

ROV::ROV() : 
    _btnDuo0(ButtonDuo(BTN_0)), 
    _btnDuo1(ButtonDuo(BTN_1)), 
    _btnDuo2(ButtonDuo(BTN_2)), 
    _btnDuo3(ButtonDuo(BTN_3)),
    _motor0(Motor(A_IN_1, B_IN_1, PWM_1, 1)),
    _motor1(Motor(A_IN_2, B_IN_2, PWM_2, 1)),
    _motor2(Motor(A_IN_3, B_IN_3, PWM_3, 1)),
    _motor3(Motor(A_IN_4, B_IN_4, PWM_4, 1))
 {
    //  _servo0.attach(SERVO_0);
 }

ButtonDuo ROV::getLeftBtns() {
    return _btnDuo3;
}
ButtonDuo ROV::getRightBtns() {
    return _btnDuo1;
}
ButtonDuo ROV::getMiddleBtns() {
    return _btnDuo2;
}
ButtonDuo ROV::getExtraBtns() {
    return _btnDuo0;
}

Motor ROV::getMotor0() {
    return _motor0;
}

Motor ROV::getMotor1() {
    return _motor1;
}

Motor ROV::getMotor2() {
    return _motor2;
}

Motor ROV::getMotor3() {
    return _motor3;
}

void ROV::update() {
    _btnDuo0.update();
    _btnDuo1.update();
    _btnDuo2.update();
    _btnDuo3.update();

    delay(2);
}

void ROV::setup() {
    _servo0.attach(SERVO_0);
    _servo1.attach(SERVO_1);

    _btnDuo0.setup();
    _btnDuo1.setup();
    _btnDuo2.setup();
    _btnDuo3.setup();
}

Servo ROV::getServo0() {
    return _servo0;
}

Servo ROV::getServo1() {
    return _servo1;
}