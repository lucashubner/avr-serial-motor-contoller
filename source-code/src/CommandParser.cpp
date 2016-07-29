#include "CommandParser.h"
#include "Motor.h"

CommandParser::CommandParser()
{
    //ctor
}

void CommandParser::setMotor(Motor *motor){
    this->motor = motor;
}

void CommandParser::parseCommand(char *command){
    if(command[0] == 'f' && command[1] == 'w'){
        this->motor->forward();
    }

    else if(command[0]=='b' && command[1] =='w'){
        this->motor->backward();
    }

    else if(command[0] == 't' && command[1] 'l'){
        this->motor->rigtWheelForward();
    }

    else if(command[0] == 't' && command[1] 'r'){
        this->motor->leftWheelForward();
    }

}
