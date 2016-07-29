/*
 */

#include <avr/io.h>

#include <util/delay.h>

#include "Motor.h"
#include "CommandParser.h"

int main(void)
{

    Motor motor(11, // EN1 --> Enable Motor 1
                15, // EN2 --> Enable Motor 2
                9,  // IN1 --> Turn Foward Motor 1
                10, // IN2 --> Turn Backward Motor 1
                13, // IN3 --> Turn Foward Motor 2
                14  // IN4 --> Turn FOward Motor 2
                );

    CommandParser parser;
    parser.setMotor(&motor);
    while(1){

        parser.parseCommand("fw");
        _delay_ms(1000);

        parser.parseCommand("bw");
        _delay_ms(1000);

    }


    return 0;
}
