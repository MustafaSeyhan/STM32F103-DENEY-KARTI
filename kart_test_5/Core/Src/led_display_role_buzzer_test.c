/*
 * led_display_test.c
 *
 *  Created on: Jan 16, 2025
 *      Author: Mustafa
 */

#include <led_display_role_buzzer_test.h>
#include <main.h>


void led_display_testi()
{
    uint16_t mevcut_deger = GPIOB->ODR; // Port B'nin mevcut çıkış değerini oku
    mevcut_deger &= 0x00FF;
    GPIOB->ODR = mevcut_deger;

	 HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_led_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_yedi_segment_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_1_D_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_2_E_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_3_C_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_4_DP_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_5_A_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_6_G_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_7_F_Pin);
	  HAL_Delay(500);
	  HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_8_B_Pin);
	  HAL_Delay(500);

		 HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_led_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_yedi_segment_Pin, GPIO_PIN_SET);
	 	  HAL_Delay(500);
		 HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_5_A_Pin);
		 	  HAL_Delay(500);
		 	 HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_8_B_Pin);
		 	 		 	  HAL_Delay(500);
		 	 		 	HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_3_C_Pin);
		 	 		 			 	  HAL_Delay(500);
		 	 		 			 	HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_1_D_Pin);
		 	 		 			 			 	  HAL_Delay(500);
		 	 		 			 			 	HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_2_E_Pin);
		 	 		 			 			 			 	  HAL_Delay(500);
		 	 		 			 			 			 HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_7_F_Pin);
		 	 		 			 			 			 		 	  HAL_Delay(500);
		 	 		 			 			 			 		HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_6_G_Pin);
		 	 		 			 			 			 				 	  HAL_Delay(500);
		 	 		 			 			 			 				HAL_GPIO_TogglePin(led_1_D_GPIO_Port, led_4_DP_Pin);
		 	 		 			 			 			 						 	  HAL_Delay(500);
}



void role_testi()
{
	HAL_GPIO_WritePin(trs_role_GPIO_Port, trs_role_Pin, GPIO_PIN_SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(trs_role_GPIO_Port, trs_role_Pin, GPIO_PIN_RESET);
	HAL_Delay(500);
}


void buzzer_testi()
{
	HAL_GPIO_WritePin(trs_buzzer_GPIO_Port, trs_buzzer_Pin, GPIO_PIN_SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(trs_buzzer_GPIO_Port, trs_buzzer_Pin, GPIO_PIN_RESET);
	HAL_Delay(500);
}





