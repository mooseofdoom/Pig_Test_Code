#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#define circ

GPIO_InitTypeDef GPIO_InitStructure ;
unsigned int read[24];
int calc1, calc2, calc3, calc4, calc5, calc6, ave, ave2, dist1, dist2, dist3, dist4, dist5, dist6;


 int main (void)
{
	

	
	/******************************************/
	/*								setup 									*/
	/******************************************/
	
	// set up pins and read from pins 
	
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStructure.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15; 
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH; 
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStructure);
	
  GPIO_InitStructure.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8;
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH; 
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	//encoder 
	read[0] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);  
	read[1] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1);
	read[2] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2);
	read[3] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3); 
	
	//encdoer 2
	read[4] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4);	
	read[5] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_5);
	read[6] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6);
	read[7] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_7);
	
	
	//encoder 3
	read[8] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8);
	read[9] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_9);	
	read[10] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10);
	read[11] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11);
	
	//encoder 4
	read[12] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12);	
	read[13] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_13);	
	read[14] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_14);
	read[15] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_15);
	
	//encoder 5
	read[16] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0);
	read[17] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1);
	read[18] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2);
	read[19] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3);
	
	//encoder 6
	read[20] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4);
	read[21] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5);
	read[22] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6);
	read[23] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7);
	
	
	/*****************************************************************/
	/*											Calculations 													 	*/
	/*****************************************************************/
	//take readings, convert to binary and then to Degrees
	
	//encoder 1
	calc1 =((read[0]) + (read[1]*2) + (read[2] *4) + (read[3]*8))*22.5; 
	
	//encoder 2
	calc2 =((read[4]) + (read[5]*2) + (read[6] *4) + (read[7]*8))*22.5; 
		
	//encoder 3
	calc3 =((read[8]) + (read[9]*2) + (read[10] *4) + (read[11]*8))*22.5;
		
	//encoder 4
	calc4 =((read[12]) + (read[13]*2) + (read[14] *4) + (read[15]*8))*22.5; 

	//encoder 5
	calc5 =((read[16]) + (read[17]*2) + (read[18] *4) + (read[19]*8))*22.5; 
		
	//encoder 6
	calc6 =((read[20]) + (read[21]*2) + (read[22] *4) + (read[23]*8))*22.5; 
	
	//Degress to distance traveled
	
	dist1 = (circ/360)*calc1;
	dist2 = (circ/360)*calc2;
	dist3 = (circ/360)*calc3;
	dist4 = (circ/360)*calc4;
	dist5 = (circ/360)*calc5;
	dist6 = (circ/360)*calc6;

	ave = (dist1 + dist2 + dist3 + dist4 + dist5 + dist6)/6;
	ave2 = ave +ave2;

}

