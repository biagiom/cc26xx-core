/*
 * Copyright (c) 2015, Texas Instruments Incorporated
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

#ifndef Pins_Energia_h
#define Pins_Energia_h

#include <stdbool.h>
#include <stdint.h>

static const uint8_t RED_LED = 27;
static const uint8_t GREEN_LED = 31;
static const uint8_t BLUE_LED = 0;   /* no BLUE LED */
static const uint8_t YELLOW_LED = 0; /* no Yellow LED */
static const uint8_t PUSH1 = 25;
static const uint8_t PUSH2 = 30;

static const uint8_t A0 = 20;  // DIO_25 DP0
static const uint8_t A1 = 18;  // DIO_24 DP1
static const uint8_t A2 = 16;  // DIO_23 DP2
static const uint8_t A3 = 14;  // DIO_27 DP3
static const uint8_t A4 = 12;  // DIO_28 DP4/UART_RX
static const uint8_t A5 = 17;  // DIO_30 DP_ID
static const uint8_t A6 = 10;  // DIO_29 DP5/UART_TX

#endif
