/*******************************************************************************
* File Name: .h
* Version 2.50
*
* Description:
*  This private header file contains internal definitions for the SPIM
*  component. Do not use these definitions directly in your application.
*
* Note:
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SPIM_PVT_SPI_LEDS_H)
#define CY_SPIM_PVT_SPI_LEDS_H

#include "SPI_LEDS.h"


/**********************************
*   Functions with external linkage
**********************************/


/**********************************
*   Variables with external linkage
**********************************/

extern volatile uint8 SPI_LEDS_swStatusTx;
extern volatile uint8 SPI_LEDS_swStatusRx;

#if(SPI_LEDS_TX_SOFTWARE_BUF_ENABLED)
    extern volatile uint16 SPI_LEDS_txBuffer[SPI_LEDS_TX_BUFFER_SIZE];
    extern volatile uint8 SPI_LEDS_txBufferRead;
    extern volatile uint8 SPI_LEDS_txBufferWrite;
    extern volatile uint8 SPI_LEDS_txBufferFull;
#endif /* (SPI_LEDS_TX_SOFTWARE_BUF_ENABLED) */

#if(SPI_LEDS_RX_SOFTWARE_BUF_ENABLED)
    extern volatile uint16 SPI_LEDS_rxBuffer[SPI_LEDS_RX_BUFFER_SIZE];
    extern volatile uint8 SPI_LEDS_rxBufferRead;
    extern volatile uint8 SPI_LEDS_rxBufferWrite;
    extern volatile uint8 SPI_LEDS_rxBufferFull;
#endif /* (SPI_LEDS_RX_SOFTWARE_BUF_ENABLED) */

#endif /* CY_SPIM_PVT_SPI_LEDS_H */


/* [] END OF FILE */
