/*
*****************************************************************************
**
**  File        : stm32_flash.ld
**
**  Abstract    : Linker script for STM32F207VC Device with
**                256KByte FLASH, 128KByte RAM
**
*****************************************************************************
*/

/* Entry Point */
ENTRY(Reset_Handler)

/*
0x08000000 to 0x08040000  256K full flash,
0x08000000 to 0x08003FFF   16K isr vector, startup code,
0x08004000 to 0x08007FFF   16K config,         // FLASH_Sector_1
0x08008000 to 0x08040000  224K firmware,
*/

/* Specify the memory areas. */
MEMORY
{
    FLASH (rx)        : ORIGIN = 0x08000000, LENGTH = 16K
    FLASH_CONFIG (r)  : ORIGIN = 0x08004000, LENGTH = 16K
    FLASH1 (rx)       : ORIGIN = 0x08008000, LENGTH = 480K

    RAM (rwx)         : ORIGIN = 0x20000000, LENGTH = 128K
    BACKUP_SRAM (rwx) : ORIGIN = 0x40024000, LENGTH = 4K
    MEMORY_B1 (rx)    : ORIGIN = 0x60000000, LENGTH = 0K
}

REGION_ALIAS("STACKRAM", RAM)

INCLUDE "stm32_flash_split.ld"
