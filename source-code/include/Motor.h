#ifndef MOTOR_H
#define MOTOR_H
#include <avr/io.h>

class Motor
{
    public:
        Motor(int EN1, int EN2, int I1, int I2, int I3, int I4);

        void forward();
        void backward();

        void rigtWheelForward();
        void rightWheelBackward();

        void leftWheelForward();
        void leftWheelBackward();

        void rightWheelSpeed(uint16_t speed);
        void leftWheelSpeed(uint16_t speed);

        void stop();
    protected:

    private:

        int EN1;
        int EN2;

        int I1;
        int I2;
        int I3;
        int I4;

};

#endif // MOTOR_H
