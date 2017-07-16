/*
 * gpio_stm32f207xx.c
 *
 *  Created on: JuL 14, 2017
 *      Author: MEHEDI
 */

#include <stdbool.h>
#include <stdint.h>

#include "platform.h"

#include "build/build_config.h"

#include "drivers/gpio.h"

#define MODE_OFFSET 0
#define PUPD_OFFSET 2
#define OUTPUT_OFFSET 4

#define MODE_MASK ((1|2))
#define PUPD_MASK ((1|2))
#define OUTPUT_MASK ((1|2))

//#define GPIO_Speed_10MHz GPIO_Speed_Level_1   Fast Speed:10MHz
//#define GPIO_Speed_2MHz  GPIO_Speed_Level_2   Medium Speed:2MHz
//#define GPIO_Speed_50MHz GPIO_Speed_Level_3   High Speed:50MHz
#define    GPIO_Low_Speed      GPIO_Speed_25MHz
#define   GPIO_Medium_Speed  GPIO_Speed_25MHz
#define   GPIO_Fast_Speed  GPIO_Speed_50MHz
#define  GPIO_High_Speed  GPIO_Speed_100MHz


void gpioInit(GPIO_TypeDef *gpio, gpio_config_t *config)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    uint32_t pinIndex;
    for (pinIndex = 0; pinIndex < 16; pinIndex++) {
        // are we doing this pin?
        uint32_t pinMask = (0x1 << pinIndex);
        if (config->pin & pinMask) {

            GPIO_InitStructure.GPIO_Pin =  pinMask;
            GPIO_InitStructure.GPIO_Mode = (config->mode >> MODE_OFFSET) & MODE_MASK;

            GPIOSpeed_TypeDef speed = GPIO_Medium_Speed;
            switch (config->speed) {
                case Speed_10MHz:
                    speed = GPIO_Medium_Speed;
                    break;
                case Speed_2MHz:
                    speed = GPIO_Low_Speed;
                    break;
                case Speed_50MHz:
                    speed = GPIO_Fast_Speed;
                    break;
            }

            GPIO_InitStructure.GPIO_Speed = speed;
            GPIO_InitStructure.GPIO_OType = (config->mode >> OUTPUT_OFFSET) & OUTPUT_MASK;
            GPIO_InitStructure.GPIO_PuPd = (config->mode >> PUPD_OFFSET) & PUPD_MASK;
            GPIO_Init(gpio, &GPIO_InitStructure);
        }
    }
}

void gpioExtiLineConfig(uint8_t portsrc, uint8_t pinsrc)
{
    SYSCFG_EXTILineConfig(portsrc, pinsrc);
}
