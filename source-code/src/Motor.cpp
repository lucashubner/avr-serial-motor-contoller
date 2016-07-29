#include "Motor.h"

#include "common.h"


Motor::Motor(int EN1, int EN2, int I1, int I2, int I3, int I4)
{
    //ctor
    pinMode(EN1, INPUT); this->EN1 = EN1;
    pinMode(EN2, INPUT); this->EN2 = EN2;

    pinMode(I1, OUTPUT); this->I1 = I1;
    pinMode(I2, OUTPUT); this->I2 = I2;
    pinMode(I3, OUTPUT); this->I3 = I3;
    pinMode(I4, OUTPUT); this->I4 = I4;

    // Gambita pra teste
    digitalWrite(EN1, HIGH);
    digitalWrite(EN2, HIGH);
}

void Motor::forward(){
    stop();
    digitalWrite(this->I1, HIGH);
    digitalWrite(this->I3, HIGH);
}
void Motor::backward(){
    stop();
    digitalWrite(this->I2, HIGH);
    digitalWrite(this->I4, HIGH);
}

void Motor::rigtWheelForward(){
    stop();
    digitalWrite(this->I3, HIGH);
}

void Motor::rightWheelBackward(){
    stop();
    digitalWrite(this->I4, HIGH);
}

void Motor::leftWheelForward(){
    stop();
    digitalWrite(this->I1, HIGH);
}

void Motor::leftWheelBackward(){
    stop();
    digitalWrite(this->I2, HIGH);
}

void Motor::stop(){
    digitalWrite(this->I1, LOW);
    digitalWrite(this->I2, LOW);
    digitalWrite(this->I3, LOW);
    digitalWrite(this->I4, LOW);
}

void Motor::setRightWheelSpeed(uint16_t speed){
    if(speed > 255){
        this->rightWheelSpeed = 255;
    }
    else{
        this->rightWheelSpeed = speed;
    }
}

void Motor::setLeftWheelSpeed(uint16_t speed){
    if(speed > 255){
        this->leftWheelSpeed = 255;
    }
    else{
        this->leftWheelSpeed = speed;
    }
}


