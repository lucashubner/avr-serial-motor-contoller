#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include "Motor.h"
class CommandParser
{
    public:
        CommandParser();

        void setMotor(Motor *motor);
        void parseCommand(char *command);

    protected:

    private:
        Motor *motor;
};

#endif // COMMANDPARSER_H
