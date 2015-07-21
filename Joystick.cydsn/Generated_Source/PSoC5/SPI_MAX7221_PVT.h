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

#if !defined(CY_SPIM_PVT_SPI_MAX7221_H)
#define CY_SPIM_PVT_SPI_MAX7221_H

#include "SPI_MAX7221.h"


/**********************************
*   Functions with external linkage
**********************************/


/**********************************
*   Variables with external linkage
**********************************/

extern volatile uint8 SPI_MAX7221_swStatusTx;
extern volatile uint8 SPI_MAX7221_swStatusRx;

#if(SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED)
    extern volatile uint16 SPI_MAX7221_txBuffer[SPI_MAX7221_TX_BUFFER_SIZE];
    extern volatile uint8 SPI_MAX7221_txBufferRead;
    extern volatile uint8 SPI_MAX7221_txBufferWrite;
    extern volatile uint8 SPI_MAX7221_txBufferFull;
#endif /* (SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED) */

#if(SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED)
    extern volatile uint16 SPI_MAX7221_rxBuffer[SPI_MAX7221_RX_BUFFER_SIZE];
    extern volatile uint8 SPI_MAX7221_rxBufferRead;
    extern volatile uint8 SPI_MAX7221_rxBufferWrite;
    extern volatile uint8 SPI_MAX7221_rxBufferFull;
#endif /* (SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED) */

#endif /* CY_SPIM_PVT_SPI_MAX7221_H */


/* [] END OF FILE */
