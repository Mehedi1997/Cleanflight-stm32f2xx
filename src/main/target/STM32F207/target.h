/*
 * This is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "nnn"



#define USBD_PRODUCT_STRING "CF-F2"


//#define TARGET_BOARD_IDENTIFIER "XXXX"

#define LED0                    PE8
#define LED1                    PE7
#define BEEPER                  PB4
#define BEEPER_INVERTED

//#define INVERTER_PIN_UART1      PC0
#define ACC
#define USE_FAKE_GYRO
//#define USE_ACC_MPU6050

#define GYRO
#define USE_FAKE_ACC

//#define USE_GYRO_MPU6050
//#define GYRO_MPU6050_ALIGN       CW0_DEG
//#define ACC_MPU6050_ALIGN        CW0_DEG

// MPU6050 interrupts
//#define USE_EXTI
//#define MPU_INT_EXTI            PC4
//#define USE_MPU_DATA_READY_SIGNAL

//#define MAG
//#define USE_MAG_HMC5883
//#define MAG_HMC5883_ALIGN       CW0_DEG

#define BARO
#define USE_BARO_BMP280
//#define USE_BARO_SPI_BMP280
//#define BMP280_SPI_INSTANCE     SPI3
//#define BMP280_CS_PIN           PB3 // v1


#define USE_VCP
#define VBUS_SENSING_PIN PC5
#define USE_UART
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define USE_CLI

#define USE_SOFTSERIAL1
#define SOFTSERIAL1_TX_PIN		PD10
#define SOFTSERIAL1_RX_PIN		PD12
#define USE_SOFTSERIAL2
//#define SOFTSERIAL2_TX_PIN		PE10
//#define SOFTSERIAL2_RX_PIN		PE9

#define SERIAL_PORT_COUNT       6//VCP, USART1, USART3, USART6, SOFTSERIAL x 2

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0 // PWM 1

#define USE_SPI
#define USE_SPI_DEVICE_1

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                NONE // PB10, shared with UART3TX
#define I2C2_SDA                NONE // PB11, shared with UART3RX
#define I2C_DEVICE              (I2CDEV_2)
#define OLED_I2C_INSTANCE              (I2CDEV_3)

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2

//#define RSSI_ADC_PIN          PA0

//#define AVOID_UART1_FOR_PWM_PPM
#define SPEKTRUM_BIND_PIN       UART1_RX_PIN

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA (0xffff & ~(BIT(14)|BIT(13)))
#define TARGET_IO_PORTB (0xffff & ~(BIT(2)))
#define TARGET_IO_PORTC (0xffff & ~(BIT(15)|BIT(14)|BIT(13)))
#define TARGET_IO_PORTD (0xffff)
#define TARGET_IO_PORTE (0xffff)

#define USABLE_TIMER_CHANNEL_COUNT 12

#define USED_TIMERS ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(5) | TIM_N(12) | TIM_N(8) | TIM_N(9))
