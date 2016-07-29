#include "common.h"
#include <avr/io.h>

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void pinMode(int pin, int mode){
    // PORTD
    switch(pin){
        case 2:  DDRD = mode==0?  DDRD | (1<< PD0) :   DDRD & ~(1<<PD0);    break;
        case 3:  DDRD = mode==0?  DDRD | (1<< PD1) :   DDRD & ~(1<<PD1);    break;
        case 4:  DDRD = mode==0?  DDRD | (1<< PD2) :   DDRD & ~(1<<PD2);    break;
        case 5:  DDRD = mode==0?  DDRD | (1<< PD3) :   DDRD & ~(1<<PD3);    break;
        case 6:  DDRD = mode==0?  DDRD | (1<< PD4) :   DDRD & ~(1<<PD4);    break;
        case 11: DDRD = mode==0?  DDRD | (1<< PD5) :   DDRD & ~(1<<PD5);    break;
        case 12: DDRD = mode==0?  DDRD | (1<< PD6) :   DDRD & ~(1<<PD6);    break;
        case 13: DDRD = mode==0?  DDRD | (1<< PD7) :   DDRD & ~(1<<PD7);    break;

        // PORTB
        case 14: DDRB = mode==0?  DDRB | (1<< PB0) :   DDRB & ~(1<<PB0);    break;
        case 15: DDRB = mode==0?  DDRB | (1<< PB1) :   DDRB & ~(1<<PB1);    break;
        case 16: DDRB = mode==0?  DDRB | (1<< PB2) :   DDRB & ~(1<<PB2);    break;
        case 17: DDRB = mode==0?  DDRB | (1<< PB3) :   DDRB & ~(1<<PB3);    break;
        case 18: DDRB = mode==0?  DDRB | (1<< PB4) :   DDRB & ~(1<<PB4);    break;
        case 19: DDRB = mode==0?  DDRB | (1<< PB5) :   DDRB & ~(1<<PB5);    break;
        case 9:  DDRB = mode==0?  DDRB | (1<< PB6) :   DDRB & ~(1<<PB6);    break;
        case 10: DDRB = mode==0?  DDRB | (1<< PB7) :   DDRB & ~(1<<PB7);    break;

        // PORT C
        case 23: DDRC = mode==0?  DDRC | (1<< PC0) :   DDRC & ~(1<<PB1);    break;
        case 24: DDRC = mode==0?  DDRC | (1<< PC1) :   DDRC & ~(1<<PC1);    break;
        case 25: DDRC = mode==0?  DDRC | (1<< PC2) :   DDRC & ~(1<<PC2);    break;
        case 26: DDRC = mode==0?  DDRC | (1<< PC3) :   DDRC & ~(1<<PC3);    break;
        case 27: DDRC = mode==0?  DDRC | (1<< PC4) :   DDRC & ~(1<<PC4);    break;
        case 28: DDRC = mode==0?  DDRC | (1<< PC5) :   DDRC & ~(1<<PC5);    break;
        case 1:  DDRC = mode==0?  DDRC | (1<< PC6) :   DDRC & ~(1<<PC6);    break;
    }
}

void digitalWrite(int pin, int mode){
        switch(pin){
        case 2:  PORTD = mode==1?  DDRD | (1<< PD0) :   DDRD & ~(1<<PD0);    break;
        case 3:  PORTD = mode==1?  DDRD | (1<< PD1) :   DDRD & ~(1<<PD1);    break;
        case 4:  PORTD = mode==1?  DDRD | (1<< PD2) :   DDRD & ~(1<<PD2);    break;
        case 5:  PORTD = mode==1?  DDRD | (1<< PD3) :   DDRD & ~(1<<PD3);    break;
        case 6:  PORTD = mode==1?  DDRD | (1<< PD4) :   DDRD & ~(1<<PD4);    break;
        case 11: PORTD = mode==1?  DDRD | (1<< PD5) :   DDRD & ~(1<<PD5);    break;
        case 12: PORTD = mode==1?  DDRD | (1<< PD6) :   DDRD & ~(1<<PD6);    break;
        case 13: PORTD = mode==1?  DDRD | (1<< PD7) :   DDRD & ~(1<<PD7);    break;

        // PORTB
        case 14: PORTB = mode==1?  DDRB | (1<< PB0) :   DDRB & ~(1<<PB0);    break;
        case 15: PORTB = mode==1?  DDRB | (1<< PB1) :   DDRB & ~(1<<PB1);    break;
        case 16: PORTB = mode==1?  DDRB | (1<< PB2) :   DDRB & ~(1<<PB2);    break;
        case 17: PORTB = mode==1?  DDRB | (1<< PB3) :   DDRB & ~(1<<PB3);    break;
        case 18: PORTB = mode==1?  DDRB | (1<< PB4) :   DDRB & ~(1<<PB4);    break;
        case 19: PORTB = mode==1?  DDRB | (1<< PB5) :   DDRB & ~(1<<PB5);    break;
        case 9:  PORTB = mode==1?  DDRB | (1<< PB6) :   DDRB & ~(1<<PB6);    break;
        case 10: PORTB = mode==1?  DDRB | (1<< PB7) :   DDRB & ~(1<<PB7);    break;

        // PORT C
        case 23: PORTC = mode==1?  DDRC | (1<< PC0) :   DDRC & ~(1<<PB1);    break;
        case 24: PORTC = mode==1?  DDRC | (1<< PC1) :   DDRC & ~(1<<PC1);    break;
        case 25: PORTC = mode==1?  DDRC | (1<< PC2) :   DDRC & ~(1<<PC2);    break;
        case 26: PORTC = mode==1?  DDRC | (1<< PC3) :   DDRC & ~(1<<PC3);    break;
        case 27: PORTC = mode==1?  DDRC | (1<< PC4) :   DDRC & ~(1<<PC4);    break;
        case 28: PORTC = mode==1?  DDRC | (1<< PC5) :   DDRC & ~(1<<PC5);    break;
        case 1:  PORTC = mode==1?  DDRC | (1<< PC6) :   DDRC & ~(1<<PC6);    break;

    }
}
