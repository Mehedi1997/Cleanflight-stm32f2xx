/*
 * target.c
 *
 *  Created on: Jun 20, 2017
 *      Author: MEHEDI
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {

    DEF_TIM(TIM12, CH1, PB14, TIM_USE_PWM | TIM_USE_PPM,   TIMER_OUTPUT_NONE,     0), // S1_IN/PPM
    DEF_TIM(TIM12, CH2, PB15, TIM_USE_PWM,                 TIMER_OUTPUT_NONE,     0), // S2_IN
    DEF_TIM(TIM8,  CH1, PC6,  TIM_USE_PWM,                 TIMER_OUTPUT_NONE,     0), // S3_IN, UART6_TX
    DEF_TIM(TIM8,  CH2, PC7,  TIM_USE_PWM,                 TIMER_OUTPUT_NONE,     0), // S4_IN, UART6_RX
    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_PWM,                 TIMER_OUTPUT_NONE,     0), // S5_IN
    DEF_TIM(TIM8,  CH4, PC9,  TIM_USE_PWM,                 TIMER_OUTPUT_NONE,     0), // S6_IN

    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_MOTOR,               TIMER_OUTPUT_STANDARD, 0), // S1_OUT DMA1_Stream7
    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_MOTOR,               TIMER_OUTPUT_STANDARD, 0), // S2_OUT DMA1_Stream2
    DEF_TIM(TIM2,  CH4, PA3,  TIM_USE_MOTOR,               TIMER_OUTPUT_STANDARD, 1), // S3_OUT DMA1_Stream6
    DEF_TIM(TIM2,  CH3, PA2,  TIM_USE_MOTOR,               TIMER_OUTPUT_STANDARD, 0), // S4_OUT DMA1_Stream1

    DEF_TIM(TIM5,  CH2, PA1,  TIM_USE_MOTOR | TIM_USE_LED, TIMER_OUTPUT_STANDARD, 0), // S5_OUT
    DEF_TIM(TIM1,  CH1, PA8,  TIM_USE_MOTOR,               TIMER_OUTPUT_STANDARD, 0), // S6_OUT
};

