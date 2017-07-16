/*
 * target.h
 *
 *  Created on: JuL 13, 2017
 *      Author: MEHEDI
 */
#pragma once

#define TARGET_BOARD_IDENTIFIER "STF2"

#define USBD_PRODUCT_STRING "PORT207"

#define LED0                    PE8
#define LED1                    PE7
#define BEEPER                  PE9
#define BEEPER_INVERTED

#define ACC
#define USE_ACC_MPU6050
#define USE_FAKE_ACC
#define ACC_MPU6050_ALIGN        CW0_DEG

#define GYRO
#define USE_GYRO_MPU6050
#define USE_FAKE_GYRO
#define GYRO_MPU6050_ALIGN       CW0_DEG

#define MPU_I2C_INSTANCE (I2C_DEVICE)
// MPU6050 interrupts
//#define USE_EXTI
//#define MPU_INT_EXTI            PC4
//#define USE_MPU_DATA_READY_SIGNAL

#define MAG
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN       CW0_DEG
#define MAG_I2C_INSTANCE (I2C_DEVICE)

#define BARO
#define USE_BARO_BMP280
#define BARO_I2C_INSTANCE              (I2CDEV_2)
//#define USE_BARO_SPI_BMP280
//#define BMP280_SPI_INSTANCE     SPI3
//#define BMP280_CS_PIN           PB3

#define GPS

#define USE_VCP
#define VBUS_SENSING_PIN PC5

#define USE_UART
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2
//#define INVERTER_PIN_UART1      PC0

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define USE_SOFTSERIAL1
#define SOFTSERIAL1_TX_PIN		PD10
#define SOFTSERIAL1_RX_PIN		PD12
//#define USE_SOFTSERIAL2
//#define SOFTSERIAL2_TX_PIN		PE10
//#define SOFTSERIAL2_RX_PIN		PE9

#define SERIAL_PORT_COUNT       5//VCP, USART1, USART3, USART6, SOFTSERIAL x 1

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0 // PWM 1

#define USE_SPI
#define USE_SPI_DEVICE_1

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10 //NONE , shared with UART3TX
#define I2C2_SDA                PB11//NONE , shared with UART3RX
#define I2C_DEVICE              (I2CDEV_2)
#define OLED_I2C_INSTANCE       (I2CDEV_3)



#define USE_ADC
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2

//#define RSSI_ADC_PIN          PA0

#define SONAR
#define USE_EXTI
#define SONAR_TRIGGER_PIN       PE14
#define SONAR_ECHO_PIN          PE15
//#define USE_SONAR_HCSR04

#define SPEKTRUM_BIND_PIN       UART1_RX_PIN

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define USE_CLI

#define TARGET_IO_PORTA (0xffff & ~(BIT(14)|BIT(13)))
#define TARGET_IO_PORTB (0xffff & ~(BIT(2)))
#define TARGET_IO_PORTC (0xffff & ~(BIT(15)|BIT(14)|BIT(13)))
#define TARGET_IO_PORTD (0xffff)
#define TARGET_IO_PORTE (0xffff)

#define USABLE_TIMER_CHANNEL_COUNT 12

#define USED_TIMERS ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(5) | TIM_N(12) | TIM_N(8) | TIM_N(9))
