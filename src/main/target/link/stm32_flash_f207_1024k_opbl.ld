/*
*stm32_flash_f207_1024k_opbl.ld
*Created on: Jul 16, 2017
*    Author: MEHEDI
*/
     
/*
*****************************************************************************
**
**  File        : stm32_flash.ld
**
**  Abstract    : Linker script for STM32F207x(?) Device with
**                1024KByte FLASH, 128KByte RAM
**
*****************************************************************************
*/

/* Entry Point */
ENTRY(Reset_Handler)

/*
0x08000000 to 0x080FFFFF 1024K full flash,
0x08000000 to 0x08003FFF   16K OPBL,
0x08004000 to 0x08007FFF   16K isr vector, startup code,
0x08008000 to 0x0800BFFF   16K config,                  // FLASH_Sector_2
0x0800C000 to 0x080FFFFF  976K firmware,
*/

/* Specify the memory areas. */
MEMORY
{
    FLASH (rx)        : ORIGIN = 0x08000000, LENGTH = 16K
    FLASH_CONFIG (r)  : ORIGIN = 0x08004000, LENGTH = 16K
    FLASH1 (rx)       : ORIGIN = 0x08008000, LENGTH = 992K
    
    FLASH (rx)      : ORIGIN = 0x08004000, LENGTH = 16K
    FLASH_CONFIG (r): ORIGIN = 0x08008000, LENGTH = 16K
    FLASH1 (rx)     : ORIGIN = 0x0800C000, LENGTH = 976K

    RAM (rwx)         : ORIGIN = 0x20000000, LENGTH = 128K
    BACKUP_SRAM (rwx) : ORIGIN = 0x40024000, LENGTH = 4K
    MEMORY_B1 (rx)    : ORIGIN = 0x60000000, LENGTH = 0K
}

REGION_ALIAS("STACKRAM", RAM)

INCLUDE "stm32_flash_split.ld"

