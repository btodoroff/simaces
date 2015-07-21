/*******************************************************************************
* File Name: Button_C.h  
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

#if !defined(CY_PINS_Button_C_H) /* Pins Button_C_H */
#define CY_PINS_Button_C_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_C_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Button_C_Write(uint8 value) ;
void    Button_C_SetDriveMode(uint8 mode) ;
uint8   Button_C_ReadDataReg(void) ;
uint8   Button_C_Read(void) ;
uint8   Button_C_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Button_C_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Button_C_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Button_C_DM_RES_UP          PIN_DM_RES_UP
#define Button_C_DM_RES_DWN         PIN_DM_RES_DWN
#define Button_C_DM_OD_LO           PIN_DM_OD_LO
#define Button_C_DM_OD_HI           PIN_DM_OD_HI
#define Button_C_DM_STRONG          PIN_DM_STRONG
#define Button_C_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Button_C_MASK               Button_C__MASK
#define Button_C_SHIFT              Button_C__SHIFT
#define Button_C_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_C_PS                     (* (reg8 *) Button_C__PS)
/* Data Register */
#define Button_C_DR                     (* (reg8 *) Button_C__DR)
/* Port Number */
#define Button_C_PRT_NUM                (* (reg8 *) Button_C__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_C_AG                     (* (reg8 *) Button_C__AG)                       
/* Analog MUX bux enable */
#define Button_C_AMUX                   (* (reg8 *) Button_C__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_C_BIE                    (* (reg8 *) Button_C__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_C_BIT_MASK               (* (reg8 *) Button_C__BIT_MASK)
/* Bypass Enable */
#define Button_C_BYP                    (* (reg8 *) Button_C__BYP)
/* Port wide control signals */                                                   
#define Button_C_CTL                    (* (reg8 *) Button_C__CTL)
/* Drive Modes */
#define Button_C_DM0                    (* (reg8 *) Button_C__DM0) 
#define Button_C_DM1                    (* (reg8 *) Button_C__DM1)
#define Button_C_DM2                    (* (reg8 *) Button_C__DM2) 
/* Input Buffer Disable Override */
#define Button_C_INP_DIS                (* (reg8 *) Button_C__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_C_LCD_COM_SEG            (* (reg8 *) Button_C__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_C_LCD_EN                 (* (reg8 *) Button_C__LCD_EN)
/* Slew Rate Control */
#define Button_C_SLW                    (* (reg8 *) Button_C__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_C_PRTDSI__CAPS_SEL       (* (reg8 *) Button_C__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_C_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_C__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_C_PRTDSI__OE_SEL0        (* (reg8 *) Button_C__PRTDSI__OE_SEL0) 
#define Button_C_PRTDSI__OE_SEL1        (* (reg8 *) Button_C__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_C_PRTDSI__OUT_SEL0       (* (reg8 *) Button_C__PRTDSI__OUT_SEL0) 
#define Button_C_PRTDSI__OUT_SEL1       (* (reg8 *) Button_C__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_C_PRTDSI__SYNC_OUT       (* (reg8 *) Button_C__PRTDSI__SYNC_OUT) 


#if defined(Button_C__INTSTAT)  /* Interrupt Registers */

    #define Button_C_INTSTAT                (* (reg8 *) Button_C__INTSTAT)
    #define Button_C_SNAP                   (* (reg8 *) Button_C__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Button_C_H */


/* [] END OF FILE */
