#include "LED.h"


void LED_Init(){
	rcu_periph_clock_enable(RCU_GPIOB);
	rcu_periph_clock_enable(RCU_AF);
	
	gpio_init(GPIOB, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_0);
	gpio_bit_reset(GPIOB, GPIO_PIN_0);
}

void LED_Open(unsigned char LED_Number){
	switch(LED_Number){
		case LED1:
			gpio_bit_set(GPIOB, GPIO_PIN_0);
			break;
		default:
			break;
	}
}

void LED_Close(unsigned char LED_Number){
	switch(LED_Number){
		case LED1:
			gpio_bit_reset(GPIOB, GPIO_PIN_0);
			break;
		default:
			break;
	}
}
