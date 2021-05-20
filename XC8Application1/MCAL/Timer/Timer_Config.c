/*
 * Timer_Config.c
 *
 * Created: 20-May-21 4:38:09 PM
 *  Author: Dell
 */ 
 /*INCLUDES**/
 #include "Timer_Config.h"

 Timer_cfg_s Timer_Configuration2 =
 {
	 TIMER_CH2,
	 TIMER_MODE,
	 TIMER_INTERRUPT_MODE,
	 TIMER_PRESCALER_1024,/*it will not start untill we call timer start function*/
 };
 Timer_cfg_s Timer_Configuration0  =
 {
	 TIMER_CH0,
	 TIMER_MODE,
	 TIMER_INTERRUPT_MODE,
	 TIMER_PRESCALER_64,/*it will not start untill we call timer start function*/
 };
 Timer_cfg_s Timer_Deinit_Configuration0  =
 {
	 TIMER_CH0,
	 TIMER_MODE,
	 TIMER_INTERRUPT_MODE,
	 TIMER_NO_CLOCK,/*it will not start untill we call timer start function*/
 };