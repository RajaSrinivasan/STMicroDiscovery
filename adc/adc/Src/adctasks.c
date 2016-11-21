#include <stdio.h>
#include "stm32f0xx_hal.h"
#include "cmsis_os.h"
#include "adctasks.h"
void HeartbeatFunction( void *params) 
{
    for (;;)
	{
	     HAL_GPIO_TogglePin(GPIOC, LD4_Pin) ;
		   vTaskDelay( 1000 / portTICK_RATE_MS ) ;
	}
}

uint32_t block[64] ;	
uint32_t loopctr = 0 ;
uint32_t crccalc ;

void CRCCalcFunction( void *params ) 
{
	for (;;loopctr++)
	{
		for (uint32_t i=0; i<64; i++)
		{
			 block[i] = loopctr ;
		}
		crccalc = HAL_CRC_Calculate(&hcrc, block , 64 ) ;
	  HAL_GPIO_TogglePin(GPIOC, LD3_Pin) ;
		vTaskDelay( 1000 / portTICK_RATE_MS ) ;
	} 
	
}
uint32_t value = 0;
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */

	value = HAL_ADC_GetValue(hadc) ;
}

void MeasurementFunction( void *params ) 
{
	HAL_ADC_Start_IT(&hadc) ;
	
	for (;;)
	{
		vTaskDelay( 1000 / portTICK_RATE_MS ) ;
	}
	
}
