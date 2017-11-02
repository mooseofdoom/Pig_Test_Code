#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_usart.h"
#include "UART.h"

int read[23] = 0;
int calc1, calc2, calc3, calc4, calc5, calc6;

static void Main (void)
{
	//encoder 1
	GPIO_InitStructure.Pin = GPIO_PIN_1; 
	read[0] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1);
	GPIO_InitStructure.Pin = GPIO_PIN_2; 
	read[1] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2);
	GPIO_InitStructure.Pin = GPIO_PIN_3; 
	read[2] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);
	GPIO_InitStructure.Pin = GPIO_PIN_4; 
	read[3] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4);
	

	calc1 =((read[0]) + (read[1]*2) + (read[2] *4) + (read[3]*8))*22.5;
	
	
	//encdoer 2
	GPIO_InitStructure.Pin = GPIO_PIN_5;
	read[4] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_5);	
	GPIO_InitStructure.Pin = GPIO_PIN_6;
	read[5] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6);
	GPIO_InitStructure.Pin = GPIO_PIN_7; 
	read[6] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_7);
	GPIO_InitStructure.Pin = GPIO_PIN_8;
	read[7] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8);
	
	calc2 =((read[4]) + (read[5]*2) + (read[6] *4) + (read[7]*8))*22.5;
		
	//encoder 3
	GPIO_InitStructure.Pin = GPIO_PIN_9; 
	read[8] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_9);
	GPIO_InitStructure.Pin = GPIO_PIN_10;
	read[9] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10);	
	GPIO_InitStructure.Pin = GPIO_PIN_11; 
	read[10] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11);
	GPIO_InitStructure.Pin = GPIO_PIN_12;
	read[11] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12);
	
	calc3 =((read[8]) + (read[9]*2) + (read[10] *4) + (read[11]*8))*22.5;
		
	//encoder 4
	GPIO_InitStructure.Pin = GPIO_PIN_13;
	read[12] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_13);	
	GPIO_InitStructure.Pin = GPIO_PIN_14;
	read[13] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_14);	
	GPIO_InitStructure.Pin = GPIO_PIN_15; 
	read[14] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_15);
	GPIO_InitStructure.Pin = GPIO_PIN_16; 
	read[15] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_16);
	
	calc4 =((read[12]) + (read[13]*2) + (read[14] *4) + (read[15]*8))*22.5;
		
	//encoder 5
	GPIO_InitStructure.Pin = GPIO_PIN_17; 
	read[16] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_17);
	GPIO_InitStructure.Pin = GPIO_PIN_18;
	read[17] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_18);
	GPIO_InitStructure.Pin = GPIO_PIN_19; 
	read[18] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_19);
	GPIO_InitStructure.Pin = GPIO_PIN_20; 
	read[19] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_20);
	
	calc5 =((read[16]) + (read[17]*2) + (read[18] *4) + (read[19]*8))*22.5;
		
	//encoder 6
	GPIO_InitStructure.Pin = GPIO_PIN_21; 
	read[20] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_21);
	GPIO_InitStructure.Pin = GPIO_PIN_22; 
	read[21] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_22);
	GPIO_InitStructure.Pin = GPIO_PIN_23; 
	read[22] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_23);
	GPIO_InitStructure.Pin = GPIO_PIN_24; 	
	read[23] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_24);
	
	calc6 =((read[20]) + (read[21]*2) + (read[22] *4) + (read[23]*8))*22.5;


}

