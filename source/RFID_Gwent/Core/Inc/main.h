/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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
#define TRF_EN_Pin GPIO_PIN_0
#define TRF_EN_GPIO_Port GPIOA
#define DATA_CLK_Pin GPIO_PIN_1
#define DATA_CLK_GPIO_Port GPIOA
#define IO_7_Pin GPIO_PIN_2
#define IO_7_GPIO_Port GPIOA
#define IO_6_Pin GPIO_PIN_3
#define IO_6_GPIO_Port GPIOA
#define IO_5_Pin GPIO_PIN_4
#define IO_5_GPIO_Port GPIOA
#define IO_4_Pin GPIO_PIN_5
#define IO_4_GPIO_Port GPIOA
#define IO_3_Pin GPIO_PIN_6
#define IO_3_GPIO_Port GPIOA
#define IO_2_Pin GPIO_PIN_7
#define IO_2_GPIO_Port GPIOA
#define IO_1_Pin GPIO_PIN_0
#define IO_1_GPIO_Port GPIOB
#define IO_0_Pin GPIO_PIN_1
#define IO_0_GPIO_Port GPIOB
#define MOD_Pin GPIO_PIN_8
#define MOD_GPIO_Port GPIOA
#define IRQ_Pin GPIO_PIN_9
#define IRQ_GPIO_Port GPIOA
#define ASK_OOK_Pin GPIO_PIN_10
#define ASK_OOK_GPIO_Port GPIOA
#define BOOT0_Pin GPIO_PIN_3
#define BOOT0_GPIO_Port GPIOH

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
