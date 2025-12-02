/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define led_builtin_Pin GPIO_PIN_13
#define led_builtin_GPIO_Port GPIOC
#define buton_1_Pin GPIO_PIN_0
#define buton_1_GPIO_Port GPIOA
#define buton_2_Pin GPIO_PIN_3
#define buton_2_GPIO_Port GPIOA
#define buton_3_Pin GPIO_PIN_7
#define buton_3_GPIO_Port GPIOA
#define trs_role_Pin GPIO_PIN_0
#define trs_role_GPIO_Port GPIOB
#define trs_buzzer_Pin GPIO_PIN_1
#define trs_buzzer_GPIO_Port GPIOB
#define led_3_C_Pin GPIO_PIN_10
#define led_3_C_GPIO_Port GPIOB
#define led_4_DP_Pin GPIO_PIN_11
#define led_4_DP_GPIO_Port GPIOB
#define led_5_A_Pin GPIO_PIN_12
#define led_5_A_GPIO_Port GPIOB
#define led_6_G_Pin GPIO_PIN_13
#define led_6_G_GPIO_Port GPIOB
#define led_7_F_Pin GPIO_PIN_14
#define led_7_F_GPIO_Port GPIOB
#define led_8_B_Pin GPIO_PIN_15
#define led_8_B_GPIO_Port GPIOB
#define trs_led_Pin GPIO_PIN_11
#define trs_led_GPIO_Port GPIOA
#define trs_yedi_segment_Pin GPIO_PIN_15
#define trs_yedi_segment_GPIO_Port GPIOA
#define led_1_D_Pin GPIO_PIN_8
#define led_1_D_GPIO_Port GPIOB
#define led_2_E_Pin GPIO_PIN_9
#define led_2_E_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
