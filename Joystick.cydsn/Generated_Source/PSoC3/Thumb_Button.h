/*******************************************************************************
* File Name: Thumb_Button.h  
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

#if !defined(CY_PINS_Thumb_Button_H) /* Pins Thumb_Button_H */
#define CY_PINS_Thumb_Button_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Thumb_Button_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Thumb_Button_Write(uint8 value) ;
void    Thumb_Button_SetDriveMode(uint8 mode) ;
uint8   Thumb_Button_ReadDataReg(void) ;
uint8   Thumb_Button_Read(void) ;
uint8   Thumb_Button_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Thumb_Button_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Thumb_Button_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Thumb_Button_DM_RES_UP          PIN_DM_RES_UP
#define Thumb_Button_DM_RES_DWN         PIN_DM_RES_DWN
#define Thumb_Button_DM_OD_LO           PIN_DM_OD_LO
#define Thumb_Button_DM_OD_HI           PIN_DM_OD_HI
#define Thumb_Button_DM_STRONG          PIN_DM_STRONG
#define Thumb_Button_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Thumb_Button_MASK               Thumb_Button__MASK
#define Thumb_Button_SHIFT              Thumb_Button__SHIFT
#define Thumb_Button_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Thumb_Button_PS                     (* (reg8 *) Thumb_Button__PS)
/* Data Register */
#define Thumb_Button_DR                     (* (reg8 *) Thumb_Button__DR)
/* Port Number */
#define Thumb_Button_PRT_NUM                (* (reg8 *) Thumb_Button__PRT) 
/* Connect to Analog Globals */                                                  
#define Thumb_Button_AG                     (* (reg8 *) Thumb_Button__AG)                       
/* Analog MUX bux enable */
#define Thumb_Button_AMUX                   (* (reg8 *) Thumb_Button__AMUX) 
/* Bidirectional Enable */                                                        
#define Thumb_Button_BIE                    (* (reg8 *) Thumb_Button__BIE)
/* Bit-mask for Aliased Register Access */
#define Thumb_Button_BIT_MASK               (* (reg8 *) Thumb_Button__BIT_MASK)
/* Bypass Enable */
#define Thumb_Button_BYP                    (* (reg8 *) Thumb_Button__BYP)
/* Port wide control signals */                                                   
#define Thumb_Button_CTL                    (* (reg8 *) Thumb_Button__CTL)
/* Drive Modes */
#define Thumb_Button_DM0                    (* (reg8 *) Thumb_Button__DM0) 
#define Thumb_Button_DM1                    (* (reg8 *) Thumb_Button__DM1)
#define Thumb_Button_DM2                    (* (reg8 *) Thumb_Button__DM2) 
/* Input Buffer Disable Override */
#define Thumb_Button_INP_DIS                (* (reg8 *) Thumb_Button__INP_DIS)
/* LCD Common or Segment Drive */
#define Thumb_Button_LCD_COM_SEG            (* (reg8 *) Thumb_Button__LCD_COM_SEG)
/* Enable Segment LCD */
#define Thumb_Button_LCD_EN                 (* (reg8 *) Thumb_Button__LCD_EN)
/* Slew Rate Control */
#define Thumb_Button_SLW                    (* (reg8 *) Thumb_Button__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Thumb_Button_PRTDSI__CAPS_SEL       (* (reg8 *) Thumb_Button__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Thumb_Button_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Thumb_Button__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Thumb_Button_PRTDSI__OE_SEL0        (* (reg8 *) Thumb_Button__PRTDSI__OE_SEL0) 
#define Thumb_Button_PRTDSI__OE_SEL1        (* (reg8 *) Thumb_Button__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Thumb_Button_PRTDSI__OUT_SEL0       (* (reg8 *) Thumb_Button__PRTDSI__OUT_SEL0) 
#define Thumb_Button_PRTDSI__OUT_SEL1       (* (reg8 *) Thumb_Button__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Thumb_Button_PRTDSI__SYNC_OUT       (* (reg8 *) Thumb_Button__PRTDSI__SYNC_OUT) 


#if defined(Thumb_Button__INTSTAT)  /* Interrupt Registers */

    #define Thumb_Button_INTSTAT                (* (reg8 *) Thumb_Button__INTSTAT)
    #define Thumb_Button_SNAP                   (* (reg8 *) Thumb_Button__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Thumb_Button_H */


/* [] END OF FILE */
