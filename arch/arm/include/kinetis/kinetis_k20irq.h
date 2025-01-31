/****************************************************************************
 * arch/arm/include/kinetis/kinetis_k20irq.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/* This file should never be included directly but, rather, only indirectly
 * through nuttx/irq.h
 */

#ifndef __ARCH_ARM_INCLUDE_KINETIS_KINETIS_K20IRQ_H
#define __ARCH_ARM_INCLUDE_KINETIS_KINETIS_K20IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Prototypes
 ****************************************************************************/

/* IRQ numbers.  The IRQ number corresponds vector number and hence map
 * directly to bits in the NVIC.  This does, however, waste several words of
 * memory in the IRQ to handle mapping tables.
 *
 * Processor Exceptions (vectors 0-15). These common definitions can be found
 * in the file nuttx/arch/arm/include/kinets/irq.h which includes this file
 *
 * External interrupts (vectors >= 16)
 *
 * K20 Family ***************************************************************
 *
 * The interrupt vectors  for the following parts is defined in Freescale
 * document K20P64M72SF1RM
 */

#define KINETIS_IRQ_DMACH0   (KINETIS_IRQ_FIRST + 0)   /* 0: DMA channel 0 transfer complete */
#define KINETIS_IRQ_DMACH1   (KINETIS_IRQ_FIRST + 1)   /* 1: DMA channel 1 transfer complete */
#define KINETIS_IRQ_DMACH2   (KINETIS_IRQ_FIRST + 2)   /* 2: DMA channel 2 transfer complete */
#define KINETIS_IRQ_DMACH3   (KINETIS_IRQ_FIRST + 3)   /* 3: DMA channel 3 transfer complete */
#define KINETIS_IRQ_DMACH4   (KINETIS_IRQ_FIRST + 4)   /* 4: DMA channel 4 transfer complete */
#define KINETIS_IRQ_DMACH5   (KINETIS_IRQ_FIRST + 5)   /* 5: DMA channel 5 transfer complete */
#define KINETIS_IRQ_DMACH6   (KINETIS_IRQ_FIRST + 6)   /* 6: DMA channel 6 transfer complete */
#define KINETIS_IRQ_DMACH7   (KINETIS_IRQ_FIRST + 7)   /* 7: DMA channel 7 transfer complete */
#define KINETIS_IRQ_DMACH8   (KINETIS_IRQ_FIRST + 8)   /* 8: DMA channel 8 transfer complete */
#define KINETIS_IRQ_DMACH9   (KINETIS_IRQ_FIRST + 9)   /* 9: DMA channel 9 transfer complete */
#define KINETIS_IRQ_DMACH10  (KINETIS_IRQ_FIRST + 10)  /* 10: DMA channel 10 transfer complete */
#define KINETIS_IRQ_DMACH11  (KINETIS_IRQ_FIRST + 11)  /* 11: DMA channel 11 transfer complete */
#define KINETIS_IRQ_DMACH12  (KINETIS_IRQ_FIRST + 12)  /* 12: DMA channel 12 transfer complete */
#define KINETIS_IRQ_DMACH13  (KINETIS_IRQ_FIRST + 13)  /* 13: DMA channel 13 transfer complete */
#define KINETIS_IRQ_DMACH14  (KINETIS_IRQ_FIRST + 14)  /* 14: DMA channel 14 transfer complete */
#define KINETIS_IRQ_DMACH15  (KINETIS_IRQ_FIRST + 15)  /* 15: DMA channel 15 transfer complete */
#define KINETIS_IRQ_DMAERR   (KINETIS_IRQ_FIRST + 16)  /* 16: DMA error interrupt channels 0-15 */
#define KINETIS_IRQ_RESVD17  (KINETIS_IRQ_FIRST + 17)  /* 17: Reserved */
#define KINETIS_IRQ_FLASHCC  (KINETIS_IRQ_FIRST + 18)  /* 18: Flash memory command complete */
#define KINETIS_IRQ_FLASHRC  (KINETIS_IRQ_FIRST + 19)  /* 19: Flash memory read collision */
#define KINETIS_IRQ_SMCLVD   (KINETIS_IRQ_FIRST + 20)  /* 20: Mode Controller low-voltage
                                                        *     detect, low-voltage warning */
