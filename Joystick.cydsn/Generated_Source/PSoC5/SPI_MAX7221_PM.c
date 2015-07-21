/*******************************************************************************
* File Name: SPI_MAX7221_PM.c
* Version 2.50
*
* Description:
*  This file contains the setup, control and status commands to support
*  component operations in low power mode.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "SPI_MAX7221_PVT.h"

static SPI_MAX7221_BACKUP_STRUCT SPI_MAX7221_backup =
{
    SPI_MAX7221_DISABLED,
    SPI_MAX7221_BITCTR_INIT,
};


/*******************************************************************************
* Function Name: SPI_MAX7221_SaveConfig
********************************************************************************
*
* Summary:
*  Empty function. Included for consistency with other components.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void SPI_MAX7221_SaveConfig(void) 
{

}


/*******************************************************************************
* Function Name: SPI_MAX7221_RestoreConfig
********************************************************************************
*
* Summary:
*  Empty function. Included for consistency with other components.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void SPI_MAX7221_RestoreConfig(void) 
{

}


/*******************************************************************************
* Function Name: SPI_MAX7221_Sleep
********************************************************************************
*
* Summary:
*  Prepare SPIM Component goes to sleep.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  SPI_MAX7221_backup - modified when non-retention registers are saved.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void SPI_MAX7221_Sleep(void) 
{
    /* Save components enable state */
    SPI_MAX7221_backup.enableState = ((uint8) SPI_MAX7221_IS_ENABLED);

    SPI_MAX7221_Stop();
}


/*******************************************************************************
* Function Name: SPI_MAX7221_Wakeup
********************************************************************************
*
* Summary:
*  Prepare SPIM Component to wake up.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  SPI_MAX7221_backup - used when non-retention registers are restored.
*  SPI_MAX7221_txBufferWrite - modified every function call - resets to
*  zero.
*  SPI_MAX7221_txBufferRead - modified every function call - resets to
*  zero.
*  SPI_MAX7221_rxBufferWrite - modified every function call - resets to
*  zero.
*  SPI_MAX7221_rxBufferRead - modified every function call - resets to
*  zero.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void SPI_MAX7221_Wakeup(void) 
{
    #if(SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED)
        SPI_MAX7221_rxBufferFull  = 0u;
        SPI_MAX7221_rxBufferRead  = 0u;
        SPI_MAX7221_rxBufferWrite = 0u;
    #endif /* (SPI_MAX7221_RX_SOFTWARE_BUF_ENABLED) */

    #if(SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED)
        SPI_MAX7221_txBufferFull  = 0u;
        SPI_MAX7221_txBufferRead  = 0u;
        SPI_MAX7221_txBufferWrite = 0u;
    #endif /* (SPI_MAX7221_TX_SOFTWARE_BUF_ENABLED) */

    /* Clear any data from the RX and TX FIFO */
    SPI_MAX7221_ClearFIFO();

    /* Restore components block enable state */
    if(0u != SPI_MAX7221_backup.enableState)
    {
        SPI_MAX7221_Enable();
    }
}


/* [] END OF FILE */
