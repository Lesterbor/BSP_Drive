/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : BSP_RGB_UI_FONT.h
  * @brief          : Header for BSP_RGB_UI_FONT.c file.
  *                   This file provides code for the configuration
  *                   of the BSP_LCD_UI_FONT instances
	* @author         : Lesterbor
	*	@time						:	2021-10-11 
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __BSP_RGB_UI_FONT_H_
#define __BSP_RGB_UI_FONT_H_

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

	#include "main.h"
	
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PT */

//8*8 ASCII�ַ�������
//����ȡģ
unsigned char Song8X8[] =  {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*" ",0*/
	0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x0C,0x00,/*"!",1*/
	0x33,0x33,0x00,0x00,0x00,0x00,0x00,0x00,/*""",2*/
	0x33,0x3F,0x33,0x33,0x33,0x3F,0x33,0x00,/*"#",3*/
	0x0C,0x3F,0x30,0x3F,0x03,0x3F,0x0C,0x00,/*"$",4*/
	0x00,0x30,0x03,0x0C,0x30,0x03,0x00,0x00,/*"%",5*/
	0x0C,0x33,0x33,0x0C,0x33,0x30,0x0F,0x00,/*"&",6*/
	0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,/*"'",7*/
	0x03,0x0C,0x0C,0x0C,0x0C,0x0C,0x03,0x00,/*"(",8*/
	0x30,0x0C,0x0C,0x0C,0x0C,0x0C,0x30,0x00,/*")",9*/
	0x00,0x33,0x0C,0x3F,0x0C,0x33,0x00,0x00,/*"*",10*/
	0x00,0x0C,0x0C,0x3F,0x0C,0x0C,0x00,0x00,/*"+",11*/
	0x00,0x00,0x00,0x00,0x00,0x0C,0x30,0x00,/*",",12*/
	0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,/*"-",13*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,/*".",14*/
	0x00,0x00,0x03,0x0C,0x30,0x00,0x00,0x00,/*"/",15*/
	0x0C,0x33,0x33,0x3F,0x33,0x33,0x0C,0x00,/*"0",16*/
	0x0C,0x3C,0x0C,0x0C,0x0C,0x0C,0x3F,0x00,/*"1",17*/
	0x0C,0x33,0x03,0x0C,0x0C,0x30,0x3F,0x00,/*"2",18*/
	0x0C,0x33,0x03,0x0C,0x03,0x33,0x0C,0x00,/*"3",19*/
	0x03,0x0F,0x33,0x33,0x3F,0x03,0x03,0x00,/*"4",20*/
	0x3F,0x30,0x3C,0x33,0x03,0x33,0x0C,0x00,/*"5",21*/
	0x0C,0x33,0x30,0x3C,0x33,0x33,0x0C,0x00,/*"6",22*/
	0x3F,0x33,0x03,0x0C,0x0C,0x0C,0x0C,0x00,/*"7",23*/
	0x0C,0x33,0x33,0x0C,0x33,0x33,0x0C,0x00,/*"8",24*/
	0x0C,0x33,0x33,0x0F,0x03,0x33,0x0C,0x00,/*"9",25*/
	0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,/*":",26*/
	0x00,0x00,0x18,0x00,0x00,0x18,0x60,0x00,/*";",27*/
	0x00,0x06,0x18,0x60,0x18,0x06,0x00,0x00,/*"<",28*/
	0x00,0x00,0x7E,0x00,0x7E,0x00,0x00,0x00,/*"=",29*/
	0x00,0x60,0x18,0x06,0x18,0x60,0x00,0x00,/*">",30*/
	0x18,0x66,0x06,0x18,0x18,0x00,0x18,0x00,/*"?",31*/
	0x18,0x66,0x7E,0x66,0x78,0x60,0x1E,0x00,/*"@",32*/
	0x18,0x66,0x66,0x66,0x7E,0x66,0x66,0x00,/*"A",33*/
	0x78,0x66,0x66,0x78,0x66,0x66,0x78,0x00,/*"B",34*/
	0x18,0x66,0x60,0x60,0x60,0x66,0x18,0x00,/*"C",35*/
	0x78,0x66,0x66,0x66,0x66,0x66,0x78,0x00,/*"D",36*/
	0x7E,0x60,0x60,0x78,0x60,0x60,0x7E,0x00,/*"E",37*/
	0x7E,0x60,0x60,0x78,0x60,0x60,0x60,0x00,/*"F",38*/
	0x18,0x66,0x60,0x66,0x66,0x66,0x1E,0x00,/*"G",39*/
	0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x00,/*"H",40*/
	0x7E,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,/*"I",41*/
	0x06,0x06,0x06,0x06,0x06,0x66,0x18,0x00,/*"J",42*/
	0x66,0x66,0x78,0x78,0x66,0x66,0x66,0x00,/*"K",43*/
	0x60,0x60,0x60,0x60,0x60,0x60,0x7E,0x00,/*"L",44*/
	0x66,0x7E,0x7E,0x7E,0x66,0x66,0x66,0x00,/*"M",45*/
	0x78,0x66,0x66,0x66,0x66,0x66,0x66,0x00,/*"N",46*/
	0x18,0x66,0x66,0x66,0x66,0x66,0x18,0x00,/*"O",47*/
	0x78,0x66,0x66,0x78,0x60,0x60,0x60,0x00,/*"P",48*/
	0x18,0x66,0x66,0x66,0x7E,0x66,0x1E,0x00,/*"Q",49*/
	0x78,0x66,0x66,0x78,0x66,0x66,0x66,0x00,/*"R",50*/
	0x18,0x66,0x60,0x18,0x06,0x66,0x18,0x00,/*"S",51*/
	0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x00,/*"T",52*/
	0x66,0x66,0x66,0x66,0x66,0x66,0x7E,0x00,/*"U",53*/
	0x66,0x66,0x66,0x66,0x66,0x18,0x18,0x00,/*"V",54*/
	0x66,0x66,0x66,0x7E,0x7E,0x7E,0x66,0x00,/*"W",55*/
	0x66,0x66,0x18,0x18,0x18,0x66,0x66,0x00,/*"X",56*/
	0x66,0x66,0x66,0x18,0x18,0x18,0x18,0x00,/*"Y",57*/
	0x7E,0x06,0x18,0x18,0x18,0x60,0x7E,0x00,/*"Z",58*/
	0x1E,0x18,0x18,0x18,0x18,0x18,0x1E,0x00,/*"[",59*/
	0x00,0x00,0x60,0x18,0x06,0x00,0x00,0x00,/*"\",60*/
	0x78,0x18,0x18,0x18,0x18,0x18,0x78,0x00,/*"]",61*/
	0x18,0x66,0x00,0x00,0x00,0x00,0x00,0x00,/*"^",62*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,/*"_",63*/
	0x18,0x06,0x00,0x00,0x00,0x00,0x00,0x00,/*"`",64*/
	0x00,0x00,0x78,0x06,0x1E,0x66,0x1E,0x00,/*"a",65*/
	0x60,0x60,0x78,0x66,0x66,0x66,0x78,0x00,/*"b",66*/
	0x00,0x00,0x1E,0x60,0x60,0x60,0x1E,0x00,/*"c",67*/
	0x06,0x06,0x1E,0x66,0x66,0x66,0x1E,0x00,/*"d",68*/
	0x00,0x00,0x18,0x66,0x7E,0x60,0x1E,0x00,/*"e",69*/
	0x1E,0x18,0x7E,0x18,0x18,0x18,0x18,0x00,/*"f",70*/
	0x00,0x00,0x1E,0x66,0x1E,0x06,0x78,0x00,/*"g",71*/
	0x60,0x60,0x78,0x66,0x66,0x66,0x66,0x00,/*"h",72*/
	0x18,0x00,0x18,0x18,0x18,0x18,0x18,0x00,/*"i",73*/
	0x06,0x00,0x06,0x06,0x06,0x66,0x18,0x00,/*"j",74*/
	0x60,0x60,0x66,0x66,0x78,0x66,0x66,0x00,/*"k",75*/
	0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x00,/*"l",76*/
	0x00,0x00,0x78,0x7E,0x7E,0x7E,0x66,0x00,/*"m",77*/
	0x00,0x00,0x78,0x66,0x66,0x66,0x66,0x00,/*"n",78*/
	0x00,0x00,0x18,0x66,0x66,0x66,0x18,0x00,/*"o",79*/
	0x00,0x00,0x78,0x66,0x66,0x78,0x60,0x00,/*"p",80*/
	0x00,0x00,0x1E,0x66,0x66,0x1E,0x06,0x00,/*"q",81*/
	0x00,0x00,0x66,0x78,0x60,0x60,0x60,0x00,/*"r",82*/
	0x00,0x00,0x1E,0x60,0x18,0x06,0x78,0x00,/*"s",83*/
	0x00,0x18,0x7E,0x18,0x18,0x18,0x1E,0x00,/*"t",84*/
	0x00,0x00,0x66,0x66,0x66,0x66,0x7E,0x00,/*"u",85*/
	0x00,0x00,0x66,0x66,0x66,0x18,0x18,0x00,/*"v",86*/
	0x00,0x00,0x66,0x66,0x7E,0x7E,0x66,0x00,/*"w",87*/
	0x00,0x00,0x66,0x66,0x18,0x66,0x66,0x00,/*"x",88*/
	0x00,0x00,0x66,0x66,0x1E,0x06,0x78,0x00,/*"y",89*/
	0x00,0x00,0x7E,0x06,0x18,0x60,0x7E,0x00,/*"z",90*/
	0x06,0x18,0x18,0x60,0x18,0x18,0x06,0x00,/*"{",91*/
	0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,/*"|",92*/
	0x60,0x18,0x18,0x06,0x18,0x18,0x60,0x00,/*"}",93*/
	0x00,0x00,0x78,0x1E,0x00,0x00,0x00,0x00,/*"~",94*/
};

/* USER CODE END PT */

	
/* Exported functions prototypes ---------------------------------------------*/
/* USER CODE BEGIN EFP */


/* USER CODE END EFP */

#endif /* __BSP_RGB_UI_FONT_H_ */


/************************ (C) COPYRIGHT Lesterbor *****END OF FILE*************/