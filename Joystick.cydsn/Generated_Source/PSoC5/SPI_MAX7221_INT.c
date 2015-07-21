/*******************************************************************************
* File Name: SPI_MAX7221_INT.c
* Version 2.50
*
* Description:
*  This file provides all Interrupt Service Routine (ISR) for the SPI Master
*  component.
*
* Note:
*  None.
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "SPI_MAX7221_PVT.h"

/* User code required at start of ISR */
/* `#START SPI_MAX7221_ISR_START_DEF` */

/* `#END` */


/*******************************************************************************
* Function Name: SPI_MAX7221_TX_ISR
********************************************************************************
*
* Summary:
*  Interrupt Service Routine for TX portion of the SPI Master.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global variables:
*  SPI_MAX7221_txBufferWrite - used for the account of the bytes which
*  have been written down in the TX software buffer.
*  SPI_MAX7221_txBufferRead - used for the account of the bytes which
*  have been read from the TX software buffer, modified when exist data to
*  sending and FIFO Not Full.
*  SPI_MAX7221_txBuffer[SPI_MAX7221_TX_BUFFER_SIZE] - used to store
*  data to sending.
*  All described above Global variables are used when Software Buffer is used.
*
*******************************************************************************/
CY_ISR(SPI_MAX7221_TX_ISR)
{
    #if(SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED)
        uint8 tmpStatus;
    #endif /* (SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED) */

    /* User code required at start of ISR */
    /* `#START SPI_MAX7221_TX_ISR_START` */

    /* `#END` */

    #if(SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED)
        /* Check if TX data buffer is not empty and there is space in TX FIFO */
        while(SPI_MAX7221_txBufferRead != SPI_MAX7221_txBufferWrite)
        {
            tmpStatus = SPI_MAX7221_GET_STATUS_TX(SPI_MAX7221_swStatusTx);
            SPI_MAX7221_swStatusTx = tmpStatus;

            if(0u != (SPI_MAX7221_swStatusTx & SPI_MAX7221_STS_TX_FIFO_NOT_FULL))
            {
                if(0u == SPI_MAX7221_txBufferFull)
                {
                   SPI_MAX7221_txBufferRead++;

                    if(SPI_MAX7221_txBufferRead >= SPI_MAX7221_TX_BUFFER_SIZE)
                    {
                        SPI_MAX7221_txBufferRead = 0u;
                    }
                }
                else
                {
                    SPI_MAX7221_txBufferFull = 0u;
                }

                /* Put data element into the TX FIFO */
                CY_SET_REG16(SPI_MAX7221_TXDATA_PTR, 
                                             SPI_MAX7221_txBuffer[SPI_MAX7221_txBufferRead]);
            }
            else
            {
                break;
            }
        }

        if(SPI_MAX7221_txBufferRead == SPI_MAX7221_txBufferWrite)
        {
            /* TX Buffer is EMPTY: disable interrupt on TX NOT FULL */
            SPI_MAX7221_TX_STATUS_MASK_REG &= ((uint8) ~SPI_MAX7221_STS_TX_FIFO_NOT_FULL);
        }

    #endif /* (SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED) */

    /* User code required at end of ISR (Optional) */
    /* `#START SPI_MAX7221_TX_ISR_END` */

    /* `#END` */
}


/*******************************************************************************
* Function Name: SPI_MAX7221_RX_ISR
********************************************************************************
*
* Summary:
*  Interrupt Service Routine for RX portion of the SPI Master.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global variables:
*  SPI_MAX7221_rxBufferWrite - used for the account of the bytes which
*  have been written down in the RX software buffer modified when FIFO contains
*  new data.
*  SPI_MAX7221_rxBufferRead - used for the account of the bytes which
*  have been read from the RX software buffer, modified when overflow occurred.
*  SPI_MAX7221_rxBuffer[SPI_MAX7221_RX_BUFFER_SIZE] - used to store
*  received data, modified when FIFO contains new data.
*  All described above Global variables are used when Software Buffer is used.
*
*******************************************************************************/
CY_ISR(SPI_MAX7221_RX_ISR)
{
    #if(SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED)
        uint8 tmpStatus;
        uint16 rxData;
    #endif /* (SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED) */

    /* User code required at start of ISR */
    /* `#START SPI_MAX7221_RX_ISR_START` */

    /* `#END` */

    #if(SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED)

        tmpStatus = SPI_MAX7221_GET_STATUS_RX(SPI_MAX7221_swStatusRx);
        SPI_MAX7221_swStatusRx = tmpStatus;

        /* Check if RX data FIFO has some data to be moved into the RX Buffer */
        while(0u != (SPI_MAX7221_swStatusRx & SPI_MAX7221_STS_RX_FIFO_NOT_EMPTY))
        {
            rxData = CY_GET_REG16(SPI_MAX7221_RXDATA_PTR);

            /* Set next pointer. */
            SPI_MAX7221_rxBufferWrite++;
            if(SPI_MAX7221_rxBufferWrite >= SPI_MAX7221_RX_BUFFER_SIZE)
            {
                SPI_MAX7221_rxBufferWrite = 0u;
            }

            if(SPI_MAX7221_rxBufferWrite == SPI_MAX7221_rxBufferRead)
            {
                SPI_MAX7221_rxBufferRead++;
                if(SPI_MAX7221_rxBufferRead >= SPI_MAX7221_RX_BUFFER_SIZE)
                {
                    SPI_MAX7221_rxBufferRead = 0u;
                }

                SPI_MAX7221_rxBufferFull = 1u;
            }

            /* Move data from the FIFO to the Buffer */
            SPI_MAX7221_rxBuffer[SPI_MAX7221_rxBufferWrite] = rxData;

            tmpStatus = SPI_MAX7221_GET_STATUS_RX(SPI_MAX7221_swStatusRx);
            SPI_MAX7221_swStatusRx = tmpStatus;
        }

    #endif /* (SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED) */

    /* User code required at end of ISR (Optional) */
    /* `#START SPI_MAX7221_RX_ISR_END` */

    /* `#END` */
}

/* [] END OF FILE */
