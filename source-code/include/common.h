#ifndef COMMON_H
#define COMMON_H

#define OUTPUT 0
#define INPUT 1

#define HIGH 1
#define LOW 0

void pinMode(int pin, int mode);
void digitalWrite(int pin, int mode);
long map(long x, long in_min, long in_max, long out_min, long out_max);


#endif // COMMON_H
