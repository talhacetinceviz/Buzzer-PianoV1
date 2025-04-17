#include "BUTTON_READ.h"

void buzzer_play_note(uint32_t prescaler,uint8_t stop)
{
	if(stop==0){

    __HAL_TIM_DISABLE(&htim2);
    htim2.Instance->PSC = prescaler;
    htim2.Instance->CCR1 = 50;
    __HAL_TIM_ENABLE(&htim2);
	}
	else
	{
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 0);
	}
}
void button_control(void)
{
	//*************************************S0*********************************************************//
	if(S0_switch==0 && S0_Count>10      && S0_Count<100)    {S0_switch=1; S0_Rep=0;} //Basili kalma
	if(S0_switch==1 && S0_Count==0)                         {S0_switch=2; S0_Rep=0;} //Basilip Cekilme
	if(S0_Rep==0){
	switch(S0_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	        S0_Rep=1;
	        if(tp0==0){buzzer_play_note(100,0);tp0=1;}
	        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,SET);
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	        S0_Rep=1;   S0_switch=0; tp0=0;
	        buzzer_play_note(125,1);
	        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,RESET);
	        break;
	}
	}
	//*************************************S1*********************************************************//
	if(S1_switch==0 && S1_Count>10      && S1_Count<100)    {S1_switch=1; S1_Rep=0;} //Basili kalma
	if(S1_switch==1 && S1_Count==0)                         {S1_switch=2; S1_Rep=0;} //Basilip Cekilme
	if(S1_Rep==0){
	switch(S1_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	    	if(tp1==0){buzzer_play_note(125,0);tp1=1;}
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,SET);
	        S1_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	        S1_Rep=1;   S1_switch=0; tp1=0;
	        buzzer_play_note(329,1);
	        HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,RESET);
	        break;
	}
	}
	//*************************************S2*********************************************************//
	if(S2_switch==0 && S2_Count>10      && S2_Count<100)    {S2_switch=1; S2_Rep=0;} //Basili kalma
	if(S2_switch==1 && S2_Count==0)                         {S2_switch=2; S2_Rep=0;} //Basilip Cekilme
	if(S2_Rep==0){
	switch(S2_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	        S2_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	        S2_Rep=1;   S2_switch=0;
	        break;

	    case 5:/*2sn Basili kalma esnasi*/
	        S2_Rep=1;   S2_switch=0;
	        break;

	    case 6:/*6sn Basili kalma esnasi*/
	        S2_Rep=2;   S2_switch=0;
	        break;
	}
	}
	//*************************************S3*********************************************************//
	if(S3_switch==0 && S3_Count>10      && S3_Count<100)    {S3_switch=1; S3_Rep=0;}
	if(S3_switch==1 && S3_Count==0)                          {S3_switch=2; S3_Rep=0;}
	if(S3_Rep==0){
	switch(S3_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	    	if(tp3==0){buzzer_play_note(150,0);tp3=1;}
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,SET);
	        S3_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	    	buzzer_play_note(439,1);
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,RESET);
	        S3_Rep=1;   S3_switch=0; tp3=0;
	        break;
	}
	}
	//*************************************S4*********************************************************//
	if(S4_switch==0 && S4_Count>10      && S4_Count<100)    {S4_switch=1; S4_Rep=0;}
	if(S4_switch==1 && S4_Count==0)                         {S4_switch=2; S4_Rep=0;}
	if(S4_Rep==0){
	switch(S4_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	    	if(tp4==0){buzzer_play_note(175,0);tp4=1;}
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,SET);
	        S4_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	    	buzzer_play_note(659,1);
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,RESET);
	        S4_Rep=1;   S4_switch=0; tp4=0;
	        break;
	}
	}
	//*************************************S5*********************************************************//
	if(S5_switch==0 && S5_Count>10      && S5_Count<100)    {S5_switch=1; S5_Rep=0;}
	if(S5_switch==1 && S5_Count==0)                          {S5_switch=2; S5_Rep=0;}
	if(S5_Rep==0){
	switch(S5_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	    	if(tp5==0){buzzer_play_note(200,0);tp5=1;}
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,SET);
	        S5_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	    	buzzer_play_note(659,1);
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,RESET);
	        S5_Rep=1;   S5_switch=0; tp5=0;
	        break;
	}
	}
	//*************************************S6*********************************************************//
	if(S6_switch==0 && S6_Count>10      && S6_Count<100)    {S6_switch=1; S6_Rep=0;}
	if(S6_switch==1 && S6_Count==0)                         {S6_switch=2; S6_Rep=0;}
	if(S6_Rep==0){
	switch(S6_switch)
	{
	    case 1: /*Basili kalma esnasi*/
	    	if(tp6==0){buzzer_play_note(225,0);tp6=1;}
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,SET);
	        S6_Rep=1;
	        break;

	    case 2:/*Basilip cekilme esnasi*/
	    	buzzer_play_note(879,1);
	    	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,RESET);
	        S6_Rep=1;   S6_switch=0; tp6=0;
	        break;
	}
	}
}

void button_read(void)
{
	if(BTN0==1){if(S0_Count<1000){S0_Count++;}}else{ S0_Count=0;}//S0-True
	if(BTN1==1){if(S1_Count<1000){S1_Count++;}}else{ S1_Count=0;}//S1-True
	if(BTN2==1){if(S2_Count<1000){S2_Count++;}}else{ S2_Count=0;}//S2-BOS
	if(BTN3==1){if(S3_Count<1000){S3_Count++;}}else{ S3_Count=0;}//S3-True
	if(BTN5==1){if(S4_Count<1000){S4_Count++;}}else{ S4_Count=0;}//S4-Wrong(S5)
	if(BTN4==1){if(S5_Count<1000){S5_Count++;}}else{ S5_Count=0;}//S5-Wrong(S4)
	if(BTN6==1){if(S6_Count<1000){S6_Count++;}}else{ S6_Count=0;}//S6-True
}



