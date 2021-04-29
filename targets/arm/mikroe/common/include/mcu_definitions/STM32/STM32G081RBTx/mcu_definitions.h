/****************************************************************************
**
** Copyright (C) 2021 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

//ADC
#define ADC1_PA0_CH0
#define ADC1_PA1_CH1
#define ADC1_PA2_CH2
#define ADC1_PA3_CH3
#define ADC1_PA4_CH4
#define ADC1_PA5_CH5
#define ADC1_PA6_CH6
#define ADC1_PA7_CH7
#define ADC1_PB0_CH8
#define ADC1_PB1_CH9
#define ADC1_PB10_CH11
#define ADC1_PB12_CH16
#define ADC1_PB2_CH10
#define ADC1_PC4_CH17
#define ADC1_PC5_CH18

#define ADC_MODULE_1 1

#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_PA9_AF6
#define I2C1_SCL_PB6_AF6
#define I2C1_SCL_PB8_AF6
#define I2C1_SDA_PA10_AF6
#define I2C1_SDA_PB7_AF6
#define I2C1_SDA_PB9_AF6
#define I2C2_SCL_PB10_AF6
#define I2C2_SCL_PB13_AF6
#define I2C2_SDA_PB11_AF6
#define I2C2_SDA_PB14_AF6

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2
//EOF I2C

//UART

//EOF UART

//USART
#define UART1_RX_PA10_AF1
#define UART1_RX_PB7_AF0
#define UART1_RX_PC5_AF1
#define UART1_TX_PA9_AF1
#define UART1_TX_PB6_AF0
#define UART1_TX_PC4_AF1
#define UART2_RX_PA15_AF1
#define UART2_RX_PA3_AF1
#define UART2_RX_PD6_AF0
#define UART2_TX_PA14_AF1
#define UART2_TX_PA2_AF1
#define UART2_TX_PD5_AF0
#define UART3_RX_PB0_AF4
#define UART3_RX_PB11_AF4
#define UART3_RX_PB9_AF4
#define UART3_RX_PC11_AF0
#define UART3_RX_PC5_AF0
#define UART3_RX_PD9_AF0
#define UART3_TX_PA5_AF4
#define UART3_TX_PB10_AF4
#define UART3_TX_PB2_AF4
#define UART3_TX_PB8_AF4
#define UART3_TX_PC10_AF0
#define UART3_TX_PC4_AF0
#define UART3_TX_PD8_AF0
#define UART4_RX_PA1_AF4
#define UART4_RX_PC11_AF1
#define UART4_TX_PA0_AF4
#define UART4_TX_PC10_AF1

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4

#define UART_MODULE_COUNT 4
//EOF USART

//SPI
#define SPI1_MISO_PA6_AF0
#define SPI1_MISO_PB4_AF0
#define SPI1_MISO_PD5_AF1
#define SPI1_MOSI_PA2_AF0
#define SPI1_MOSI_PA7_AF0
#define SPI1_MOSI_PB5_AF0
#define SPI1_MOSI_PD6_AF1
#define SPI1_SCK_PA1_AF0
#define SPI1_SCK_PA5_AF0
#define SPI1_SCK_PB3_AF0
#define SPI1_SCK_PD8_AF1
#define SPI2_MISO_PA3_AF0
#define SPI2_MISO_PA9_AF4
#define SPI2_MISO_PB14_AF0
#define SPI2_MISO_PB2_AF1
#define SPI2_MISO_PB6_AF4
#define SPI2_MISO_PC2_AF1
#define SPI2_MISO_PD3_AF1
#define SPI2_MOSI_PA10_AF0
#define SPI2_MOSI_PA4_AF1
#define SPI2_MOSI_PB11_AF0
#define SPI2_MOSI_PB15_AF0
#define SPI2_MOSI_PB7_AF1
#define SPI2_MOSI_PC3_AF1
#define SPI2_MOSI_PD4_AF1
#define SPI2_SCK_PA0_AF0
#define SPI2_SCK_PB10_AF5
#define SPI2_SCK_PB13_AF0
#define SPI2_SCK_PB8_AF1
#define SPI2_SCK_PD1_AF1

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2

#define SPI_MODULE_COUNT 2
//EOF SPI

//TIM
#define TIM1_BK_PA6_AF2
#define TIM1_BK_PB12_AF2
#define TIM1_BK_PC13_AF2
#define TIM1_BK_PD5_AF2
#define TIM1_BK2_PC14_AF2
#define TIM1_BK2_PD9_AF2
#define TIM1_CH1_PA8_AF2
#define TIM1_CH1_PC8_AF2
#define TIM1_CH1N_PA7_AF2
#define TIM1_CH1N_PB13_AF2
#define TIM1_CH1N_PD2_AF2
#define TIM1_CH2_PA9_AF2
#define TIM1_CH2_PB3_AF1
#define TIM1_CH2_PC9_AF2
#define TIM1_CH2N_PB0_AF2
#define TIM1_CH2N_PB14_AF2
#define TIM1_CH2N_PD3_AF2
#define TIM1_CH3_PA10_AF2
#define TIM1_CH3_PB6_AF1
#define TIM1_CH3_PC10_AF2
#define TIM1_CH3N_PB1_AF2
#define TIM1_CH3N_PB15_AF2
#define TIM1_CH3N_PD4_AF2
#define TIM1_CH4_PC11_AF2
#define TIM14_CH1_PA4_AF4
#define TIM14_CH1_PA7_AF4
#define TIM14_CH1_PB1_AF0
#define TIM14_CH1_PC12_AF2
#define TIM14_CH1_PF0_AF2
#define TIM15_BK_PA9_AF5
#define TIM15_BK_PB12_AF5
#define TIM15_BK_PB8_AF5
#define TIM15_BK_PC15_AF2
#define TIM15_CH1_PA2_AF5
#define TIM15_CH1_PB14_AF5
#define TIM15_CH1_PC1_AF2
#define TIM15_CH1N_PA1_AF5
#define TIM15_CH1N_PB13_AF5
#define TIM15_CH1N_PB15_AF4
#define TIM15_CH1N_PF1_AF2
#define TIM15_CH2_PA3_AF5
#define TIM15_CH2_PB15_AF5
#define TIM15_CH2_PC2_AF2
#define TIM16_BK_PB5_AF2
#define TIM16_CH1_PA6_AF5
#define TIM16_CH1_PB8_AF2
#define TIM16_CH1_PD0_AF2
#define TIM16_CH1N_PB6_AF2
#define TIM17_BK_PA10_AF5
#define TIM17_BK_PB4_AF5
#define TIM17_CH1_PA7_AF5
#define TIM17_CH1_PB9_AF2
#define TIM17_CH1_PD1_AF2
#define TIM17_CH1N_PB7_AF2
#define TIM2_CH1_PA0_AF2
#define TIM2_CH1_PA15_AF2
#define TIM2_CH1_PA5_AF2
#define TIM2_CH1_PC4_AF2
#define TIM2_CH2_PA1_AF2
#define TIM2_CH2_PB3_AF2
#define TIM2_CH2_PC5_AF2
#define TIM2_CH3_PA2_AF2
#define TIM2_CH3_PB10_AF2
#define TIM2_CH3_PC6_AF2
#define TIM2_CH4_PA3_AF2
#define TIM2_CH4_PB11_AF2
#define TIM2_CH4_PC7_AF2
#define TIM2_ETR_PA0_AF2
#define TIM2_ETR_PA15_AF2
#define TIM2_ETR_PA5_AF2
#define TIM2_ETR_PC4_AF2
#define TIM3_CH1_PA6_AF1
#define TIM3_CH1_PB4_AF1
#define TIM3_CH1_PC6_AF1
#define TIM3_CH2_PA7_AF1
#define TIM3_CH2_PB5_AF1
#define TIM3_CH2_PC7_AF1
#define TIM3_CH3_PB0_AF1
#define TIM3_CH3_PC8_AF1
#define TIM3_CH4_PB1_AF1
#define TIM3_CH4_PC9_AF1
#define TIM3_ETR_PD2_AF1

#define TIM1_BUS 2
#define TIM14_BUS 2
#define TIM15_BUS 2
#define TIM16_BUS 2
#define TIM17_BUS 2
#define TIM2_BUS 1
#define TIM3_BUS 1

#define TIM_MODULE_1 1
#define TIM_MODULE_14 4
#define TIM_MODULE_15 5
#define TIM_MODULE_16 6
#define TIM_MODULE_17 7
#define TIM_MODULE_2 2
#define TIM_MODULE_3 3

#define TIM_MODULE_COUNT 7
//EOF TIM

//GPIO
#define __PF2_CN
#define __PF1_CN
#define __PF0_CN
#define __PD9_CN
#define __PD8_CN
#define __PD6_CN
#define __PD5_CN
#define __PD4_CN
#define __PD3_CN
#define __PD2_CN
#define __PD1_CN
#define __PD0_CN
#define __PC9_CN
#define __PC8_CN
#define __PC7_CN
#define __PC6_CN
#define __PC5_CN
#define __PC4_CN
#define __PC3_CN
#define __PC2_CN
#define __PC15_CN
#define __PC14_CN
#define __PC13_CN
#define __PC12_CN
#define __PC11_CN
#define __PC10_CN
#define __PC1_CN
#define __PC0_CN
#define __PB9_CN
#define __PB8_CN
#define __PB7_CN
#define __PB6_CN
#define __PB5_CN
#define __PB4_CN
#define __PB3_CN
#define __PB2_CN
#define __PB15_CN
#define __PB14_CN
#define __PB13_CN
#define __PB12_CN
#define __PB11_CN
#define __PB10_CN
#define __PB1_CN
#define __PB0_CN
#define __PA9_CN
#define __PA9_CN
#define __PA8_CN
#define __PA7_CN
#define __PA6_CN
#define __PA5_CN
#define __PA4_CN
#define __PA3_CN
#define __PA2_CN
#define __PA15_CN
#define __PA14_CN
#define __PA13_CN
#define __PA12_CN
#define __PA11_CN
#define __PA10_CN
#define __PA10_CN
#define __PA1_CN
#define __PA0_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_F_CN

#define PORT_SIZE (16)
#define PORT_COUNT (5)
//EOF GPIO

//IVT_TABLE
#define UART1_NVIC   43
#define UART2_NVIC   44
#define UART3_4_LPUART1_NVIC  45
//EOF IVT_TABLE


#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