#define KINETIS_IRQ_LLWU     (KINETIS_IRQ_FIRST + 21)  /* 21: LLWU Normal Low Leakage Wakeup */
#define KINETIS_IRQ_WDOG     (KINETIS_IRQ_FIRST + 22)  /* 22: Watchdog */
#define KINETIS_IRQ_RESVD23  (KINETIS_IRQ_FIRST + 23)  /* 23: Reserved */
#define KINETIS_IRQ_I2C0     (KINETIS_IRQ_FIRST + 24)  /* 24: I2C0 */
#define KINETIS_IRQ_I2C1     (KINETIS_IRQ_FIRST + 25)  /* 25: I2C1 */
#define KINETIS_IRQ_SPI0     (KINETIS_IRQ_FIRST + 26)  /* 26: SPI0 all sources */
#define KINETIS_IRQ_SPI1     (KINETIS_IRQ_FIRST + 27)  /* 27: SPI1 all sources */
#define KINETIS_IRQ_RESVD28  (KINETIS_IRQ_FIRST + 28)  /* 28: Reserved */
#define KINETIS_IRQ_CAN0MB   (KINETIS_IRQ_FIRST + 29)  /* 29: CAN0 OR'ed Message buffer (0-15) */
#define KINETIS_IRQ_CAN0BO   (KINETIS_IRQ_FIRST + 30)  /* 30: CAN0 Bus Off */
#define KINETIS_IRQ_CAN0ERR  (KINETIS_IRQ_FIRST + 31)  /* 31: CAN0 Error */
#define KINETIS_IRQ_CAN0TW   (KINETIS_IRQ_FIRST + 32)  /* 32: CAN0 Transmit Warning */
#define KINETIS_IRQ_CAN0RW   (KINETIS_IRQ_FIRST + 33)  /* 33: CAN0 Receive Warning */
#define KINETIS_IRQ_CAN0WU   (KINETIS_IRQ_FIRST + 34)  /* 34: CAN0 Wake UP */
#define KINETIS_IRQ_I2S0TX   (KINETIS_IRQ_FIRST + 35)  /* 35: I2S0 Transmit */
#define KINETIS_IRQ_I2S0TX   (KINETIS_IRQ_FIRST + 36)  /* 36: I2S0 Receive */
#define KINETIS_IRQ_RESVD37  (KINETIS_IRQ_FIRST + 37)  /* 37: Reserved */
#define KINETIS_IRQ_RESVD38  (KINETIS_IRQ_FIRST + 38)  /* 38: Reserved */
#define KINETIS_IRQ_RESVD39  (KINETIS_IRQ_FIRST + 39)  /* 39: Reserved */
#define KINETIS_IRQ_RESVD40  (KINETIS_IRQ_FIRST + 40)  /* 40: Reserved */
#define KINETIS_IRQ_RESVD41  (KINETIS_IRQ_FIRST + 41)  /* 41: Reserved */
#define KINETIS_IRQ_RESVD42  (KINETIS_IRQ_FIRST + 42)  /* 42: Reserved */
#define KINETIS_IRQ_RESVD43  (KINETIS_IRQ_FIRST + 43)  /* 43: Reserved */
#define KINETIS_IRQ_UART0L   (KINETIS_IRQ_FIRST + 44)  /* 44: UART0 LON */
#define KINETIS_IRQ_UART0S   (KINETIS_IRQ_FIRST + 45)  /* 45: UART0 status */
#define KINETIS_IRQ_UART0E   (KINETIS_IRQ_FIRST + 46)  /* 46: UART0 error */
#define KINETIS_IRQ_UART1S   (KINETIS_IRQ_FIRST + 47)  /* 47: UART1 status */
#define KINETIS_IRQ_UART1E   (KINETIS_IRQ_FIRST + 48)  /* 48: UART1 error */
#define KINETIS_IRQ_UART2S   (KINETIS_IRQ_FIRST + 49)  /* 49: UART2 status */
#define KINETIS_IRQ_UART2E   (KINETIS_IRQ_FIRST + 50)  /* 50: UART2 error */
#define KINETIS_IRQ_RESVD51  (KINETIS_IRQ_FIRST + 51)  /* 51: Reserved */
#define KINETIS_IRQ_RESVD52  (KINETIS_IRQ_FIRST + 52)  /* 52: Reserved */
#define KINETIS_IRQ_RESVD53  (KINETIS_IRQ_FIRST + 53)  /* 53: Reserved */
#define KINETIS_IRQ_RESVD54  (KINETIS_IRQ_FIRST + 54)  /* 54: Reserved */
#define KINETIS_IRQ_RESVD55  (KINETIS_IRQ_FIRST + 55)  /* 55: Reserved */
#define KINETIS_IRQ_RESVD56  (KINETIS_IRQ_FIRST + 56)  /* 56: Reserved */
#define KINETIS_IRQ_ADC0     (KINETIS_IRQ_FIRST + 57)  /* 57: ADC0 */
#define KINETIS_IRQ_ADC1     (KINETIS_IRQ_FIRST + 58)  /* 58: ADC1 */
#define KINETIS_IRQ_CMP0     (KINETIS_IRQ_FIRST + 59)  /* 59: CMP0 */
#define KINETIS_IRQ_CMP1     (KINETIS_IRQ_FIRST + 60)  /* 60: CMP1 */
#define KINETIS_IRQ_CMP2     (KINETIS_IRQ_FIRST + 61)  /* 61: CMP2 */
#define KINETIS_IRQ_FTM0     (KINETIS_IRQ_FIRST + 62)  /* 62: FTM0 all sources */
#define KINETIS_IRQ_FTM1     (KINETIS_IRQ_FIRST + 63)  /* 63: FTM1 all sources */
#define KINETIS_IRQ_FTM2     (KINETIS_IRQ_FIRST + 64)  /* 64: FTM2 all sources */
#define KINETIS_IRQ_CMT      (KINETIS_IRQ_FIRST + 65)  /* 65: CMT */
#define KINETIS_IRQ_RTC      (KINETIS_IRQ_FIRST + 66)  /* 66: RTC alarm interrupt */
#define KINETIS_IRQ_RTCS     (KINETIS_IRQ_FIRST + 67)  /* 67: RTC Seconds interrupt */
#define KINETIS_IRQ_PITCH0   (KINETIS_IRQ_FIRST + 68)  /* 68: PIT channel 0 */
#define KINETIS_IRQ_PITCH1   (KINETIS_IRQ_FIRST + 69)  /* 69: PIT channel 1 */
#define KINETIS_IRQ_PITCH2   (KINETIS_IRQ_FIRST + 70)  /* 70: PIT channel 2 */
#define KINETIS_IRQ_PITCH3   (KINETIS_IRQ_FIRST + 71)  /* 71: PIT channel 3 */
#define KINETIS_IRQ_PDB      (KINETIS_IRQ_FIRST + 72)  /* 72: PDB */
#define KINETIS_IRQ_USBOTG   (KINETIS_IRQ_FIRST + 73)  /* 73: USB OTG */
#define KINETIS_IRQ_USBCD    (KINETIS_IRQ_FIRST + 74)  /* 74: USB charger detect */
#define KINETIS_IRQ_RESVD75  (KINETIS_IRQ_FIRST + 75)  /* 75: Reserved */
#define KINETIS_IRQ_RESVD76  (KINETIS_IRQ_FIRST + 76)  /* 76: Reserved */
#define KINETIS_IRQ_RESVD77  (KINETIS_IRQ_FIRST + 77)  /* 77: Reserved */
#define KINETIS_IRQ_RESVD78  (KINETIS_IRQ_FIRST + 78)  /* 78: Reserved */
#define KINETIS_IRQ_RESVD79  (KINETIS_IRQ_FIRST + 79)  /* 79: Reserved */
#define KINETIS_IRQ_RESVD80  (KINETIS_IRQ_FIRST + 80)  /* 80: Reserved */
#define KINETIS_IRQ_DAC0     (KINETIS_IRQ_FIRST + 81)  /* 81: DAC0 */
#define KINETIS_IRQ_RESVD82  (KINETIS_IRQ_FIRST + 82)  /* 82: Reserved */
#define KINETIS_IRQ_TSI      (KINETIS_IRQ_FIRST + 83)  /* 83: TSI all sources */
#define KINETIS_IRQ_MCG      (KINETIS_IRQ_FIRST + 84)  /* 84: MCG */
#define KINETIS_IRQ_LPT      (KINETIS_IRQ_FIRST + 85)  /* 85: Low power timer */
#define KINETIS_IRQ_RESVD86  (KINETIS_IRQ_FIRST + 86)  /* 86: Reserved */
#define KINETIS_IRQ_PORTA    (KINETIS_IRQ_FIRST + 87)  /* 87: Pin detect port A */
#define KINETIS_IRQ_PORTB    (KINETIS_IRQ_FIRST + 88)  /* 88: Pin detect port B */
#define KINETIS_IRQ_PORTC    (KINETIS_IRQ_FIRST + 89)  /* 89: Pin detect port C */
#define KINETIS_IRQ_PORTD    (KINETIS_IRQ_FIRST + 90)  /* 90: Pin detect port D */
#define KINETIS_IRQ_PORTE    (KINETIS_IRQ_FIRST + 91)  /* 91: Pin detect port E */
#define KINETIS_IRQ_RESVD92  (KINETIS_IRQ_FIRST + 92)  /* 92: Reserved */
#define KINETIS_IRQ_RESVD93  (KINETIS_IRQ_FIRST + 93)  /* 93: Reserved */
#define KINETIS_IRQ_SWI      (KINETIS_IRQ_FIRST + 94)  /* 94: Software interrupt */

#define KINETIS_IRQ_NEXTINTS 95                        /* 95 Non core IRQs */

#define KINETIS_IRQ_NVECTORS (KINETIS_IRQ_FIRST + KINETIS_IRQ_NEXTINTS) /* 111 vectors */

/* EXTI interrupts (Do not use IRQ numbers) */

#define NR_IRQS              KINETIS_IRQ_NVECTORS

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions Prototypes
 ****************************************************************************/

#undef EXTERN
#ifdef __cplusplus
}
#endif
#endif

#endif /* __ARCH_ARM_INCLUDE_KINETIS_KINETIS_K20IRQ_H */
