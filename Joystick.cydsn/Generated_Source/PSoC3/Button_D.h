/*******************************************************************************
* File Name: Button_D.h  
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

#if !defined(CY_PINS_Button_D_H) /* Pins Button_D_H */
#define CY_PINS_Button_D_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_D_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Button_D_Write(uint8 value) ;
void    Button_D_SetDriveMode(uint8 mode) ;
uint8   Button_D_ReadDataReg(void) ;
uint8   Button_D_Read(void) ;
uint8   Button_D_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Button_D_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Button_D_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Button_D_DM_RES_UP          PIN_DM_RES_UP
#define Button_D_DM_RES_DWN         PIN_DM_RES_DWN
#define Button_D_DM_OD_LO           PIN_DM_OD_LO
#define Button_D_DM_OD_HI           PIN_DM_OD_HI
#define Button_D_DM_STRONG          PIN_DM_STRONG
#define Button_D_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Button_D_MASK               Button_D__MASK
#define Button_D_SHIFT              Button_D__SHIFT
#define Button_D_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_D_PS                     (* (reg8 *) Button_D__PS)
/* Data Register */
#define Button_D_DR                     (* (reg8 *) Button_D__DR)
/* Port Number */
#define Button_D_PRT_NUM                (* (reg8 *) Button_D__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_D_AG                     (* (reg8 *) Button_D__AG)                       
/* Analog MUX bux enable */
#define Button_D_AMUX                   (* (reg8 *) Button_D__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_D_BIE                    (* (reg8 *) Button_D__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_D_BIT_MASK               (* (reg8 *) Button_D__BIT_MASK)
/* Bypass Enable */
#define Button_D_BYP                    (* (reg8 *) Button_D__BYP)
/* Port wide control signals */                                                   
#define Button_D_CTL                    (* (reg8 *) Button_D__CTL)
/* Drive Modes */
#define Button_D_DM0                    (* (reg8 *) Button_D__DM0) 
#define Button_D_DM1                    (* (reg8 *) Button_D__DM1)
#define Button_D_DM2                    (* (reg8 *) Button_D__DM2) 
/* Input Buffer Disable Override */
#define Button_D_INP_DIS                (* (reg8 *) Button_D__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_D_LCD_COM_SEG            (* (reg8 *) Button_D__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_D_LCD_EN                 (* (reg8 *) Button_D__LCD_EN)
/* Slew Rate Control */
#define Button_D_SLW                    (* (reg8 *) Button_D__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_D_PRTDSI__CAPS_SEL       (* (reg8 *) Button_D__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_D_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_D__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_D_PRTDSI__OE_SEL0        (* (reg8 *) Button_D__PRTDSI__OE_SEL0) 
#define Button_D_PRTDSI__OE_SEL1        (* (reg8 *) Button_D__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_D_PRTDSI__OUT_SEL0       (* (reg8 *) Button_D__PRTDSI__OUT_SEL0) 
#define Button_D_PRTDSI__OUT_SEL1       (* (reg8 *) Button_D__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_D_PRTDSI__SYNC_OUT       (* (reg8 *) Button_D__PRTDSI__SYNC_OUT) 


#if defined(Button_D__INTSTAT)  /* Interrupt Registers */

    #define Button_D_INTSTAT                (* (reg8 *) Button_D__INTSTAT)
    #define Button_D_SNAP                   (* (reg8 *) Button_D__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Button_D_H */


/* [] END OF FILE */
