/****************************************************************************
**
** Copyright (C) 2022 MikroElektronika d.o.o.
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
#define HAL_LL_RA0_AN0_ANCON1_BIT 0
#define HAL_LL_RA0_AN0_ANCON1 0
#define HAL_LL_RA1_AN1_ANCON1_BIT 1
#define HAL_LL_RA1_AN1_ANCON1 1
#define HAL_LL_RA2_AN2_ANCON1_BIT 2
#define HAL_LL_RA2_AN2_ANCON1 2
#define HAL_LL_RA3_AN3_ANCON1_BIT 3
#define HAL_LL_RA3_AN3_ANCON1 3
#define HAL_LL_RA4_AN6_ANCON1_BIT 4
#define HAL_LL_RA4_AN6_ANCON1 6
#define HAL_LL_RA5_AN4_ANCON1_BIT 5
#define HAL_LL_RA5_AN4_ANCON1 4
#define HAL_LL_RC2_AN9_ANCON2_BIT 1
#define HAL_LL_RC2_AN9_ANCON2 9
#define HAL_LL_RF2_AN7_ANCON1_BIT 6
#define HAL_LL_RF2_AN7_ANCON1 7
#define HAL_LL_RF5_AN10_ANCON2_BIT 1
#define HAL_LL_RF5_AN10_ANCON2 10
#define HAL_LL_RF6_AN11_ANCON2_BIT 2
#define HAL_LL_RF6_AN11_ANCON2 11
#define HAL_LL_RF7_AN5_ANCON1_BIT 5
#define HAL_LL_RF7_AN5_ANCON1 5
#define HAL_LL_RG0_AN8_ANCON2_BIT 0
#define HAL_LL_RG0_AN8_ANCON2 8
#define HAL_LL_RG1_AN19_ANCON3_BIT 3
#define HAL_LL_RG1_AN19_ANCON3 19
#define HAL_LL_RG2_AN18_ANCON3_BIT 2
#define HAL_LL_RG2_AN18_ANCON3 18
#define HAL_LL_RG3_AN17_ANCON3_BIT 1
#define HAL_LL_RG3_AN17_ANCON3 17
#define HAL_LL_RG4_AN16_ANCON2_BIT 7
#define HAL_LL_RG4_AN16_ANCON2 16


#define HAL_LL_ADCBUF0_ADDRESS 0xFC2U
#define HAL_LL_ANCON3_ADDRESS 0xE45U
#define HAL_LL_ANCON2_ADDRESS 0xE46U
#define HAL_LL_ANCON1_ADDRESS 0xE47U
#define HAL_LL_ADCSS0H_ADDRESS 0xE83U
#define HAL_LL_ADCON5L_ADDRESS 0xE88U
#define HAL_LL_ADCON5H_ADDRESS 0xE89U
#define HAL_LL_ADCON3L_ADDRESS 0xE8AU
#define HAL_LL_ADCON3H_ADDRESS 0xE8BU
#define HAL_LL_ADCON2L_ADDRESS 0xE8CU
#define HAL_LL_ADCON2H_ADDRESS 0xE8DU
#define HAL_LL_ADCON1L_ADDRESS 0xFC0U
#define HAL_LL_ADCON1H_ADDRESS 0xFC1U
#define HAL_LL_ADCHS0L_ADDRESS 0xE86U

#define HAL_LL_AN_COUNT 16
#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_RC3
#define I2C1_SDA_RC4
#define I2C2_SCL_RD6
#define I2C2_SDA_RD5


#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2

#define HAL_LL_I2C_PPS_ENABLED false
//EOF I2C

// UART
#define UART1_TX_RA2
#define UART1_TX_RA6
#define UART1_TX_RA7
#define UART1_TX_RB2
#define UART1_TX_RC6
#define UART1_TX_RD2
#define UART1_TX_RD6
#define UART1_TX_RE2
#define UART1_TX_RE6
#define UART1_TX_RF7
#define UART1_TX_RG2
#define UART2_TX_RA3
#define UART2_TX_RB3
#define UART2_TX_RC2
#define UART2_TX_RC3
#define UART2_TX_RC7
#define UART2_TX_RD3
#define UART2_TX_RD7
#define UART2_TX_RE7
#define UART2_TX_RF5
#define UART2_TX_RG1
#define UART2_TX_RG3
#define UART3_TX_RA1
#define UART3_TX_RA5
#define UART3_TX_RB1
#define UART3_TX_RB5
#define UART3_TX_RC4
#define UART3_TX_RD1
#define UART3_TX_RD5
#define UART3_TX_RE1
#define UART3_TX_RE3
#define UART3_TX_RE5
#define UART4_TX_RA1
#define UART4_TX_RA5
#define UART4_TX_RB1
#define UART4_TX_RB5
#define UART4_TX_RC4
#define UART4_TX_RD1
#define UART4_TX_RD5
#define UART4_TX_RE1
#define UART4_TX_RE3
#define UART4_TX_RE5

#define UART1_RX_RA3
#define UART1_RX_RB3
#define UART1_RX_RC2
#define UART1_RX_RC3
#define UART1_RX_RC7
#define UART1_RX_RD3
#define UART1_RX_RD7
#define UART1_RX_RE7
#define UART1_RX_RF5
#define UART1_RX_RG1
#define UART1_RX_RG3
#define UART2_RX_RA2
#define UART2_RX_RA6
#define UART2_RX_RA7
#define UART2_RX_RB2
#define UART2_RX_RC6
#define UART2_RX_RD2
#define UART2_RX_RD6
#define UART2_RX_RE2
#define UART2_RX_RE6
#define UART2_RX_RF7
#define UART2_RX_RG2
#define UART3_RX_RA0
#define UART3_RX_RA4
#define UART3_RX_RB0
#define UART3_RX_RB4
#define UART3_RX_RC5
#define UART3_RX_RD0
#define UART3_RX_RD4
#define UART3_RX_RE0
#define UART3_RX_RE4
#define UART3_RX_RF2
#define UART3_RX_RF6
#define UART3_RX_RG4
#define UART4_RX_RA0
#define UART4_RX_RA4
#define UART4_RX_RB0
#define UART4_RX_RB4
#define UART4_RX_RC5
#define UART4_RX_RD0
#define UART4_RX_RD4
#define UART4_RX_RE0
#define UART4_RX_RE4
#define UART4_RX_RF2
#define UART4_RX_RF6
#define UART4_RX_RG4


#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4

#define UART_MODULE_COUNT 4

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

// SPI
#define SPI1_MISO_RA0
#define SPI1_MISO_RA4
#define SPI1_MISO_RB0
#define SPI1_MISO_RB4
#define SPI1_MISO_RC5
#define SPI1_MISO_RD0
#define SPI1_MISO_RD4
#define SPI1_MISO_RE0
#define SPI1_MISO_RE4
#define SPI1_MISO_RF2
#define SPI1_MISO_RF6
#define SPI1_MISO_RG4
#define SPI1_MOSI_RA1
#define SPI1_MOSI_RA5
#define SPI1_MOSI_RB1
#define SPI1_MOSI_RB5
#define SPI1_MOSI_RC4
#define SPI1_MOSI_RD1
#define SPI1_MOSI_RD5
#define SPI1_MOSI_RE1
#define SPI1_MOSI_RE3
#define SPI1_MOSI_RE5
#define SPI1_SCK_RA3
#define SPI1_SCK_RB3
#define SPI1_SCK_RC2
#define SPI1_SCK_RC3
#define SPI1_SCK_RC7
#define SPI1_SCK_RD3
#define SPI1_SCK_RD7
#define SPI1_SCK_RE7
#define SPI1_SCK_RF5
#define SPI1_SCK_RG1
#define SPI1_SCK_RG3

#define SPI2_MISO_RA1
#define SPI2_MISO_RA5
#define SPI2_MISO_RB1
#define SPI2_MISO_RB5
#define SPI2_MISO_RC4
#define SPI2_MISO_RD1
#define SPI2_MISO_RD5
#define SPI2_MISO_RE1
#define SPI2_MISO_RE3
#define SPI2_MISO_RE5
#define SPI2_MOSI_RA0
#define SPI2_MOSI_RA4
#define SPI2_MOSI_RB0
#define SPI2_MOSI_RB4
#define SPI2_MOSI_RC5
#define SPI2_MOSI_RD0
#define SPI2_MOSI_RD4
#define SPI2_MOSI_RE0
#define SPI2_MOSI_RE4
#define SPI2_MOSI_RF2
#define SPI2_MOSI_RF6
#define SPI2_MOSI_RG4
#define SPI2_SCK_RA2
#define SPI2_SCK_RA6
#define SPI2_SCK_RA7
#define SPI2_SCK_RB2
#define SPI2_SCK_RC6
#define SPI2_SCK_RD2
#define SPI2_SCK_RD6
#define SPI2_SCK_RE2
#define SPI2_SCK_RE6
#define SPI2_SCK_RF7
#define SPI2_SCK_RG2


#define SPI_MODULE_1 1
#define SPI_MODULE_2 2

#define SPI_MODULE_COUNT 2

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

// PWM
#define PWM_CCP1_RA3
#define PWM_CCP1_RB3
#define PWM_CCP1_RC2
#define PWM_CCP1_RC3
#define PWM_CCP1_RC7
#define PWM_CCP1_RD3
#define PWM_CCP1_RD7
#define PWM_CCP1_RE7
#define PWM_CCP1_RF5
#define PWM_CCP1_RG1
#define PWM_CCP1_RG3
#define PWM_CCP2_RA3
#define PWM_CCP2_RB3
#define PWM_CCP2_RC2
#define PWM_CCP2_RC3
#define PWM_CCP2_RC7
#define PWM_CCP2_RD3
#define PWM_CCP2_RD7
#define PWM_CCP2_RE7
#define PWM_CCP2_RF5
#define PWM_CCP2_RG1
#define PWM_CCP2_RG3
#define PWM_CCP3_RA2
#define PWM_CCP3_RA6
#define PWM_CCP3_RA7
#define PWM_CCP3_RB2
#define PWM_CCP3_RC6
#define PWM_CCP3_RD2
#define PWM_CCP3_RD6
#define PWM_CCP3_RE2
#define PWM_CCP3_RE6
#define PWM_CCP3_RF7
#define PWM_CCP3_RG2
#define PWM_CCP4_RA3
#define PWM_CCP4_RB3
#define PWM_CCP4_RC2
#define PWM_CCP4_RC3
#define PWM_CCP4_RC7
#define PWM_CCP4_RD3
#define PWM_CCP4_RD7
#define PWM_CCP4_RE7
#define PWM_CCP4_RF5
#define PWM_CCP4_RG1
#define PWM_CCP4_RG3
#define PWM_CCP5_RA0
#define PWM_CCP5_RA4
#define PWM_CCP5_RB0
#define PWM_CCP5_RB4
#define PWM_CCP5_RC5
#define PWM_CCP5_RD0
#define PWM_CCP5_RD4
#define PWM_CCP5_RE0
#define PWM_CCP5_RE4
#define PWM_CCP5_RF2
#define PWM_CCP5_RF6
#define PWM_CCP5_RG4
#define PWM_CCP6_RA2
#define PWM_CCP6_RA7
#define PWM_CCP6_RA6
#define PWM_CCP6_RB2
#define PWM_CCP6_RC6
#define PWM_CCP6_RD2
#define PWM_CCP6_RD6
#define PWM_CCP6_RE2
#define PWM_CCP6_RE6
#define PWM_CCP6_RF7
#define PWM_CCP6_RG2
#define PWM_CCP7_RA1
#define PWM_CCP7_RA5
#define PWM_CCP7_RB1
#define PWM_CCP7_RB5
#define PWM_CCP7_RC4
#define PWM_CCP7_RD1
#define PWM_CCP7_RD5
#define PWM_CCP7_RE1
#define PWM_CCP7_RE3
#define PWM_CCP7_RE5
#define PWM_CCP8_RA0
#define PWM_CCP8_RA4
#define PWM_CCP8_RB0
#define PWM_CCP8_RB4
#define PWM_CCP8_RC5
#define PWM_CCP8_RD0
#define PWM_CCP8_RD4
#define PWM_CCP8_RE0
#define PWM_CCP8_RE4
#define PWM_CCP8_RF2
#define PWM_CCP8_RF6
#define PWM_CCP8_RG4
#define PWM_CCP9_RA1
#define PWM_CCP9_RA5
#define PWM_CCP9_RB1
#define PWM_CCP9_RB5
#define PWM_CCP9_RC4
#define PWM_CCP9_RD1
#define PWM_CCP9_RD5
#define PWM_CCP9_RE1
#define PWM_CCP9_RE3
#define PWM_CCP9_RE5
#define PWM_CCP10_RA2
#define PWM_CCP10_RA6
#define PWM_CCP10_RA7
#define PWM_CCP10_RB2
#define PWM_CCP10_RC6
#define PWM_CCP10_RD2
#define PWM_CCP10_RD6
#define PWM_CCP10_RE2
#define PWM_CCP10_RE6
#define PWM_CCP10_RF7
#define PWM_CCP10_RG2


#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4
#define CCP_MODULE_5 5
#define CCP_MODULE_6 6
#define CCP_MODULE_7 7
#define CCP_MODULE_8 8
#define CCP_MODULE_9 9
#define CCP_MODULE_10 10

#define CCP_MODULE_COUNT 10

#define TIM_MODULE_COUNT CCP_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
#define __RA0_CN
#define __RA1_CN
#define __RA2_CN
#define __RA3_CN
#define __RA4_CN
#define __RA5_CN
#define __RA6_CN
#define __RA7_CN
#define __RB0_CN
#define __RB1_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RC0_CN
#define __RC1_CN
#define __RC2_CN
#define __RC3_CN
#define __RC4_CN
#define __RC5_CN
#define __RC6_CN
#define __RC7_CN
#define __RD0_CN
#define __RD1_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD6_CN
#define __RD7_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RE4_CN
#define __RE5_CN
#define __RE6_CN
#define __RE7_CN
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
#define __RF7_CN
#define __RG0_CN
#define __RG1_CN
#define __RG2_CN
#define __RG3_CN
#define __RG4_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define __PORT_G_CN
#define PORT_COUNT (7)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0xF89U
#define LATB_BASE_ADDRESS 0xF8AU
#define LATC_BASE_ADDRESS 0xF8BU
#define LATD_BASE_ADDRESS 0xF8CU
#define LATE_BASE_ADDRESS 0xF8DU
#define LATF_BASE_ADDRESS 0xF8EU
#define LATG_BASE_ADDRESS 0xF8FU
#define PORTA_BASE_ADDRESS 0xF80U
#define PORTB_BASE_ADDRESS 0xF81U
#define PORTC_BASE_ADDRESS 0xF82U
#define PORTD_BASE_ADDRESS 0xF83U
#define PORTE_BASE_ADDRESS 0xF84U
#define PORTF_BASE_ADDRESS 0xF85U
#define PORTG_BASE_ADDRESS 0xF86U
#define TRISA_BASE_ADDRESS 0xF92U
#define TRISB_BASE_ADDRESS 0xF93U
#define TRISC_BASE_ADDRESS 0xF94U
#define TRISD_BASE_ADDRESS 0xF95U
#define TRISE_BASE_ADDRESS 0xF96U
#define TRISF_BASE_ADDRESS 0xF97U
#define TRISG_BASE_ADDRESS 0xF98U
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE1_ADDRESS 0xF9DU
#define HAL_LL_PIE2_ADDRESS 0xFA0U
#define HAL_LL_PIE3_ADDRESS 0xFA3U
#define HAL_LL_PIE4_ADDRESS 0xFB4U
#define HAL_LL_PIE5_ADDRESS 0xFB7U
#define HAL_LL_PIE6_ADDRESS 0xF61U
#define HAL_LL_PIR1_ADDRESS 0xF9EU
#define HAL_LL_PIR2_ADDRESS 0xFA1U
#define HAL_LL_PIR3_ADDRESS 0xFA4U
#define HAL_LL_PIR4_ADDRESS 0xFB5U
#define HAL_LL_PIR5_ADDRESS 0xFB8U
#define HAL_LL_PIR6_ADDRESS 0xFA6U
#define HAL_LL_PMD0_ADDRESS 0xEF4U
#define HAL_LL_PMD1_ADDRESS 0xEF3U
#define HAL_LL_PMD2_ADDRESS 0xEF2U
#define HAL_LL_PMD3_ADDRESS 0xEF1U
#define HAL_LL_PMD4_ADDRESS 0xEF0U
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_SSP1ADD_ADDRESS 0xFC8U
#define HAL_LL_SSP1BUF_ADDRESS 0xFC9U
#define HAL_LL_SSP1CON1_ADDRESS 0xFC6U
#define HAL_LL_SSP1CON2_ADDRESS 0xFC5U
#define HAL_LL_SSP1STAT_ADDRESS 0xFC7U
#define HAL_LL_SSP2ADD_ADDRESS 0xF02U
#define HAL_LL_SSP2BUF_ADDRESS 0xF03U
#define HAL_LL_SSP2CON1_ADDRESS 0xF19U
#define HAL_LL_SSP2CON2_ADDRESS 0xF18U
#define HAL_LL_SSP2STAT_ADDRESS 0xF1AU
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_1 HAL_LL_SSP1BUF_ADDRESS
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_2 HAL_LL_SSP2BUF_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_1 HAL_LL_SSP1CON1_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_2 HAL_LL_SSP2CON1_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_1 HAL_LL_SSP1STAT_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_2 HAL_LL_SSP2STAT_ADDRESS
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE1_ADDRESS
#define HAL_LL_PIE_MODULE_UART2_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIE_MODULE_UART3_ADDRESS HAL_LL_PIE6_ADDRESS
#define HAL_LL_PIE_MODULE_UART4_ADDRESS HAL_LL_PIE6_ADDRESS
#define HAL_LL_PIR_MODULE_I2C1_ADDRESS HAL_LL_PIR1_ADDRESS
#define HAL_LL_PIR_MODULE_I2C2_ADDRESS HAL_LL_PIR2_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR1_ADDRESS
#define HAL_LL_PIR_MODULE_UART2_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART3_ADDRESS HAL_LL_PIR6_ADDRESS
#define HAL_LL_PIR_MODULE_UART4_ADDRESS HAL_LL_PIR6_ADDRESS
#define HAL_LL_PIR_SSPIF_MODULE_1_BIT 3
#define HAL_LL_PIR_SSPIF_MODULE_2_BIT 6
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_I2C2_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_SPI2_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_UART2_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_UART3_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_UART4_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 0
#define HAL_LL_SSP2_MODULE_BIT 1
#define HAL_LL_UART1_MODULE_BIT 2
#define HAL_LL_UART1_RCIF_BIT 5
#define HAL_LL_UART1_TXIF_BIT 4
#define HAL_LL_UART2_MODULE_BIT 3
#define HAL_LL_UART2_RCIF_BIT 5
#define HAL_LL_UART2_TXIF_BIT 4
#define HAL_LL_UART3_MODULE_BIT 4
#define HAL_LL_UART3_RCIF_BIT 5
#define HAL_LL_UART3_TXIF_BIT 4
#define HAL_LL_UART4_MODULE_BIT 5
#define HAL_LL_UART4_RCIF_BIT 7
#define HAL_LL_UART4_TXIF_BIT 6
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_PSTR3CON_ADDRESS 0xF1BU
#define HAL_LL_PSTR2CON_ADDRESS 0xF1CU
#define HAL_LL_PSTR1CON_ADDRESS 0xF9CU
#define HAL_LL_CCP10CON_ADDRESS 0xF40U
#define HAL_LL_CCP1CON_ADDRESS 0xFB9U
#define HAL_LL_CCP2CON_ADDRESS 0xF4EU
#define HAL_LL_CCP3CON_ADDRESS 0xF49U
#define HAL_LL_CCP4CON_ADDRESS 0xF10U
#define HAL_LL_CCP5CON_ADDRESS 0xF0DU
#define HAL_LL_CCP6CON_ADDRESS 0xF0AU
#define HAL_LL_CCP7CON_ADDRESS 0xF07U
#define HAL_LL_CCP8CON_ADDRESS 0xF46U
#define HAL_LL_CCP9CON_ADDRESS 0xF43U
#define HAL_LL_CCPTMRS0_ADDRESS 0xF36U
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS1_ADDRESS 0xF35U
#define HAL_LL_CCPTMRS_CCP_MODULE_4 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_4_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_5 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_5_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_6 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_6_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_7 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_7_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS2_ADDRESS 0xF34U
#define HAL_LL_CCPTMRS_CCP_MODULE_8 HAL_LL_CCPTMRS2_ADDRESS
#define HAL_LL_CCP_MODULE_8_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_9 HAL_LL_CCPTMRS2_ADDRESS
#define HAL_LL_CCP_MODULE_9_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_10 HAL_LL_CCPTMRS2_ADDRESS
#define HAL_LL_CCP_MODULE_10_TIM2_ENABLE_BIT 0x00
#define HAL_LL_PMD_CCP_MODULE_3 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_3_ENABLE_BIT 0
#define HAL_LL_PMD_CCP_MODULE_4 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_4_ENABLE_BIT 1
#define HAL_LL_PMD_CCP_MODULE_5 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_5_ENABLE_BIT 2
#define HAL_LL_PMD_CCP_MODULE_6 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_6_ENABLE_BIT 3
#define HAL_LL_PMD_CCP_MODULE_7 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_7_ENABLE_BIT 4
#define HAL_LL_PMD_CCP_MODULE_8 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_8_ENABLE_BIT 5
#define HAL_LL_PMD_CCP_MODULE_9 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_9_ENABLE_BIT 6
#define HAL_LL_PMD_CCP_MODULE_10 HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_10_ENABLE_BIT 7
#define HAL_LL_PMD_CCP_MODULE_1 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_1_ENABLE_BIT 6
#define HAL_LL_PMD_CCP_MODULE_2 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_2_ENABLE_BIT 7
#define HAL_LL_PR2_ADDRESS 0xFCBU
#define HAL_LL_PR4_ADDRESS 0xF05U
#define HAL_LL_PR6_ADDRESS 0xF3EU
#define HAL_LL_PR8_ADDRESS 0xF3BU
#define HAL_LL_T0CON_ADDRESS 0xFD5U
#define HAL_LL_T1CON_ADDRESS 0xFCDU
#define HAL_LL_T2CON_ADDRESS 0xFCAU
#define HAL_LL_T3CON_ADDRESS 0xFB1U
#define HAL_LL_T4CON_ADDRESS 0xF04U
#define HAL_LL_T5CON_ADDRESS 0xF14U
#define HAL_LL_T6CON_ADDRESS 0xF3DU
#define HAL_LL_T8CON_ADDRESS 0xF3AU
#define HAL_LL_CCPR10L_ADDRESS 0xF41U
#define HAL_LL_CCPR1L_ADDRESS 0xFBAU
#define HAL_LL_CCPR2L_ADDRESS 0xF4FU
#define HAL_LL_CCPR3L_ADDRESS 0xF4AU
#define HAL_LL_CCPR4L_ADDRESS 0xF11U
#define HAL_LL_CCPR5L_ADDRESS 0xF0EU
#define HAL_LL_CCPR6L_ADDRESS 0xF0BU
#define HAL_LL_CCPR7L_ADDRESS 0xF08U
#define HAL_LL_CCPR8L_ADDRESS 0xF47U
#define HAL_LL_CCPR9L_ADDRESS 0xF44U
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD3_ADDRESS
#define HAL_LL_ADCMD_BIT 5
// EOF ADC Register addresses and bit defines

// ODCON Register addresses and bit defines
#define HAL_LL_ODCON_NUMERIC
#define HAL_LL_ODCON1_ADDRESS 0xEEBU
#define HAL_LL_ODCON1_ECCP1OD_BIT 6
#define HAL_LL_ODCON1_ECCP2OD_BIT 7
#define HAL_LL_ODCON2_ADDRESS 0xEEAU
#define HAL_LL_ODCON2_ECCP3OD_BIT 0
#define HAL_LL_ODCON_BIT_COUNT 3

// EOF ODCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_BAUDCON1_ADDRESS 0xF67U
#define HAL_LL_BAUDCON2_ADDRESS 0xF31U
#define HAL_LL_BAUDCON3_ADDRESS 0xF2DU
#define HAL_LL_BAUDCON4_ADDRESS 0xEFDU
#define HAL_LL_RCREG1_ADDRESS 0xFAEU
#define HAL_LL_RCREG2_ADDRESS 0xF1EU
#define HAL_LL_RCREG3_ADDRESS 0xF2AU
#define HAL_LL_RCREG4_ADDRESS 0xEFAU
#define HAL_LL_RCSTA1_ADDRESS 0xFABU
#define HAL_LL_RCSTA2_ADDRESS 0xF33U
#define HAL_LL_RCSTA3_ADDRESS 0xF2FU
#define HAL_LL_RCSTA4_ADDRESS 0xEFFU
#define HAL_LL_SPBRG1_ADDRESS 0xFAFU
#define HAL_LL_SPBRG2_ADDRESS 0xF1FU
#define HAL_LL_SPBRG3_ADDRESS 0xF2BU
#define HAL_LL_SPBRG4_ADDRESS 0xEFBU
#define HAL_LL_SPBRGH1_ADDRESS 0xF30U
#define HAL_LL_SPBRGH2_ADDRESS 0xF20U
#define HAL_LL_SPBRGH3_ADDRESS 0xF2CU
#define HAL_LL_SPBRGH4_ADDRESS 0xEFCU
#define HAL_LL_TXREG1_ADDRESS 0xFADU
#define HAL_LL_TXREG2_ADDRESS 0xF1DU
#define HAL_LL_TXREG3_ADDRESS 0xF29U
#define HAL_LL_TXREG4_ADDRESS 0xEF9U
#define HAL_LL_TXSTA1_ADDRESS 0xFACU
#define HAL_LL_TXSTA2_ADDRESS 0xF32U
#define HAL_LL_TXSTA3_ADDRESS 0xF2EU
#define HAL_LL_TXSTA4_ADDRESS 0xEFEU
// EOF UART Register addresses

// RPOR Register addresses
#define HAL_LL_RPOR0_1_ADDRESS 0xE12U
#define HAL_LL_RPOR2_3_ADDRESS 0xE13U
#define HAL_LL_RPOR4_5_ADDRESS 0xE14U
#define HAL_LL_RPOR6_7_ADDRESS 0xE15U
#define HAL_LL_RPOR8_9_ADDRESS 0xE16U
#define HAL_LL_RPOR10_11_ADDRESS 0xE17U
#define HAL_LL_RPOR12_13_ADDRESS 0xE18U
#define HAL_LL_RPOR14_15_ADDRESS 0xE19U
#define HAL_LL_RPOR16_17_ADDRESS 0xE1AU
#define HAL_LL_RPOR18_19_ADDRESS 0xE1BU
#define HAL_LL_RPOR20_21_ADDRESS 0xE1CU
#define HAL_LL_RPOR22_23_ADDRESS 0xE1DU
#define HAL_LL_RPOR24_25_ADDRESS 0xE1EU
#define HAL_LL_RPOR26_27_ADDRESS 0xE1FU
#define HAL_LL_RPOR28_29_ADDRESS 0xE20U
#define HAL_LL_RPOR30_31_ADDRESS 0xE21U
#define HAL_LL_RPOR32_33_ADDRESS 0xE22U
#define HAL_LL_RPOR34_35_ADDRESS 0xE23U
#define HAL_LL_RPOR36_37_ADDRESS 0xE24U
#define HAL_LL_RPOR38_39_ADDRESS 0xE25U
#define HAL_LL_RPOR40_41_ADDRESS 0xE26U
#define HAL_LL_RPOR42_43_ADDRESS 0xE27U
#define HAL_LL_RPOR44_45_ADDRESS 0xE28U
#define HAL_LL_RPOR46_ADDRESS 0xE29U
// EOF RPOR Register addresses

// RPINR Register addresses
#define HAL_LL_RPINR0_1_ADDRESS 0xE2AU
#define HAL_LL_RPINR2_3_ADDRESS 0xE2BU
#define HAL_LL_RPINR4_5_ADDRESS 0xE2CU
#define HAL_LL_RPINR6_7_ADDRESS 0xE2DU
#define HAL_LL_RPINR8_9_ADDRESS 0xE2EU
#define HAL_LL_RPINR10_11_ADDRESS 0xE2FU
#define HAL_LL_RPINR12_13_ADDRESS 0xE30U
#define HAL_LL_RPINR14_15_ADDRESS 0xE31U
#define HAL_LL_RPINR16_17_ADDRESS 0xE32U
#define HAL_LL_RPINR18_19_ADDRESS 0xE33U
#define HAL_LL_RPINR20_21_ADDRESS 0xE34U
#define HAL_LL_RPINR22_23_ADDRESS 0xE35U
#define HAL_LL_RPINR24_25_ADDRESS 0xE36U
#define HAL_LL_RPINR26_27_ADDRESS 0xE37U
#define HAL_LL_RPINR28_29_ADDRESS 0xE38U
#define HAL_LL_RPINR30_31_ADDRESS 0xE39U
#define HAL_LL_RPINR32_33_ADDRESS 0xE3AU
#define HAL_LL_RPINR34_35_ADDRESS 0xE3BU
#define HAL_LL_RPINR36_37_ADDRESS 0xE3CU
#define HAL_LL_RPINR38_39_ADDRESS 0xE3DU
#define HAL_LL_RPINR40_41_ADDRESS 0xE3EU
#define HAL_LL_RPINR42_43_ADDRESS 0xE3FU
#define HAL_LL_RPINR44_45_ADDRESS 0xE40U
#define HAL_LL_RPINR46_47_ADDRESS 0xE41U
#define HAL_LL_RPINR48_49_ADDRESS 0xE42U
#define HAL_LL_RPINR50_51_ADDRESS 0xE43U
#define HAL_LL_RPINR52_53_ADDRESS 0xE44U
// EOF RPINR Register addresses

// Unlock Register addresses
#define HAL_LL_OSCCON2_ADDRESS 0xF66U
#define HAL_LL_EECON2_ADDRESS 0xF7EU
// EOF Unlock Register addresses

#define HAL_LL_SLRCON_BIT_COUNT 0

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_TX1IE_BIT 4
#define HAL_LL_IRQ_RC1IE_BIT 5
#define HAL_LL_IRQ_TX2IE_BIT 20
#define HAL_LL_IRQ_RC2IE_BIT 21
#define HAL_LL_IRQ_TX3IE_BIT 44
#define HAL_LL_IRQ_RC3IE_BIT 45
#define HAL_LL_IRQ_TX4IE_BIT 46
#define HAL_LL_IRQ_RC4IE_BIT 47
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
