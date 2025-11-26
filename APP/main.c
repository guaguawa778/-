#include "LED.h"

int main(){
	LED_Init();
	while(1){
		LED_Open(LED1);
	}
}
