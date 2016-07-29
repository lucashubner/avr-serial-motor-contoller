#include "pwm.h"


// Enable PWM channels
void pwm_enable(enum PWM_CHANNEL channel) {
	if (channel & CHAN_OC0A) TCCR0A |= 1<<COM0A1;
	if (channel & CHAN_OC0B) TCCR0A |= 1<<COM0B1;
	if (channel & CHAN_OC1A) TCCR1A |= 1<<COM1A1;
	if (channel & CHAN_OC1B) TCCR1A |= 1<<COM1B1;
	if (channel & CHAN_OC2A) TCCR2A |= 1<<COM2A1;
	if (channel & CHAN_OC2B) TCCR2A |= 1<<COM2B1;
}
// Disable PWM channels
void pwm_disable(enum PWM_CHANNEL channel) {
	if (channel & CHAN_OC0A) TCCR0A &= ~(1<<COM0A1);
	if (channel & CHAN_OC0B) TCCR0A &= ~(1<<COM0B1);
	if (channel & CHAN_OC1A) TCCR1A &= ~(1<<COM1A1);
	if (channel & CHAN_OC1B) TCCR1A &= ~(1<<COM1B1);
	if (channel & CHAN_OC2A) TCCR2A &= ~(1<<COM2A1);
	if (channel & CHAN_OC2B) TCCR2A &= ~(1<<COM2B1);
}

// Sets the channel brightness
void pwm_dutycycle(enum PWM_CHANNEL channel, uint8_t dutycycle) {
	if (channel & CHAN_OC0A) OCR0A = dutycycle;
	if (channel & CHAN_OC0B) OCR0B = dutycycle;
	if (channel & CHAN_OC1A) OCR1A = dutycycle;
	if (channel & CHAN_OC1B) OCR1B = dutycycle;
	if (channel & CHAN_OC2A) OCR2A = dutycycle;
	if (channel & CHAN_OC2B) OCR2B = dutycycle;
}
void pwm_initialize(enum PWM_CHANNEL channel) {
    // Set mode of operation to FastPWM
    // Set clock source (prescaler)
    // Set to 50% duty cycle
    // 4 PWM channel outputs

	if (channel & CHAN_OC0A){
        TCCR0A |= (1<<WGM00 | 1<<WGM01);
        TCCR0B |= (1<<CS01);

        OCR2A = 0x00;
        OCR2B = 0x00;

        DDRD |= 1<<PD5; // OC0B
        DDRD |= 1<<PD6; // OC0A
	}
	if (channel & CHAN_OC0B) {
        //Not implemented yet
	}
	if (channel & CHAN_OC1A) {
        TCCR1A |= (1<<WGM10 | 1<<WGM11);
        TCCR1B |= (1<<CS01);

        OCR1A = 0x00;
        OCR1B = 0x00;

        DDRB |= 1<<PB1; // OC1A
        DDRB |= 1<<PD2; // OC1B

	}
	if (channel & CHAN_OC1B) {
        //Not implemented yet
	}
	if (channel & CHAN_OC2A) {
        TCCR2A |= (1<<WGM20 | 1<<WGM21);
        TCCR2B |= (1<<CS21);

        OCR0A = 0x00;
        OCR0B = 0x00;

        DDRB |= 1<<PB3; // OC2A
        DDRD |= 1<<PD3; // OC2B


	}
	if (channel & CHAN_OC2B) {
        //Not implemented yet
	}
}
