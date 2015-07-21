/*******************************************************************************
* File Name: SPI_LEDS_PM.c
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

#include "SPI_LEDS_PVT.h"

static SPI_LEDS_BACKUP_STRUCT SPI_LEDS_backup =
{
    SPI_LEDS_DISABLED,
    SPI_LEDS_BITCTR_INIT,
};


/*******************************************************************************
* Function Name: SPI_LEDS_SaveConfig
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
void SPI_LEDS_SaveConfig(void) 
{

}


/*******************************************************************************
* Function Name: SPI_LEDS_RestoreConfig
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
void SPI_LEDS_RestoreConfig(void) 
{

}


/*******************************************************************************
* Function Name: SPI_LEDS_Sleep
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
*  SPI_LEDS_backup - modified when non-retention registers are saved.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void SPI_LEDS_Sleep(void) 
{
    /* Save components enable state */
    SPI_LEDS_backup.enableState = ((uint8) SPI_LEDS_IS_ENABLED);

    SPI_LEDS_Stop();
}


/*******************************************************************************
* Function Name: SPI_LEDS_Wakeup
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
*  SPI_LEDS_backup - used when non-retention registers are restored.
*  SPI_LEDS_txBufferWrite - modified every function call - resets to
*  zero.
*  SPI_LEDS_txBufferRead - modified every function call - resets to
*  zero.
*  SPI_LEDS_rxBufferWrite - modified every function call - resets to
*  zero.
*  SPI_LEDS_rxBufferRead - modified every function call - resets to
*  zero.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void SPI_LEDS_Wakeup(void) 
{
    #if(SPI_LEDS_RX_SOFTWARE_BUF_ENABLED)
        SPI_LEDS_rxBufferFull  = 0u;
        SPI_LEDS_rxBufferRead  = 0u;
        SPI_LEDS_rxBufferWrite = 0u;
    #endif /* (SPI_LEDS_RX_SOFTWARE_BUF_ENABLED) */

    #if(SPI_LEDS_TX_SOFTWARE_BUF_ENABLED)
        SPI_LEDS_txBufferFull  = 0u;
        SPI_LEDS_txBufferRead  = 0u;
        SPI_LEDS_txBufferWrite = 0u;
    #endif /* (SPI_LEDS_TX_SOFTWARE_BUF_ENABLED) */

    /* Clear any data from the RX and TX FIFO */
    SPI_LEDS_ClearFIFO();

    /* Restore components block enable state */
    if(0u != SPI_LEDS_backup.enableState)
    {
        SPI_LEDS_Enable();
    }
}


/* [] END OF FILE */
