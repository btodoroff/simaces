/*******************************************************************************
* File Name: Y_Input.h  
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

#if !defined(CY_PINS_Y_Input_H) /* Pins Y_Input_H */
#define CY_PINS_Y_Input_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Y_Input_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Y_Input_Write(uint8 value) ;
void    Y_Input_SetDriveMode(uint8 mode) ;
uint8   Y_Input_ReadDataReg(void) ;
uint8   Y_Input_Read(void) ;
uint8   Y_Input_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Y_Input_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Y_Input_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Y_Input_DM_RES_UP          PIN_DM_RES_UP
#define Y_Input_DM_RES_DWN         PIN_DM_RES_DWN
#define Y_Input_DM_OD_LO           PIN_DM_OD_LO
#define Y_Input_DM_OD_HI           PIN_DM_OD_HI
#define Y_Input_DM_STRONG          PIN_DM_STRONG
#define Y_Input_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Y_Input_MASK               Y_Input__MASK
#define Y_Input_SHIFT              Y_Input__SHIFT
#define Y_Input_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Y_Input_PS                     (* (reg8 *) Y_Input__PS)
/* Data Register */
#define Y_Input_DR                     (* (reg8 *) Y_Input__DR)
/* Port Number */
#define Y_Input_PRT_NUM                (* (reg8 *) Y_Input__PRT) 
/* Connect to Analog Globals */                                                  
#define Y_Input_AG                     (* (reg8 *) Y_Input__AG)                       
/* Analog MUX bux enable */
#define Y_Input_AMUX                   (* (reg8 *) Y_Input__AMUX) 
/* Bidirectional Enable */                                                        
#define Y_Input_BIE                    (* (reg8 *) Y_Input__BIE)
/* Bit-mask for Aliased Register Access */
#define Y_Input_BIT_MASK               (* (reg8 *) Y_Input__BIT_MASK)
/* Bypass Enable */
#define Y_Input_BYP                    (* (reg8 *) Y_Input__BYP)
/* Port wide control signals */                                                   
#define Y_Input_CTL                    (* (reg8 *) Y_Input__CTL)
/* Drive Modes */
#define Y_Input_DM0                    (* (reg8 *) Y_Input__DM0) 
#define Y_Input_DM1                    (* (reg8 *) Y_Input__DM1)
#define Y_Input_DM2                    (* (reg8 *) Y_Input__DM2) 
/* Input Buffer Disable Override */
#define Y_Input_INP_DIS                (* (reg8 *) Y_Input__INP_DIS)
/* LCD Common or Segment Drive */
#define Y_Input_LCD_COM_SEG            (* (reg8 *) Y_Input__LCD_COM_SEG)
/* Enable Segment LCD */
#define Y_Input_LCD_EN                 (* (reg8 *) Y_Input__LCD_EN)
/* Slew Rate Control */
#define Y_Input_SLW                    (* (reg8 *) Y_Input__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Y_Input_PRTDSI__CAPS_SEL       (* (reg8 *) Y_Input__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Y_Input_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Y_Input__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Y_Input_PRTDSI__OE_SEL0        (* (reg8 *) Y_Input__PRTDSI__OE_SEL0) 
#define Y_Input_PRTDSI__OE_SEL1        (* (reg8 *) Y_Input__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Y_Input_PRTDSI__OUT_SEL0       (* (reg8 *) Y_Input__PRTDSI__OUT_SEL0) 
#define Y_Input_PRTDSI__OUT_SEL1       (* (reg8 *) Y_Input__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Y_Input_PRTDSI__SYNC_OUT       (* (reg8 *) Y_Input__PRTDSI__SYNC_OUT) 


#if defined(Y_Input__INTSTAT)  /* Interrupt Registers */

    #define Y_Input_INTSTAT                (* (reg8 *) Y_Input__INTSTAT)
    #define Y_Input_SNAP                   (* (reg8 *) Y_Input__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Y_Input_H */


/* [] END OF FILE */
