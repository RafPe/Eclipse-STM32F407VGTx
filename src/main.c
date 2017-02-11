/*
 * main.c
 *
 *  Created on: 2 Nov 2016
 *      Author: rafpe
 */
#include "stm32f4xx.h"
#include "stm32f407xx.h"




int main(void)
{
	volatile uint32_t delay;

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN | RCC_AHB1ENR_GPIOCEN | RCC_AHB1ENR_GPIOAEN;	// enable the clock to GPIOD & GPIOC
	RCC->APB2ENR |= RCC_APB2ENR_SYSCFGEN | RCC_APB2ENR_TIM1EN;  // enable SYSCFG for external interrupts & TIM1

	__DSB();								// Data Synchronization Barrier

	GPIOA->MODER |= (1 << 1);

	GPIOA->BSRR = GPIO_BSRR_BS_0;

	while (1)
	{

	} /* while */


} /* main */

