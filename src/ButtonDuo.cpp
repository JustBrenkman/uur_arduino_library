#include "ButtonDuo.h"
#include <Arduino.h>

ButtonDuo::ButtonDuo(int pin) {
    _pin = pin;
    _value = 0;
    _bothThresohld = 1000;
    _lowerThreshold = 500;
    _upperThresold = 700;
    _noneThreshold = 10;
}

void ButtonDuo::setup() {
    pinMode(_pin, INPUT);
}

void ButtonDuo::update() {
    _value = analogRead(_pin);
}

bool ButtonDuo::isUp() {
    return (_value < _lowerThreshold) && (_value >= 10);
}

bool ButtonDuo::isDown() {
    return (_value > _upperThresold) && (_value <_bothThresohld);
}

bool ButtonDuo::isBoth() {
    return _value > _bothThresohld;
}

bool ButtonDuo::isNone() {
    return _value <= 10;
}