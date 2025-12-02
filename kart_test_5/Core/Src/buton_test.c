/*
 * buton_test.c
 *
 *  Created on: Jan 16, 2025
 *      Author: Mustafa
 */
#include <main.h>
#include <buton_test.h>

void buton_test()
{	 HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_led_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_yedi_segment_Pin, GPIO_PIN_RESET);
	 HAL_GPIO_WritePin(led_1_D_GPIO_Port, led_1_D_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(led_1_D_GPIO_Port, led_2_E_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(led_1_D_GPIO_Port, led_3_C_Pin, GPIO_PIN_SET);

	 while(HAL_GPIO_ReadPin(buton_1_GPIO_Port, buton_1_Pin)==1)
	 {}
	 HAL_GPIO_WritePin(led_1_D_GPIO_Port, led_1_D_Pin, GPIO_PIN_RESET);
	 HAL_Delay(10);
	 while(HAL_GPIO_ReadPin(buton_1_GPIO_Port, buton_1_Pin)==0){}
	 HAL_Delay(10);

	 while(HAL_GPIO_ReadPin(buton_2_GPIO_Port, buton_2_Pin)==1)
	 	 {}
	 	 HAL_GPIO_WritePin(led_2_E_GPIO_Port, led_2_E_Pin, GPIO_PIN_RESET);
	 	 HAL_Delay(10);
	 	 while(HAL_GPIO_ReadPin(buton_2_GPIO_Port, buton_2_Pin)==0){}
	 	 HAL_Delay(10);


	 	while(HAL_GPIO_ReadPin(buton_3_GPIO_Port, buton_3_Pin)==1)
	 		 {}
	 		 HAL_GPIO_WritePin(led_3_C_GPIO_Port, led_3_C_Pin, GPIO_PIN_RESET);
	 		 HAL_Delay(10);
	 		 while(HAL_GPIO_ReadPin(buton_3_GPIO_Port, buton_3_Pin)==0){}
	 		 HAL_Delay(10);
}
