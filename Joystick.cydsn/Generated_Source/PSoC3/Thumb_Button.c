/*******************************************************************************
* File Name: Thumb_Button.c  
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
#include "Thumb_Button.h"


/*******************************************************************************
* Function Name: Thumb_Button_Write
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
void Thumb_Button_Write(uint8 value) 
{
    uint8 staticBits = (Thumb_Button_DR & (uint8)(~Thumb_Button_MASK));
    Thumb_Button_DR = staticBits | ((uint8)(value << Thumb_Button_SHIFT) & Thumb_Button_MASK);
}


/*******************************************************************************
* Function Name: Thumb_Button_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Thumb_Button_DM_STRONG     Strong Drive 
*  Thumb_Button_DM_OD_HI      Open Drain, Drives High 
*  Thumb_Button_DM_OD_LO      Open Drain, Drives Low 
*  Thumb_Button_DM_RES_UP     Resistive Pull Up 
*  Thumb_Button_DM_RES_DWN    Resistive Pull Down 
*  Thumb_Button_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Thumb_Button_DM_DIG_HIZ    High Impedance Digital 
*  Thumb_Button_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Thumb_Button_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Thumb_Button_0, mode);
}


/*******************************************************************************
* Function Name: Thumb_Button_Read
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
*  Macro Thumb_Button_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Thumb_Button_Read(void) 
{
    return (Thumb_Button_PS & Thumb_Button_MASK) >> Thumb_Button_SHIFT;
}


/*******************************************************************************
* Function Name: Thumb_Button_ReadDataReg
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
uint8 Thumb_Button_ReadDataReg(void) 
{
    return (Thumb_Button_DR & Thumb_Button_MASK) >> Thumb_Button_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Thumb_Button_INTSTAT) 

    /*******************************************************************************
    * Function Name: Thumb_Button_ClearInterrupt
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
    uint8 Thumb_Button_ClearInterrupt(void) 
    {
        return (Thumb_Button_INTSTAT & Thumb_Button_MASK) >> Thumb_Button_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
