/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       Board.h
 *
 *  @brief      CC2650 SimpleLink SENSORTAG Board Specific header file.
 *
 *  NB! This is the board file for PCB version 1.3
 *
 *  The CC2650 header file should be included in an application as follows:
 *  @code
 *  #include <Board.h>
 *  @endcode
 *
 *  ============================================================================
 */
#ifndef __BOARD_H__
#define __BOARD_H__

#include <ti/drivers/UART.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/SPI.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __TI_COMPILER_VERSION__
#undef gcc
#define gcc 1
#endif

/** ============================================================================
 *  Includes
 *  ==========================================================================*/
#include <ti/drivers/PIN.h>
#include <driverlib/ioc.h>

/** ============================================================================
 *  Externs
 *  ==========================================================================*/
extern const PIN_Config BoardGpioInitTable[];

/** ============================================================================
 *  Defines
 *  ==========================================================================*/

/* Symbol by generic Board.c to include the correct PCB  specific Board.c */
#define CC2650ST_0130

/* Identify as SensorTag */
#define CC2650ST_7ID

/* Same RF Configuration as 7x7 EM */
#define CC2650EM_7ID

/* This PCB version supports magnetometer */
#define FEATURE_MAGNETOMETER

/* External flash manufacturer and device ID */
#define EXT_FLASH_MAN_ID            0xEF
#define EXT_FLASH_DEV_ID            0x12

/* Mapping of pins to board signals using general board aliases
 *      <board signal alias>                <pin mapping>
 */

/* Discrete outputs */
#define Board_STK_LED1              IOID_10
#define Board_STK_LED2              IOID_15
#define Board_BUZZER                IOID_21
#define Board_LED_ON                1
#define Board_LED_OFF               0
#define Board_BUZZER_ON             1
#define Board_BUZZER_OFF            0

/* Discrete inputs */
#define Board_KEY_LEFT              IOID_0
#define Board_KEY_RIGHT             IOID_4
#define Board_RELAY                 IOID_3

/* Sensor outputs */
#define Board_MPU_INT               IOID_7
#define Board_TMP_RDY               IOID_1

/* I2C */
#define Board_I2C0_SDA0             IOID_5
#define Board_I2C0_SCL0             IOID_6
#define Board_I2C0_SDA1             IOID_8
#define Board_I2C0_SCL1             IOID_9

/* SPI */
#define Board_SPI_FLASH_CS          IOID_14
#define Board_SPI_DEVPK_CS          IOID_20
#define Board_FLASH_CS_ON           0
#define Board_FLASH_CS_OFF          1
#define Board_DEVPK_CS_ON           1
#define Board_DEVPK_CS_OFF          0

#define Board_SPI0_MISO             IOID_18
#define Board_SPI0_MOSI             IOID_19
#define Board_SPI0_CLK              IOID_17
#define Board_SPI0_CSN              PIN_UNASSIGNED
#define Board_SPI1_MISO             PIN_UNASSIGNED
#define Board_SPI1_MOSI             PIN_UNASSIGNED
#define Board_SPI1_CLK              PIN_UNASSIGNED
#define Board_SPI1_CSN              PIN_UNASSIGNED

/* UART when connected to SRF06EB */
#define Board_EB_UART_TX            IOID_16
#define Board_EB_UART_RX            IOID_17

/* Generic GPTimer instance identifiers */
#define Board_GPTIMER0A             CC2650STK_GPTIMER0A
#define Board_GPTIMER0B             CC2650STK_GPTIMER0B
#define Board_GPTIMER1A             CC2650STK_GPTIMER1A
#define Board_GPTIMER1B             CC2650STK_GPTIMER1B
#define Board_GPTIMER2A             CC2650STK_GPTIMER2A
#define Board_GPTIMER2B             CC2650STK_GPTIMER2B
#define Board_GPTIMER3A             CC2650STK_GPTIMER3A
#define Board_GPTIMER3B             CC2650STK_GPTIMER3B

/* Generic PWM instance identifiers */
#define Board_PWM0                  CC2650STK_PWM0
#define Board_PWM1                  CC2650STK_PWM1
#define Board_PWM2                  CC2650STK_PWM2
#define Board_PWM3                  CC2650STK_PWM3
#define Board_PWM4                  CC2650STK_PWM4
#define Board_PWM5                  CC2650STK_PWM5
#define Board_PWM6                  CC2650STK_PWM6
#define Board_PWM7                  CC2650STK_PWM7

