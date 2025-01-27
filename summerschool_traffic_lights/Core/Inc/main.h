/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define POT_Pin GPIO_PIN_0
#define POT_GPIO_Port GPIOA
#define RED_LED_2_Pin GPIO_PIN_5
#define RED_LED_2_GPIO_Port GPIOA
#define YELLOW_LED_2_Pin GPIO_PIN_6
#define YELLOW_LED_2_GPIO_Port GPIOA
#define GREEN_LED_2_Pin GPIO_PIN_7
#define GREEN_LED_2_GPIO_Port GPIOA
#define BUTTON_Pin GPIO_PIN_10
#define BUTTON_GPIO_Port GPIOB
#define GREEN_LED_TRAFFIC_Pin GPIO_PIN_12
#define GREEN_LED_TRAFFIC_GPIO_Port GPIOB
#define YELLOW_LED_TRAFFIC_Pin GPIO_PIN_13
#define YELLOW_LED_TRAFFIC_GPIO_Port GPIOB
#define RED_LED_TRAFFIC_Pin GPIO_PIN_14
#define RED_LED_TRAFFIC_GPIO_Port GPIOB
#define RED_LED_ON_Pin GPIO_PIN_8
#define RED_LED_ON_GPIO_Port GPIOA
#define GREEN_LED_OFF_Pin GPIO_PIN_9
#define GREEN_LED_OFF_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
