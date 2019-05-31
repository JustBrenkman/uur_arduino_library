#include <ROV.h>

ROV rov = ROV();

void setup() {
  rov.setup();
}

void loop() {
  rov.update(); // Updates the buttons so we know which ones are being pressed

  if (rov.getLeftBtns().isUp()) {
    rov.getMotor0().drive(255);
  }
  if (rov.getLeftBtns().isDown()) {
    rov.getMotor0().drive(-255);
  }
  if (rov.getLeftBtns().isBoth()) {}
  if (rov.getLeftBtns().isNone()) {
    rov.getMotor0().brake();
  }




  if (rov.getRightBtns().isUp()) {
    rov.getMotor2().drive(255);
  }
  if (rov.getRightBtns().isDown()) {
    rov.getMotor2().drive(-255);
  }
  if (rov.getRightBtns().isBoth()) {}
  if (rov.getRightBtns().isNone())
    rov.getMotor2().brake();




  if (rov.getMiddleBtns().isUp()) {
    rov.getMotor1().drive(255);
  }
  if (rov.getMiddleBtns().isDown()) {
    rov.getMotor1().drive(-255);
  }
  if (rov.getMiddleBtns().isBoth()) {}
  if (rov.getMiddleBtns().isNone())
    rov.getMotor1().brake();



  if (rov.getExtraBtns().isUp()) {
    rov.getServo1().write(0);
  }
  if (rov.getExtraBtns().isDown()) {
    rov.getServo1().write(180);
  }
}