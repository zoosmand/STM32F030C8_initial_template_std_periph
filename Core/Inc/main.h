/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "stm32f0xx.h"

/* Private includes ----------------------------------------------------------*/
#include "common.h"
#include "usart.h"
#include "stm32f0xx_it.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported variables --------------------------------------------------------*/
extern uint32_t sysQuantum;
extern uint32_t millis;
extern uint32_t seconds;
extern uint32_t minutes;
extern uint32_t _EREG_;
extern uint32_t check;
extern uint32_t SystemCoreClock;

/* Private defines -----------------------------------------------------------*/
#define SWO_USART
// _EREG_ Flags    
#define _BT6F_    0 // Basic Timer7 Flag
// #define _RTCALAF_ 1 // RTC Alarm A Flag
// #define _RTCALBF_ 2 // RTC Alarm B Flag
// #define _RTWUPF_  3 // RTC Wake Up Flag
// #define _RDF_     4 // Run Display Flag
// #define _DDF_     5 // Display Delay Flag
// #define _DBLF_    6 // Data Buffer is Locked Flag
// #define _U1RXF_   7 // USART1 RXNE Interrupt occurs Flag
// #define _BLINKF_  8 // Blink Flaf
#define _DELAYF_  9 // Delay Flag
// #define _EWUPF_   10 // EXTI WakeUp PA0 Flag
// #define _ETSF_    11 // EXTI Touch Screen PA15 Flag

// /* Private defines -----------------------------------------------------------*/
// #define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority, 4 bits for subpriority */
// #define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority, 3 bits for subpriority */
// #define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority, 2 bits for subpriority */
// #define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority, 1 bit  for subpriority */
// #define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority, 0 bit  for subpriority */

// #define GPIO_PIN_0                   GPIO_BSRR_BS_0 /*!< Select pin 0 */
// #define GPIO_PIN_0_Pos               0
// #define GPIO_PIN_1                   GPIO_BSRR_BS_1 /*!< Select pin 1 */
// #define GPIO_PIN_1_Pos               1
// #define GPIO_PIN_2                   GPIO_BSRR_BS_2 /*!< Select pin 2 */
// #define GPIO_PIN_2_Pos               2
// #define GPIO_PIN_3                   GPIO_BSRR_BS_3 /*!< Select pin 3 */
// #define GPIO_PIN_3_Pos               3
// #define GPIO_PIN_4                   GPIO_BSRR_BS_4 /*!< Select pin 4 */
// #define GPIO_PIN_4_Pos               4
// #define GPIO_PIN_5                   GPIO_BSRR_BS_5 /*!< Select pin 5 */
// #define GPIO_PIN_5_Pos               5
// #define GPIO_PIN_6                   GPIO_BSRR_BS_6 /*!< Select pin 6 */
// #define GPIO_PIN_6_Pos               6
// #define GPIO_PIN_7                   GPIO_BSRR_BS_7 /*!< Select pin 7 */
// #define GPIO_PIN_7_Pos               7
// #define GPIO_PIN_8                   GPIO_BSRR_BS_8 /*!< Select pin 8 */
// #define GPIO_PIN_8_Pos               8
// #define GPIO_PIN_9                   GPIO_BSRR_BS_9 /*!< Select pin 9 */
// #define GPIO_PIN_9_Pos               9
// #define GPIO_PIN_10                  GPIO_BSRR_BS_10 /*!< Select pin 10 */
// #define GPIO_PIN_10_Pos              10
// #define GPIO_PIN_11                  GPIO_BSRR_BS_11 /*!< Select pin 11 */
// #define GPIO_PIN_11_Pos              11
// #define GPIO_PIN_12                  GPIO_BSRR_BS_12 /*!< Select pin 12 */
// #define GPIO_PIN_12_Pos              12
// #define GPIO_PIN_13                  GPIO_BSRR_BS_13 /*!< Select pin 13 */
// #define GPIO_PIN_13_Pos              13
// #define GPIO_PIN_14                  GPIO_BSRR_BS_14 /*!< Select pin 14 */
// #define GPIO_PIN_14_Pos              14
// #define GPIO_PIN_15                  GPIO_BSRR_BS_15 /*!< Select pin 15 */
// #define GPIO_PIN_15_Pos              15
// #define GPIO_PIN_ALL                 (uint16_t)0xffff /*!< Select all pins */

/* Exported functions prototypes ---------------------------------------------*/
extern void Delay_Handler(uint32_t delay);
extern void Delay(uint32_t delay);
extern void Cron_Handler(void);


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