/* PWM outputs */
#define Board_PWMPIN0                       PIN_UNASSIGNED
#define Board_PWMPIN1                       PIN_UNASSIGNED
#define Board_PWMPIN2                       PIN_UNASSIGNED
#define Board_PWMPIN3                       PIN_UNASSIGNED
#define Board_PWMPIN4                       PIN_UNASSIGNED
#define Board_PWMPIN5                       PIN_UNASSIGNED
#define Board_PWMPIN6                       PIN_UNASSIGNED
#define Board_PWMPIN7                       PIN_UNASSIGNED

/* Analog capable DIOs */
#define CC2650STK_DIO23_ANALOG          IOID_23
#define CC2650STK_DIO24_ANALOG          IOID_24
#define CC2650STK_DIO25_ANALOG          IOID_25
#define CC2650STK_DIO26_ANALOG          IOID_26
#define CC2650STK_DIO27_ANALOG          IOID_27
#define CC2650STK_DIO28_ANALOG          IOID_28
#define CC2650STK_DIO29_ANALOG          IOID_29
#define CC2650STK_DIO30_ANALOG          IOID_30

/* DevPack */
#define Board_AUDIOFS_TDO           IOID_16
#define Board_AUDIODO               IOID_22
#define Board_DP2                   IOID_23
#define Board_DP1                   IOID_24
#define Board_DP0                   IOID_25
#define Board_DP3                   IOID_27
#define Board_DP4_UARTRX            IOID_28
#define Board_DP5_UARTTX            IOID_29
#define Board_DEVPK_ID              IOID_30
#define Board_SPI_DEVPK_CS          IOID_20

/* Power control */
#define Board_MPU_POWER             IOID_12
#define Board_MPU_POWER_ON          1
#define Board_MPU_POWER_OFF         0

/* Audio */
#define Board_MIC_POWER             IOID_13
#define Board_MIC_POWER_ON          1
#define Board_MIC_POWER_OFF         0
#define Board_AUDIO_DI              IOID_2
#define Board_AUDIO_CLK             IOID_11

/* UART pins used by driver */
#define Board_UART_TX               Board_DP5_UARTTX
#define Board_UART_RX               Board_DP4_UARTRX

/** ============================================================================
 *  Instance identifiers
 *  ==========================================================================*/
/* Generic I2C instance identifiers */
#define Board_I2C                   CC2650STK_I2C0
/* Generic PDM instance identifiers */
#define Board_PDM                   CC2650STK_PDM0
/* Generic SPI instance identifiers */
#define Board_SPI0                  CC2650STK_SPI0
#define Board_SPI1                  CC2650STK_SPI1
/* Generic UART instance identifiers */
#define Board_UART                  CC2650STK_UART0
/* Generic PWM instance identifiers */
#define Board_PWM                   CC2650STK_PWM0


/** ============================================================================
 *  Number of peripherals and their names
 *  ==========================================================================*/

/*!
 *  @def    CC2650STK_ADCName
 *  @brief  Enum of ADCs
 */
typedef enum CC2650STK_ADCName {
    CC2650STK_ADC0 = 0,    // A0
    CC2650STK_ADC1,        // A1
    CC2650STK_ADC2,        // A2
    CC2650STK_ADC3,        // A3
    CC2650STK_ADC4,        // A4
    CC2650STK_ADC5,        // A5
    CC2650STK_ADC6,        // A6
    CC2650STK_ADC7,        // A7
    CC2650STK_ADCDCOUPL,
    CC2650STK_ADCVSS,
    CC2650STK_ADCVDDS,

    CC2650STK_ADCCOUNT
} CC2650STK_ADCName;

/*!
 *  @def    CC2650STK_I2CName
 *  @brief  Enum of I2C names on the CC2650 dev board
 */
typedef enum CC2650STK_I2CName {
    CC2650STK_I2C0 = 0,
    CC2650STK_I2C1,
    CC2650STK_I2CCOUNT
} CC2650STK_I2CName;

/*!
 *  @def    CC2650STK_CryptoName
 *  @brief  Enum of Crypto names on the CC2650 dev board
 */
typedef enum CC1350STK_CryptoName {
    CC1350STK_CRYPTO0 = 0,
    CC1350STK_CRYPTOCOUNT
} CC1350STK_CryptoName;

/*!
 *  @def    CC2650STK_PdmName
 *  @brief  Enum of PDM names on the CC2650 dev board
 */
