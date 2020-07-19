/**
 * Peripheral pins names.
 *
 * This code is based on the MBED file:
 * mbed-os/targets/TARGET_STM/TARGET_STM32F4/TARGET_STM32F401xE/TARGET_NUCLEO_F401RE/PeripheralNames.h
 */
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ADC_1 = (int)ADC1_BASE
} ADCName;

typedef enum {
    UART_1 = (int)USART1_BASE,
    UART_2 = (int)USART2_BASE,
    UART_6 = (int)USART6_BASE
} UARTName;

#define DEVICE_SPI_COUNT 4
typedef enum {
    SPI_1 = (int)SPI1_BASE,
    SPI_2 = (int)SPI2_BASE,
    SPI_3 = (int)SPI3_BASE,
    SPI_4 = (int)SPI4_BASE
} SPIName;

typedef enum {
    I2C_1 = (int)I2C1_BASE,
    I2C_2 = (int)I2C2_BASE,
    I2C_3 = (int)I2C3_BASE
} I2CName;

typedef enum {
    PWM_1 = (int)TIM1_BASE,
    PWM_2 = (int)TIM2_BASE,
    PWM_3 = (int)TIM3_BASE,
    PWM_4 = (int)TIM4_BASE,
    PWM_5 = (int)TIM5_BASE,
    PWM_9 = (int)TIM9_BASE,
    PWM_10 = (int)TIM10_BASE,
    PWM_11 = (int)TIM11_BASE
} PWMName;

typedef enum {
    USB_FS = (int)USB_OTG_FS_PERIPH_BASE
} USBName;

#ifdef __cplusplus
}
#endif

#endif
