/**
 * Flash memory information.
 *
 * This code is based on the MBED file:
 * mbed-os/targets/TARGET_STM/TARGET_STM32F4/TARGET_STM32F401xE/flash_data.h
 */
#ifndef MBED_FLASH_DATA_H
#define MBED_FLASH_DATA_H

#include "device.h"
#include <stdint.h>

#if DEVICE_FLASH

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* FLASH SIZE */
#define FLASH_SIZE (uint32_t)0x40000 // 256 KB

/* Base address of the Flash sectors Bank 1 */
#define ADDR_FLASH_SECTOR_0 ((uint32_t)0x08000000) /* Base @ of Sector 0, 16 Kbytes */
#define ADDR_FLASH_SECTOR_1 ((uint32_t)0x08004000) /* Base @ of Sector 1, 16 Kbytes */
#define ADDR_FLASH_SECTOR_2 ((uint32_t)0x08008000) /* Base @ of Sector 2, 16 Kbytes */
#define ADDR_FLASH_SECTOR_3 ((uint32_t)0x0800C000) /* Base @ of Sector 3, 16 Kbytes */
#define ADDR_FLASH_SECTOR_4 ((uint32_t)0x08010000) /* Base @ of Sector 4, 64 Kbytes */
#define ADDR_FLASH_SECTOR_5 ((uint32_t)0x08020000) /* Base @ of Sector 5, 128 Kbytes */

#endif
#endif