typedef enum CC2650STK_PDMName {
    CC2650STK_PDM0 = 0,
    CC2650STK_PDMCOUNT
} CC2650STK_PDMName;

/*!
 *  @def    CC2650STK_SPIName
 *  @brief  Enum of SPI names on the CC2650 dev board
 */
typedef enum CC2650STK_SPIName {
    CC2650STK_SPI0 = 0,
    CC2650STK_SPI1,
    CC2650STK_SPICOUNT
} CC2650STK_SPIName;

/*!
 *  @def    CC2650STK_UARTName
 *  @brief  Enum of UARTs on the CC2650 dev board
 */
typedef enum CC2650STK_UARTName {
    CC2650STK_UART0 = 0,
    CC2650STK_UARTCOUNT
} CC2650STK_UARTName;

/*!
 *  @def    CC2650STK_UdmaName
 *  @brief  Enum of DMA buffers
 */
typedef enum CC2650STK_UdmaName {
    CC2650STK_UDMA0 = 0,
    CC2650STK_UDMACOUNT
} CC2650STK_UdmaName;

/*!
 *  @def    CC2650STK_GPTimerName
 *  @brief  Enum of GPTimer parts
 */
typedef enum CC1350STK_GPTimerName
{
    CC2650STK_GPTIMER0A = 0,
    CC2650STK_GPTIMER0B,
    CC2650STK_GPTIMER1A,
    CC2650STK_GPTIMER1B,
    CC2650STK_GPTIMER2A,
    CC2650STK_GPTIMER2B,
    CC2650STK_GPTIMER3A,
    CC2650STK_GPTIMER3B,
    CC2650STK_GPTIMERPARTSCOUNT
} CC2650STK_GPTimerName;

/*!
 *  @def    CC2650STK_GPTimers
 *  @brief  Enum of GPTimers
 */
typedef enum CC2650STK_GPTimers
{
    CC2650STK_GPTIMER0 = 0,
    CC2650STK_GPTIMER1,
    CC2650STK_GPTIMER2,
    CC2650STK_GPTIMER3,
    CC2650STK_GPTIMERCOUNT
} CC2650STK_GPTimers;

/*!
 *  @def    CC2650STK_PWMName
 *  @brief  Enum of PWM pin names on the CC2650 dev board
 */
typedef enum CC2650STK_PWMName {
    CC2650STK_PWM0 = 0, /* PWM output from TIMERA0 side A */
    CC2650STK_PWM1 = 1, /* PWM output from TIMERA0 side B */
    CC2650STK_PWM2 = 2, /* PWM output from TIMERA1 side A */
    CC2650STK_PWM3 = 3, /* PWM output from TIMERA1 side B */
    CC2650STK_PWM4 = 4, /* PWM output from TIMERA2 side A */
    CC2650STK_PWM5 = 5, /* PWM output from TIMERA2 side B */
    CC2650STK_PWM6 = 6, /* PWM output from TIMERA3 side A */
    CC2650STK_PWM7 = 7, /* PWM output from TIMERA3 side B */
    CC2650STK_PWMCOUNT
} CC2650STK_PWMName;

#ifdef __cplusplus
}
#endif

/* These #defines allow us to reuse TI-RTOS across other device families */
#define     Board_LED1              Board_STK_LED1
#define     Board_LED2              Board_STK_LED2
#define     Board_LED0              Board_LED2

#define     Board_BUTTON0           Board_KEY_LEFT
#define     Board_BUTTON1           Board_KEY_RIGHT

#define     Board_I2C0              Board_I2C
#define     Board_I2C_TMP           Board_I2C0
#define     Board_UART0             Board_UART
#define     Board_AES0              Board_AES
#define     Board_WATCHDOG0         Board_WATCHDOG

#define     Board_initGeneral()     PIN_init(BoardGpioInitTable)
#define     Board_initI2C()         I2C_init()
#define     Board_initSPI()         SPI_init()
#define     Board_initUART()        UART_init()
#define     Board_initWatchdog()    Watchdog_init()

/* Board specific I2C addresses */

/* Interface #0 */
#define     Board_HDC1000_ADDR      (0x40)  // (0x43)
#define     Board_TMP007_ADDR       (0x44)
#define     Board_OPT3001_ADDR      (0x45)
#define     Board_BMP280_ADDR       (0x77)

/* Interface #1 */
#define     Board_MPU9250_ADDR      (0x68)
#define     Board_MPU9250_MAG_ADDR  (0x0C)


#endif /* __BOARD_H__ */
