/*
 */

#include <avr/io.h>

#include <util/delay.h>

#include "Motor.h"

int main(void)
{

//    Motor motor(11, // EN1 --> Enable Motor 1
//                15, // EN2 --> Enable Motor 2
//                9,  // IN1 --> Turn Foward Motor 1
//                10, // IN2 --> Turn Backward Motor 1
//                13, // IN3 --> Turn Foward Motor 2
//                14  // IN4 --> Turn FOward Motor 2
//                );


    while(1){
        //DDRB |= 1<<6;
        //DDRD |= 1<<5;
        //DDRB |= 1<<0;
        //DDRD |= 1<<7;
        pinMode(9, OUTPUT);
        pinMode(10, OUTPUT);
        pinMode(13,OUTPUT);
        pinMode(14, OUTPUT);


        PORTB |= 1<<6;
        _delay_ms(1000);

        PORTB &= ~(1<<6);
        _delay_ms(1000);

        PORTB |= 1<<7;
        _delay_ms(1000);

        PORTB &= ~(1<<7);
        _delay_ms(1000);

        PORTB |= 1<<0;
        _delay_ms(1000);

        PORTB &= ~(1<<0);
        _delay_ms(1000);

        PORTD |= 1<<7;
        _delay_ms(1000);

        PORTD &= ~(1<<7);
        _delay_ms(1000);


//
//        motor.forward();
//        _delay_ms(1000);
//        motor.backward();
//        _delay_ms(1000);
//        motor.rightWheelBackward();
//        _delay_ms(1000);
//        motor.leftWheelBackward();
//        _delay_ms(1000);
//        motor.rigtWheelForward();
//        _delay_ms(1000);
//        motor.leftWheelForward();
//        _delay_ms(1000);

    }


    return 0;
}
