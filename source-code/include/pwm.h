#ifndef PWM_H
#define PWM_H
#include <avr/io.h>

enum PWM_CHANNEL {
    // Name by port
	CHAN_PD6		= 1,
	CHAN_PD5		= 1<<1,
	CHAN_PB3		= 1<<2,
	CHAN_PD3		= 1<<3,
    CHAN_PB1        = 1<<4,
    CHAN_PB2        = 1<<5,

	// Name by register
	CHAN_OC0A		= 1,
	CHAN_OC0B		= 1<<1,
	CHAN_OC2A		= 1<<2,
	CHAN_OC2B		= 1<<3,
	CHAN_OC1A       = 1<<4,
	CHAN_OC1B       = 1<<5

};

void pwm_enable(enum PWM_CHANNEL channel);
void pwm_disable(enum PWM_CHANNEL channel);

void pwm_dutycycle(enum PWM_CHANNEL channel, uint8_t dutycycle);
void pwm_initialize(enum PWM_CHANNEL channel);

#endif // PWM_H
