/*******************************************************************************
* File Name: Button_B.h  
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

#if !defined(CY_PINS_Button_B_H) /* Pins Button_B_H */
#define CY_PINS_Button_B_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_B_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Button_B_Write(uint8 value) ;
void    Button_B_SetDriveMode(uint8 mode) ;
uint8   Button_B_ReadDataReg(void) ;
uint8   Button_B_Read(void) ;
uint8   Button_B_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Button_B_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Button_B_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Button_B_DM_RES_UP          PIN_DM_RES_UP
#define Button_B_DM_RES_DWN         PIN_DM_RES_DWN
#define Button_B_DM_OD_LO           PIN_DM_OD_LO
#define Button_B_DM_OD_HI           PIN_DM_OD_HI
#define Button_B_DM_STRONG          PIN_DM_STRONG
#define Button_B_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Button_B_MASK               Button_B__MASK
#define Button_B_SHIFT              Button_B__SHIFT
#define Button_B_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_B_PS                     (* (reg8 *) Button_B__PS)
/* Data Register */
#define Button_B_DR                     (* (reg8 *) Button_B__DR)
/* Port Number */
#define Button_B_PRT_NUM                (* (reg8 *) Button_B__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_B_AG                     (* (reg8 *) Button_B__AG)                       
/* Analog MUX bux enable */
#define Button_B_AMUX                   (* (reg8 *) Button_B__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_B_BIE                    (* (reg8 *) Button_B__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_B_BIT_MASK               (* (reg8 *) Button_B__BIT_MASK)
/* Bypass Enable */
#define Button_B_BYP                    (* (reg8 *) Button_B__BYP)
/* Port wide control signals */                                                   
#define Button_B_CTL                    (* (reg8 *) Button_B__CTL)
/* Drive Modes */
#define Button_B_DM0                    (* (reg8 *) Button_B__DM0) 
#define Button_B_DM1                    (* (reg8 *) Button_B__DM1)
#define Button_B_DM2                    (* (reg8 *) Button_B__DM2) 
/* Input Buffer Disable Override */
#define Button_B_INP_DIS                (* (reg8 *) Button_B__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_B_LCD_COM_SEG            (* (reg8 *) Button_B__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_B_LCD_EN                 (* (reg8 *) Button_B__LCD_EN)
/* Slew Rate Control */
#define Button_B_SLW                    (* (reg8 *) Button_B__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_B_PRTDSI__CAPS_SEL       (* (reg8 *) Button_B__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_B_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_B__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_B_PRTDSI__OE_SEL0        (* (reg8 *) Button_B__PRTDSI__OE_SEL0) 
#define Button_B_PRTDSI__OE_SEL1        (* (reg8 *) Button_B__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_B_PRTDSI__OUT_SEL0       (* (reg8 *) Button_B__PRTDSI__OUT_SEL0) 
#define Button_B_PRTDSI__OUT_SEL1       (* (reg8 *) Button_B__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_B_PRTDSI__SYNC_OUT       (* (reg8 *) Button_B__PRTDSI__SYNC_OUT) 


#if defined(Button_B__INTSTAT)  /* Interrupt Registers */

    #define Button_B_INTSTAT                (* (reg8 *) Button_B__INTSTAT)
    #define Button_B_SNAP                   (* (reg8 *) Button_B__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Button_B_H */


/* [] END OF FILE */
