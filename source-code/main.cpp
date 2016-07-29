/*
 */

#include <avr/io.h>

#include <util/delay.h>

#include "Motor.h"

int main(void)
{

  /*  Motor motor(11, // EN1 --> Enable Motor 1
                15, // EN2 --> Enable Motor 2
                9,  // IN1 --> Turn Foward Motor 1
                10, // IN2 --> Turn Backward Motor 1
                13, // IN3 --> Turn Foward Motor 2
                14  // IN4 --> Turn FOward Motor 2
                );
*/
    pinMode(9,  OUTPUT);
    pinMode(10, OUTPUT);
    //pinMode(13, OUTPUT);
    //pinMode(14, OUTPUT);

    while(1){
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        //digitalWrite(13, HIGH);
        //digitalWrite(14, HIGH);
        _delay_ms(1000);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        //digitalWrite(13, LOW);
        //digitalWrite(14, LOW);
        _delay_ms(1000);
/*
        motor.forward();
        _delay_ms(500);
        motor.backward();
        _delay_ms(500);
        motor.rightWheelBackward();
        _delay_ms(500);
        motor.leftWheelBackward();
        _delay_ms(500);
        motor.rigtWheelForward();
        _delay_ms(500);
        motor.leftWheelForward();
        _delay_ms(500);
*/
    }


    return 0;
}
