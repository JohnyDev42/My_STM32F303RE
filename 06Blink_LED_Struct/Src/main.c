/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "main.h"
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	RCC_AHB1ENR_t volatile * const pClkctrlReg = (RCC_AHB1ENR_t * )AHBENR_RCC;
	GPIOx_MODE_t  volatile *const pPortDModeReg = (GPIOx_MODE_t*) GPIOA_MODE;
	GPIOx_ODR_t   volatile *const pPortDOutReg  = (GPIOx_ODR_t*) GPIOA_DATA_OUT;

	pClkctrlReg->gpioa_en=1;
	pPortDModeReg->pin_5=1;
	pPortDOutReg->pin_5=1;
    /* Loop forever */
	for(;;);
}
