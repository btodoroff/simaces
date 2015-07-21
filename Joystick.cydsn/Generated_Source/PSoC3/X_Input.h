/*******************************************************************************
* File Name: X_Input.h  
* Version 2.0
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_X_Input_H) /* Pins X_Input_H */
#define CY_PINS_X_Input_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "X_Input_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    X_Input_Write(uint8 value) ;
void    X_Input_SetDriveMode(uint8 mode) ;
uint8   X_Input_ReadDataReg(void) ;
uint8   X_Input_Read(void) ;
uint8   X_Input_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define X_Input_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define X_Input_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define X_Input_DM_RES_UP          PIN_DM_RES_UP
#define X_Input_DM_RES_DWN         PIN_DM_RES_DWN
#define X_Input_DM_OD_LO           PIN_DM_OD_LO
#define X_Input_DM_OD_HI           PIN_DM_OD_HI
#define X_Input_DM_STRONG          PIN_DM_STRONG
#define X_Input_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define X_Input_MASK               X_Input__MASK
#define X_Input_SHIFT              X_Input__SHIFT
#define X_Input_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define X_Input_PS                     (* (reg8 *) X_Input__PS)
/* Data Register */
#define X_Input_DR                     (* (reg8 *) X_Input__DR)
/* Port Number */
#define X_Input_PRT_NUM                (* (reg8 *) X_Input__PRT) 
/* Connect to Analog Globals */                                                  
#define X_Input_AG                     (* (reg8 *) X_Input__AG)                       
/* Analog MUX bux enable */
#define X_Input_AMUX                   (* (reg8 *) X_Input__AMUX) 
/* Bidirectional Enable */                                                        
#define X_Input_BIE                    (* (reg8 *) X_Input__BIE)
/* Bit-mask for Aliased Register Access */
#define X_Input_BIT_MASK               (* (reg8 *) X_Input__BIT_MASK)
/* Bypass Enable */
#define X_Input_BYP                    (* (reg8 *) X_Input__BYP)
/* Port wide control signals */                                                   
#define X_Input_CTL                    (* (reg8 *) X_Input__CTL)
/* Drive Modes */
#define X_Input_DM0                    (* (reg8 *) X_Input__DM0) 
#define X_Input_DM1                    (* (reg8 *) X_Input__DM1)
#define X_Input_DM2                    (* (reg8 *) X_Input__DM2) 
/* Input Buffer Disable Override */
#define X_Input_INP_DIS                (* (reg8 *) X_Input__INP_DIS)
/* LCD Common or Segment Drive */
#define X_Input_LCD_COM_SEG            (* (reg8 *) X_Input__LCD_COM_SEG)
/* Enable Segment LCD */
#define X_Input_LCD_EN                 (* (reg8 *) X_Input__LCD_EN)
/* Slew Rate Control */
#define X_Input_SLW                    (* (reg8 *) X_Input__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define X_Input_PRTDSI__CAPS_SEL       (* (reg8 *) X_Input__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define X_Input_PRTDSI__DBL_SYNC_IN    (* (reg8 *) X_Input__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define X_Input_PRTDSI__OE_SEL0        (* (reg8 *) X_Input__PRTDSI__OE_SEL0) 
#define X_Input_PRTDSI__OE_SEL1        (* (reg8 *) X_Input__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define X_Input_PRTDSI__OUT_SEL0       (* (reg8 *) X_Input__PRTDSI__OUT_SEL0) 
#define X_Input_PRTDSI__OUT_SEL1       (* (reg8 *) X_Input__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define X_Input_PRTDSI__SYNC_OUT       (* (reg8 *) X_Input__PRTDSI__SYNC_OUT) 


#if defined(X_Input__INTSTAT)  /* Interrupt Registers */

    #define X_Input_INTSTAT                (* (reg8 *) X_Input__INTSTAT)
    #define X_Input_SNAP                   (* (reg8 *) X_Input__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins X_Input_H */


/* [] END OF FILE */
