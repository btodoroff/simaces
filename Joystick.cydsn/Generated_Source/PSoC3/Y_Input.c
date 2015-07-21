/*******************************************************************************
* File Name: Y_Input.c  
* Version 2.0
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Y_Input.h"


/*******************************************************************************
* Function Name: Y_Input_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Y_Input_Write(uint8 value) 
{
    uint8 staticBits = (Y_Input_DR & (uint8)(~Y_Input_MASK));
    Y_Input_DR = staticBits | ((uint8)(value << Y_Input_SHIFT) & Y_Input_MASK);
}


/*******************************************************************************
* Function Name: Y_Input_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Y_Input_DM_STRONG     Strong Drive 
*  Y_Input_DM_OD_HI      Open Drain, Drives High 
*  Y_Input_DM_OD_LO      Open Drain, Drives Low 
*  Y_Input_DM_RES_UP     Resistive Pull Up 
*  Y_Input_DM_RES_DWN    Resistive Pull Down 
*  Y_Input_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Y_Input_DM_DIG_HIZ    High Impedance Digital 
*  Y_Input_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Y_Input_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Y_Input_0, mode);
}


/*******************************************************************************
* Function Name: Y_Input_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Y_Input_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Y_Input_Read(void) 
{
    return (Y_Input_PS & Y_Input_MASK) >> Y_Input_SHIFT;
}


/*******************************************************************************
* Function Name: Y_Input_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Y_Input_ReadDataReg(void) 
{
    return (Y_Input_DR & Y_Input_MASK) >> Y_Input_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Y_Input_INTSTAT) 

    /*******************************************************************************
    * Function Name: Y_Input_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Y_Input_ClearInterrupt(void) 
    {
        return (Y_Input_INTSTAT & Y_Input_MASK) >> Y_Input_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
