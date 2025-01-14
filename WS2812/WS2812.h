/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : WS2812.h
  * @brief          : Header for WS2812.c file.
  *                   This file provides code for the configuration
  *                   of the WS2812 instances
	* @author         : ��ǧ����
	*	@time						:	2024/11/10
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __WS2812_H_
#define __WS2812_H_

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

	#include "main.h"
	#include "tim.h"
	
/* USER CODE END Includes */
/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PT */

	#define WS_H           95   // 1 ����Լ���ֵ
	#define WS_L           30   // 0 ����Լ���ֵ
	#define LED_NUM        64   // WS2812�Ƹ���
	#define DATA_LEN       24   // WS2812���ݳ��ȣ�������Ҫ24���ֽ�
	#define WS2812_RST_NUM 60   // �ٷ���λʱ��Ϊ50us��40�����ڣ����������ʹ��50������
	#define DataBuffLen		 1596	//���������鳤�� = LED_NUM * DATA_LEN + WS2812_RST_NUM

/* USER CODE END PT */
/* Exported functions prototypes ---------------------------------------------*/
/* USER CODE BEGIN EFP */

	void WS2812_Init(void);
	void WS2812_Set(uint16_t num,uint8_t R,uint8_t G,uint8_t B);
	void QF_RGB_SetPos(uint16_t x,uint16_t y,uint16_t color);
	
	void RGB_ShowChar_8_8(uint8_t chr,uint16_t BackGroundColor,uint16_t Color);
	void QF_RGB8_printf(uint16_t BackGroundColor,uint16_t Color,const char* format, ...);

/* USER CODE END EFP */
#endif /* __WS2812_H_ */
/************************ (C) COPYRIGHT Lesterbor *****END OF FILE*************/
