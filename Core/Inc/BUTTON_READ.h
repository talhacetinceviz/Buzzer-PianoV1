/*
 * BUTTON_READ.h
 *
 *  Created on: Apr 17, 2025
 *      Author: talha
 */

#ifndef INC_BUTTON_READ_H_
#define INC_BUTTON_READ_H_

#include "stm32f4xx_hal.h"

void button_control(void);
void button_read(void);
void buzzer_play_note(uint32_t prescaler,uint8_t stop);

extern TIM_HandleTypeDef htim2;

extern uint8_t button_counter;
extern uint8_t S0_switch,S1_switch,S2_switch,S3_switch,S4_switch,S5_switch,S6_switch;
extern uint16_t S0_Count,S1_Count,S2_Count,S3_Count,S4_Count,S5_Count,S6_Count;
extern uint8_t S0_Rep,S1_Rep,S2_Rep,S3_Rep,S4_Rep,S5_Rep,S6_Rep;
extern uint8_t tp0,tp1,tp2,tp3,tp4,tp5,tp6;
extern const uint16_t notes[];


#define BTN0 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0)
#define BTN1 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1)
#define BTN2 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2)
#define BTN3 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3)
#define BTN4 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4)
#define BTN5 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5)
#define BTN6 HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6)

#endif /* INC_BUTTON_READ_H_ */
