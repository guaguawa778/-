#ifndef _LED_H
#define _LED_H

#include "gd32f10x.h"
#include <stdio.h>

#define LED1 1

void LED_Init(void);

void LED_Open(unsigned char LED_Number);
void LED_Close(unsigned char LED_Number);

#endif
