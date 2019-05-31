#ifndef UUR_BUTTON_DUO_H
#define UUR_BUTTON_DUO_H

class ButtonDuo {
    public:
        ButtonDuo(int pin);
        // ButtonDuo();
        bool isUp();
        bool isDown();
        bool isBoth();
        bool isNone();
        void update();
        void setup();
    private:
        int _value;
        int _pin;
        int _bothThresohld;
        int _lowerThreshold;
        int _upperThresold;
        int _noneThreshold;
};

#endif