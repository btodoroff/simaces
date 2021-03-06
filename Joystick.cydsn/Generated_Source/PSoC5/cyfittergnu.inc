.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Pin_SS */
.set Pin_SS__0__MASK, 0x04
.set Pin_SS__0__PC, CYREG_PRT3_PC2
.set Pin_SS__0__PORT, 3
.set Pin_SS__0__SHIFT, 2
.set Pin_SS__AG, CYREG_PRT3_AG
.set Pin_SS__AMUX, CYREG_PRT3_AMUX
.set Pin_SS__BIE, CYREG_PRT3_BIE
.set Pin_SS__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Pin_SS__BYP, CYREG_PRT3_BYP
.set Pin_SS__CTL, CYREG_PRT3_CTL
.set Pin_SS__DM0, CYREG_PRT3_DM0
.set Pin_SS__DM1, CYREG_PRT3_DM1
.set Pin_SS__DM2, CYREG_PRT3_DM2
.set Pin_SS__DR, CYREG_PRT3_DR
.set Pin_SS__INP_DIS, CYREG_PRT3_INP_DIS
.set Pin_SS__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Pin_SS__LCD_EN, CYREG_PRT3_LCD_EN
.set Pin_SS__MASK, 0x04
.set Pin_SS__PORT, 3
.set Pin_SS__PRT, CYREG_PRT3_PRT
.set Pin_SS__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Pin_SS__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Pin_SS__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Pin_SS__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Pin_SS__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Pin_SS__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Pin_SS__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Pin_SS__PS, CYREG_PRT3_PS
.set Pin_SS__SHIFT, 2
.set Pin_SS__SLW, CYREG_PRT3_SLW

/* Pin_LED */
.set Pin_LED__0__MASK, 0x02
.set Pin_LED__0__PC, CYREG_PRT2_PC1
.set Pin_LED__0__PORT, 2
.set Pin_LED__0__SHIFT, 1
.set Pin_LED__AG, CYREG_PRT2_AG
.set Pin_LED__AMUX, CYREG_PRT2_AMUX
.set Pin_LED__BIE, CYREG_PRT2_BIE
.set Pin_LED__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Pin_LED__BYP, CYREG_PRT2_BYP
.set Pin_LED__CTL, CYREG_PRT2_CTL
.set Pin_LED__DM0, CYREG_PRT2_DM0
.set Pin_LED__DM1, CYREG_PRT2_DM1
.set Pin_LED__DM2, CYREG_PRT2_DM2
.set Pin_LED__DR, CYREG_PRT2_DR
.set Pin_LED__INP_DIS, CYREG_PRT2_INP_DIS
.set Pin_LED__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Pin_LED__LCD_EN, CYREG_PRT2_LCD_EN
.set Pin_LED__MASK, 0x02
.set Pin_LED__PORT, 2
.set Pin_LED__PRT, CYREG_PRT2_PRT
.set Pin_LED__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Pin_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Pin_LED__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Pin_LED__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Pin_LED__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Pin_LED__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Pin_LED__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Pin_LED__PS, CYREG_PRT2_PS
.set Pin_LED__SHIFT, 1
.set Pin_LED__SLW, CYREG_PRT2_SLW

/* USBFS_1_arb_int */
.set USBFS_1_arb_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_arb_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_arb_int__INTC_MASK, 0x400000
.set USBFS_1_arb_int__INTC_NUMBER, 22
.set USBFS_1_arb_int__INTC_PRIOR_NUM, 7
.set USBFS_1_arb_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_22
.set USBFS_1_arb_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_arb_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_bus_reset */
.set USBFS_1_bus_reset__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_bus_reset__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_bus_reset__INTC_MASK, 0x800000
.set USBFS_1_bus_reset__INTC_NUMBER, 23
.set USBFS_1_bus_reset__INTC_PRIOR_NUM, 7
.set USBFS_1_bus_reset__INTC_PRIOR_REG, CYREG_NVIC_PRI_23
.set USBFS_1_bus_reset__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_bus_reset__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_Dm */
.set USBFS_1_Dm__0__MASK, 0x80
.set USBFS_1_Dm__0__PC, CYREG_IO_PC_PRT15_7_6_PC1
.set USBFS_1_Dm__0__PORT, 15
.set USBFS_1_Dm__0__SHIFT, 7
.set USBFS_1_Dm__AG, CYREG_PRT15_AG
.set USBFS_1_Dm__AMUX, CYREG_PRT15_AMUX
.set USBFS_1_Dm__BIE, CYREG_PRT15_BIE
.set USBFS_1_Dm__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_1_Dm__BYP, CYREG_PRT15_BYP
.set USBFS_1_Dm__CTL, CYREG_PRT15_CTL
.set USBFS_1_Dm__DM0, CYREG_PRT15_DM0
.set USBFS_1_Dm__DM1, CYREG_PRT15_DM1
.set USBFS_1_Dm__DM2, CYREG_PRT15_DM2
.set USBFS_1_Dm__DR, CYREG_PRT15_DR
.set USBFS_1_Dm__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_1_Dm__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_1_Dm__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_1_Dm__MASK, 0x80
.set USBFS_1_Dm__PORT, 15
.set USBFS_1_Dm__PRT, CYREG_PRT15_PRT
.set USBFS_1_Dm__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_1_Dm__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_1_Dm__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_1_Dm__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_1_Dm__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_1_Dm__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_1_Dm__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_1_Dm__PS, CYREG_PRT15_PS
.set USBFS_1_Dm__SHIFT, 7
.set USBFS_1_Dm__SLW, CYREG_PRT15_SLW

/* USBFS_1_Dp */
.set USBFS_1_Dp__0__MASK, 0x40
.set USBFS_1_Dp__0__PC, CYREG_IO_PC_PRT15_7_6_PC0
.set USBFS_1_Dp__0__PORT, 15
.set USBFS_1_Dp__0__SHIFT, 6
.set USBFS_1_Dp__AG, CYREG_PRT15_AG
.set USBFS_1_Dp__AMUX, CYREG_PRT15_AMUX
.set USBFS_1_Dp__BIE, CYREG_PRT15_BIE
.set USBFS_1_Dp__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBFS_1_Dp__BYP, CYREG_PRT15_BYP
.set USBFS_1_Dp__CTL, CYREG_PRT15_CTL
.set USBFS_1_Dp__DM0, CYREG_PRT15_DM0
.set USBFS_1_Dp__DM1, CYREG_PRT15_DM1
.set USBFS_1_Dp__DM2, CYREG_PRT15_DM2
.set USBFS_1_Dp__DR, CYREG_PRT15_DR
.set USBFS_1_Dp__INP_DIS, CYREG_PRT15_INP_DIS
.set USBFS_1_Dp__INTSTAT, CYREG_PICU15_INTSTAT
.set USBFS_1_Dp__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBFS_1_Dp__LCD_EN, CYREG_PRT15_LCD_EN
.set USBFS_1_Dp__MASK, 0x40
.set USBFS_1_Dp__PORT, 15
.set USBFS_1_Dp__PRT, CYREG_PRT15_PRT
.set USBFS_1_Dp__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBFS_1_Dp__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBFS_1_Dp__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBFS_1_Dp__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBFS_1_Dp__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBFS_1_Dp__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBFS_1_Dp__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBFS_1_Dp__PS, CYREG_PRT15_PS
.set USBFS_1_Dp__SHIFT, 6
.set USBFS_1_Dp__SLW, CYREG_PRT15_SLW
.set USBFS_1_Dp__SNAP, CYREG_PICU_15_SNAP_15

/* USBFS_1_dp_int */
.set USBFS_1_dp_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_dp_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_dp_int__INTC_MASK, 0x1000
.set USBFS_1_dp_int__INTC_NUMBER, 12
.set USBFS_1_dp_int__INTC_PRIOR_NUM, 7
.set USBFS_1_dp_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set USBFS_1_dp_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_dp_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_ep_0 */
.set USBFS_1_ep_0__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_ep_0__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_ep_0__INTC_MASK, 0x1000000
.set USBFS_1_ep_0__INTC_NUMBER, 24
.set USBFS_1_ep_0__INTC_PRIOR_NUM, 7
.set USBFS_1_ep_0__INTC_PRIOR_REG, CYREG_NVIC_PRI_24
.set USBFS_1_ep_0__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_ep_0__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_ep_1 */
.set USBFS_1_ep_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_ep_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_ep_1__INTC_MASK, 0x01
.set USBFS_1_ep_1__INTC_NUMBER, 0
.set USBFS_1_ep_1__INTC_PRIOR_NUM, 7
.set USBFS_1_ep_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set USBFS_1_ep_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_ep_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_ord_int */
.set USBFS_1_ord_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_ord_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_ord_int__INTC_MASK, 0x2000000
.set USBFS_1_ord_int__INTC_NUMBER, 25
.set USBFS_1_ord_int__INTC_PRIOR_NUM, 7
.set USBFS_1_ord_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_25
.set USBFS_1_ord_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_ord_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_sof_int */
.set USBFS_1_sof_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBFS_1_sof_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBFS_1_sof_int__INTC_MASK, 0x200000
.set USBFS_1_sof_int__INTC_NUMBER, 21
.set USBFS_1_sof_int__INTC_PRIOR_NUM, 7
.set USBFS_1_sof_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_21
.set USBFS_1_sof_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBFS_1_sof_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* USBFS_1_USB */
.set USBFS_1_USB__ARB_CFG, CYREG_USB_ARB_CFG
.set USBFS_1_USB__ARB_EP1_CFG, CYREG_USB_ARB_EP1_CFG
.set USBFS_1_USB__ARB_EP1_INT_EN, CYREG_USB_ARB_EP1_INT_EN
.set USBFS_1_USB__ARB_EP1_SR, CYREG_USB_ARB_EP1_SR
.set USBFS_1_USB__ARB_EP2_CFG, CYREG_USB_ARB_EP2_CFG
.set USBFS_1_USB__ARB_EP2_INT_EN, CYREG_USB_ARB_EP2_INT_EN
.set USBFS_1_USB__ARB_EP2_SR, CYREG_USB_ARB_EP2_SR
.set USBFS_1_USB__ARB_EP3_CFG, CYREG_USB_ARB_EP3_CFG
.set USBFS_1_USB__ARB_EP3_INT_EN, CYREG_USB_ARB_EP3_INT_EN
.set USBFS_1_USB__ARB_EP3_SR, CYREG_USB_ARB_EP3_SR
.set USBFS_1_USB__ARB_EP4_CFG, CYREG_USB_ARB_EP4_CFG
.set USBFS_1_USB__ARB_EP4_INT_EN, CYREG_USB_ARB_EP4_INT_EN
.set USBFS_1_USB__ARB_EP4_SR, CYREG_USB_ARB_EP4_SR
.set USBFS_1_USB__ARB_EP5_CFG, CYREG_USB_ARB_EP5_CFG
.set USBFS_1_USB__ARB_EP5_INT_EN, CYREG_USB_ARB_EP5_INT_EN
.set USBFS_1_USB__ARB_EP5_SR, CYREG_USB_ARB_EP5_SR
.set USBFS_1_USB__ARB_EP6_CFG, CYREG_USB_ARB_EP6_CFG
.set USBFS_1_USB__ARB_EP6_INT_EN, CYREG_USB_ARB_EP6_INT_EN
.set USBFS_1_USB__ARB_EP6_SR, CYREG_USB_ARB_EP6_SR
.set USBFS_1_USB__ARB_EP7_CFG, CYREG_USB_ARB_EP7_CFG
.set USBFS_1_USB__ARB_EP7_INT_EN, CYREG_USB_ARB_EP7_INT_EN
.set USBFS_1_USB__ARB_EP7_SR, CYREG_USB_ARB_EP7_SR
.set USBFS_1_USB__ARB_EP8_CFG, CYREG_USB_ARB_EP8_CFG
.set USBFS_1_USB__ARB_EP8_INT_EN, CYREG_USB_ARB_EP8_INT_EN
.set USBFS_1_USB__ARB_EP8_SR, CYREG_USB_ARB_EP8_SR
.set USBFS_1_USB__ARB_INT_EN, CYREG_USB_ARB_INT_EN
.set USBFS_1_USB__ARB_INT_SR, CYREG_USB_ARB_INT_SR
.set USBFS_1_USB__ARB_RW1_DR, CYREG_USB_ARB_RW1_DR
.set USBFS_1_USB__ARB_RW1_RA, CYREG_USB_ARB_RW1_RA
.set USBFS_1_USB__ARB_RW1_RA_MSB, CYREG_USB_ARB_RW1_RA_MSB
.set USBFS_1_USB__ARB_RW1_WA, CYREG_USB_ARB_RW1_WA
.set USBFS_1_USB__ARB_RW1_WA_MSB, CYREG_USB_ARB_RW1_WA_MSB
.set USBFS_1_USB__ARB_RW2_DR, CYREG_USB_ARB_RW2_DR
.set USBFS_1_USB__ARB_RW2_RA, CYREG_USB_ARB_RW2_RA
.set USBFS_1_USB__ARB_RW2_RA_MSB, CYREG_USB_ARB_RW2_RA_MSB
.set USBFS_1_USB__ARB_RW2_WA, CYREG_USB_ARB_RW2_WA
.set USBFS_1_USB__ARB_RW2_WA_MSB, CYREG_USB_ARB_RW2_WA_MSB
.set USBFS_1_USB__ARB_RW3_DR, CYREG_USB_ARB_RW3_DR
.set USBFS_1_USB__ARB_RW3_RA, CYREG_USB_ARB_RW3_RA
.set USBFS_1_USB__ARB_RW3_RA_MSB, CYREG_USB_ARB_RW3_RA_MSB
.set USBFS_1_USB__ARB_RW3_WA, CYREG_USB_ARB_RW3_WA
.set USBFS_1_USB__ARB_RW3_WA_MSB, CYREG_USB_ARB_RW3_WA_MSB
.set USBFS_1_USB__ARB_RW4_DR, CYREG_USB_ARB_RW4_DR
.set USBFS_1_USB__ARB_RW4_RA, CYREG_USB_ARB_RW4_RA
.set USBFS_1_USB__ARB_RW4_RA_MSB, CYREG_USB_ARB_RW4_RA_MSB
.set USBFS_1_USB__ARB_RW4_WA, CYREG_USB_ARB_RW4_WA
.set USBFS_1_USB__ARB_RW4_WA_MSB, CYREG_USB_ARB_RW4_WA_MSB
.set USBFS_1_USB__ARB_RW5_DR, CYREG_USB_ARB_RW5_DR
.set USBFS_1_USB__ARB_RW5_RA, CYREG_USB_ARB_RW5_RA
.set USBFS_1_USB__ARB_RW5_RA_MSB, CYREG_USB_ARB_RW5_RA_MSB
.set USBFS_1_USB__ARB_RW5_WA, CYREG_USB_ARB_RW5_WA
.set USBFS_1_USB__ARB_RW5_WA_MSB, CYREG_USB_ARB_RW5_WA_MSB
.set USBFS_1_USB__ARB_RW6_DR, CYREG_USB_ARB_RW6_DR
.set USBFS_1_USB__ARB_RW6_RA, CYREG_USB_ARB_RW6_RA
.set USBFS_1_USB__ARB_RW6_RA_MSB, CYREG_USB_ARB_RW6_RA_MSB
.set USBFS_1_USB__ARB_RW6_WA, CYREG_USB_ARB_RW6_WA
.set USBFS_1_USB__ARB_RW6_WA_MSB, CYREG_USB_ARB_RW6_WA_MSB
.set USBFS_1_USB__ARB_RW7_DR, CYREG_USB_ARB_RW7_DR
.set USBFS_1_USB__ARB_RW7_RA, CYREG_USB_ARB_RW7_RA
.set USBFS_1_USB__ARB_RW7_RA_MSB, CYREG_USB_ARB_RW7_RA_MSB
.set USBFS_1_USB__ARB_RW7_WA, CYREG_USB_ARB_RW7_WA
.set USBFS_1_USB__ARB_RW7_WA_MSB, CYREG_USB_ARB_RW7_WA_MSB
.set USBFS_1_USB__ARB_RW8_DR, CYREG_USB_ARB_RW8_DR
.set USBFS_1_USB__ARB_RW8_RA, CYREG_USB_ARB_RW8_RA
.set USBFS_1_USB__ARB_RW8_RA_MSB, CYREG_USB_ARB_RW8_RA_MSB
.set USBFS_1_USB__ARB_RW8_WA, CYREG_USB_ARB_RW8_WA
.set USBFS_1_USB__ARB_RW8_WA_MSB, CYREG_USB_ARB_RW8_WA_MSB
.set USBFS_1_USB__BUF_SIZE, CYREG_USB_BUF_SIZE
.set USBFS_1_USB__BUS_RST_CNT, CYREG_USB_BUS_RST_CNT
.set USBFS_1_USB__CR0, CYREG_USB_CR0
.set USBFS_1_USB__CR1, CYREG_USB_CR1
.set USBFS_1_USB__CWA, CYREG_USB_CWA
.set USBFS_1_USB__CWA_MSB, CYREG_USB_CWA_MSB
.set USBFS_1_USB__DMA_THRES, CYREG_USB_DMA_THRES
.set USBFS_1_USB__DMA_THRES_MSB, CYREG_USB_DMA_THRES_MSB
.set USBFS_1_USB__DYN_RECONFIG, CYREG_USB_DYN_RECONFIG
.set USBFS_1_USB__EP_ACTIVE, CYREG_USB_EP_ACTIVE
.set USBFS_1_USB__EP_TYPE, CYREG_USB_EP_TYPE
.set USBFS_1_USB__EP0_CNT, CYREG_USB_EP0_CNT
.set USBFS_1_USB__EP0_CR, CYREG_USB_EP0_CR
.set USBFS_1_USB__EP0_DR0, CYREG_USB_EP0_DR0
.set USBFS_1_USB__EP0_DR1, CYREG_USB_EP0_DR1
.set USBFS_1_USB__EP0_DR2, CYREG_USB_EP0_DR2
.set USBFS_1_USB__EP0_DR3, CYREG_USB_EP0_DR3
.set USBFS_1_USB__EP0_DR4, CYREG_USB_EP0_DR4
.set USBFS_1_USB__EP0_DR5, CYREG_USB_EP0_DR5
.set USBFS_1_USB__EP0_DR6, CYREG_USB_EP0_DR6
.set USBFS_1_USB__EP0_DR7, CYREG_USB_EP0_DR7
.set USBFS_1_USB__MEM_DATA, CYREG_USB_MEM_DATA_MBASE
.set USBFS_1_USB__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set USBFS_1_USB__PM_ACT_MSK, 0x01
.set USBFS_1_USB__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set USBFS_1_USB__PM_STBY_MSK, 0x01
.set USBFS_1_USB__SIE_EP_INT_EN, CYREG_USB_SIE_EP_INT_EN
.set USBFS_1_USB__SIE_EP_INT_SR, CYREG_USB_SIE_EP_INT_SR
.set USBFS_1_USB__SIE_EP1_CNT0, CYREG_USB_SIE_EP1_CNT0
.set USBFS_1_USB__SIE_EP1_CNT1, CYREG_USB_SIE_EP1_CNT1
.set USBFS_1_USB__SIE_EP1_CR0, CYREG_USB_SIE_EP1_CR0
.set USBFS_1_USB__SIE_EP2_CNT0, CYREG_USB_SIE_EP2_CNT0
.set USBFS_1_USB__SIE_EP2_CNT1, CYREG_USB_SIE_EP2_CNT1
.set USBFS_1_USB__SIE_EP2_CR0, CYREG_USB_SIE_EP2_CR0
.set USBFS_1_USB__SIE_EP3_CNT0, CYREG_USB_SIE_EP3_CNT0
.set USBFS_1_USB__SIE_EP3_CNT1, CYREG_USB_SIE_EP3_CNT1
.set USBFS_1_USB__SIE_EP3_CR0, CYREG_USB_SIE_EP3_CR0
.set USBFS_1_USB__SIE_EP4_CNT0, CYREG_USB_SIE_EP4_CNT0
.set USBFS_1_USB__SIE_EP4_CNT1, CYREG_USB_SIE_EP4_CNT1
.set USBFS_1_USB__SIE_EP4_CR0, CYREG_USB_SIE_EP4_CR0
.set USBFS_1_USB__SIE_EP5_CNT0, CYREG_USB_SIE_EP5_CNT0
.set USBFS_1_USB__SIE_EP5_CNT1, CYREG_USB_SIE_EP5_CNT1
.set USBFS_1_USB__SIE_EP5_CR0, CYREG_USB_SIE_EP5_CR0
.set USBFS_1_USB__SIE_EP6_CNT0, CYREG_USB_SIE_EP6_CNT0
.set USBFS_1_USB__SIE_EP6_CNT1, CYREG_USB_SIE_EP6_CNT1
.set USBFS_1_USB__SIE_EP6_CR0, CYREG_USB_SIE_EP6_CR0
.set USBFS_1_USB__SIE_EP7_CNT0, CYREG_USB_SIE_EP7_CNT0
.set USBFS_1_USB__SIE_EP7_CNT1, CYREG_USB_SIE_EP7_CNT1
.set USBFS_1_USB__SIE_EP7_CR0, CYREG_USB_SIE_EP7_CR0
.set USBFS_1_USB__SIE_EP8_CNT0, CYREG_USB_SIE_EP8_CNT0
.set USBFS_1_USB__SIE_EP8_CNT1, CYREG_USB_SIE_EP8_CNT1
.set USBFS_1_USB__SIE_EP8_CR0, CYREG_USB_SIE_EP8_CR0
.set USBFS_1_USB__SOF0, CYREG_USB_SOF0
.set USBFS_1_USB__SOF1, CYREG_USB_SOF1
.set USBFS_1_USB__USB_CLK_EN, CYREG_USB_USB_CLK_EN
.set USBFS_1_USB__USBIO_CR0, CYREG_USB_USBIO_CR0
.set USBFS_1_USB__USBIO_CR1, CYREG_USB_USBIO_CR1

/* Button_A */
.set Button_A__0__MASK, 0x04
.set Button_A__0__PC, CYREG_PRT2_PC2
.set Button_A__0__PORT, 2
.set Button_A__0__SHIFT, 2
.set Button_A__AG, CYREG_PRT2_AG
.set Button_A__AMUX, CYREG_PRT2_AMUX
.set Button_A__BIE, CYREG_PRT2_BIE
.set Button_A__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Button_A__BYP, CYREG_PRT2_BYP
.set Button_A__CTL, CYREG_PRT2_CTL
.set Button_A__DM0, CYREG_PRT2_DM0
.set Button_A__DM1, CYREG_PRT2_DM1
.set Button_A__DM2, CYREG_PRT2_DM2
.set Button_A__DR, CYREG_PRT2_DR
.set Button_A__INP_DIS, CYREG_PRT2_INP_DIS
.set Button_A__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Button_A__LCD_EN, CYREG_PRT2_LCD_EN
.set Button_A__MASK, 0x04
.set Button_A__PORT, 2
.set Button_A__PRT, CYREG_PRT2_PRT
.set Button_A__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Button_A__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Button_A__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Button_A__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Button_A__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Button_A__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Button_A__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Button_A__PS, CYREG_PRT2_PS
.set Button_A__SHIFT, 2
.set Button_A__SLW, CYREG_PRT2_SLW

/* Pin_SCLK */
.set Pin_SCLK__0__MASK, 0x02
.set Pin_SCLK__0__PC, CYREG_PRT3_PC1
.set Pin_SCLK__0__PORT, 3
.set Pin_SCLK__0__SHIFT, 1
.set Pin_SCLK__AG, CYREG_PRT3_AG
.set Pin_SCLK__AMUX, CYREG_PRT3_AMUX
.set Pin_SCLK__BIE, CYREG_PRT3_BIE
.set Pin_SCLK__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Pin_SCLK__BYP, CYREG_PRT3_BYP
.set Pin_SCLK__CTL, CYREG_PRT3_CTL
.set Pin_SCLK__DM0, CYREG_PRT3_DM0
.set Pin_SCLK__DM1, CYREG_PRT3_DM1
.set Pin_SCLK__DM2, CYREG_PRT3_DM2
.set Pin_SCLK__DR, CYREG_PRT3_DR
.set Pin_SCLK__INP_DIS, CYREG_PRT3_INP_DIS
.set Pin_SCLK__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Pin_SCLK__LCD_EN, CYREG_PRT3_LCD_EN
.set Pin_SCLK__MASK, 0x02
.set Pin_SCLK__PORT, 3
.set Pin_SCLK__PRT, CYREG_PRT3_PRT
.set Pin_SCLK__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Pin_SCLK__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Pin_SCLK__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Pin_SCLK__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Pin_SCLK__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Pin_SCLK__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Pin_SCLK__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Pin_SCLK__PS, CYREG_PRT3_PS
.set Pin_SCLK__SHIFT, 1
.set Pin_SCLK__SLW, CYREG_PRT3_SLW

/* Pin_SDATA */
.set Pin_SDATA__0__MASK, 0x08
.set Pin_SDATA__0__PC, CYREG_IO_PC_PRT15_PC3
.set Pin_SDATA__0__PORT, 15
.set Pin_SDATA__0__SHIFT, 3
.set Pin_SDATA__AG, CYREG_PRT15_AG
.set Pin_SDATA__AMUX, CYREG_PRT15_AMUX
.set Pin_SDATA__BIE, CYREG_PRT15_BIE
.set Pin_SDATA__BIT_MASK, CYREG_PRT15_BIT_MASK
.set Pin_SDATA__BYP, CYREG_PRT15_BYP
.set Pin_SDATA__CTL, CYREG_PRT15_CTL
.set Pin_SDATA__DM0, CYREG_PRT15_DM0
.set Pin_SDATA__DM1, CYREG_PRT15_DM1
.set Pin_SDATA__DM2, CYREG_PRT15_DM2
.set Pin_SDATA__DR, CYREG_PRT15_DR
.set Pin_SDATA__INP_DIS, CYREG_PRT15_INP_DIS
.set Pin_SDATA__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set Pin_SDATA__LCD_EN, CYREG_PRT15_LCD_EN
.set Pin_SDATA__MASK, 0x08
.set Pin_SDATA__PORT, 15
.set Pin_SDATA__PRT, CYREG_PRT15_PRT
.set Pin_SDATA__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set Pin_SDATA__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set Pin_SDATA__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set Pin_SDATA__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set Pin_SDATA__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set Pin_SDATA__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set Pin_SDATA__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set Pin_SDATA__PS, CYREG_PRT15_PS
.set Pin_SDATA__SHIFT, 3
.set Pin_SDATA__SLW, CYREG_PRT15_SLW

/* SPI_MAX7221_BSPIM */
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB05_06_MSK
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB05_06_MSK
.set SPI_MAX7221_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set SPI_MAX7221_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set SPI_MAX7221_BSPIM_BitCounter__CONTROL_REG, CYREG_B1_UDB05_CTL
.set SPI_MAX7221_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B1_UDB05_ST_CTL
.set SPI_MAX7221_BSPIM_BitCounter__COUNT_REG, CYREG_B1_UDB05_CTL
.set SPI_MAX7221_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B1_UDB05_ST_CTL
.set SPI_MAX7221_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_BitCounter__PERIOD_REG, CYREG_B1_UDB05_MSK
.set SPI_MAX7221_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB05_06_ST
.set SPI_MAX7221_BSPIM_BitCounter_ST__MASK_REG, CYREG_B1_UDB05_MSK
.set SPI_MAX7221_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB05_ST_CTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB05_ST_CTL
.set SPI_MAX7221_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B1_UDB05_ST
.set SPI_MAX7221_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB06_07_ACTL
.set SPI_MAX7221_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B1_UDB06_07_ST
.set SPI_MAX7221_BSPIM_RxStsReg__4__MASK, 0x10
.set SPI_MAX7221_BSPIM_RxStsReg__4__POS, 4
.set SPI_MAX7221_BSPIM_RxStsReg__5__MASK, 0x20
.set SPI_MAX7221_BSPIM_RxStsReg__5__POS, 5
.set SPI_MAX7221_BSPIM_RxStsReg__6__MASK, 0x40
.set SPI_MAX7221_BSPIM_RxStsReg__6__POS, 6
.set SPI_MAX7221_BSPIM_RxStsReg__MASK, 0x70
.set SPI_MAX7221_BSPIM_RxStsReg__MASK_REG, CYREG_B1_UDB06_MSK
.set SPI_MAX7221_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B1_UDB06_ACTL
.set SPI_MAX7221_BSPIM_RxStsReg__STATUS_REG, CYREG_B1_UDB06_ST
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_A0_REG, CYREG_B1_UDB04_05_A0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_A1_REG, CYREG_B1_UDB04_05_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_D0_REG, CYREG_B1_UDB04_05_D0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_D1_REG, CYREG_B1_UDB04_05_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_F0_REG, CYREG_B1_UDB04_05_F0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__16BIT_F1_REG, CYREG_B1_UDB04_05_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__A0_A1_REG, CYREG_B1_UDB04_A0_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__A0_REG, CYREG_B1_UDB04_A0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__A1_REG, CYREG_B1_UDB04_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__D0_D1_REG, CYREG_B1_UDB04_D0_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__D0_REG, CYREG_B1_UDB04_D0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__D1_REG, CYREG_B1_UDB04_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__F0_F1_REG, CYREG_B1_UDB04_F0_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__F0_REG, CYREG_B1_UDB04_F0
.set SPI_MAX7221_BSPIM_sR16_Dp_u0__F1_REG, CYREG_B1_UDB04_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_A0_REG, CYREG_B1_UDB05_06_A0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_A1_REG, CYREG_B1_UDB05_06_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_D0_REG, CYREG_B1_UDB05_06_D0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_D1_REG, CYREG_B1_UDB05_06_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_F0_REG, CYREG_B1_UDB05_06_F0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__16BIT_F1_REG, CYREG_B1_UDB05_06_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__A0_A1_REG, CYREG_B1_UDB05_A0_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__A0_REG, CYREG_B1_UDB05_A0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__A1_REG, CYREG_B1_UDB05_A1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__D0_D1_REG, CYREG_B1_UDB05_D0_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__D0_REG, CYREG_B1_UDB05_D0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__D1_REG, CYREG_B1_UDB05_D1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__F0_F1_REG, CYREG_B1_UDB05_F0_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__F0_REG, CYREG_B1_UDB05_F0
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__F1_REG, CYREG_B1_UDB05_F1
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_sR16_Dp_u1__PER_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set SPI_MAX7221_BSPIM_TxStsReg__0__MASK, 0x01
.set SPI_MAX7221_BSPIM_TxStsReg__0__POS, 0
.set SPI_MAX7221_BSPIM_TxStsReg__1__MASK, 0x02
.set SPI_MAX7221_BSPIM_TxStsReg__1__POS, 1
.set SPI_MAX7221_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set SPI_MAX7221_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B1_UDB04_05_ST
.set SPI_MAX7221_BSPIM_TxStsReg__2__MASK, 0x04
.set SPI_MAX7221_BSPIM_TxStsReg__2__POS, 2
.set SPI_MAX7221_BSPIM_TxStsReg__3__MASK, 0x08
.set SPI_MAX7221_BSPIM_TxStsReg__3__POS, 3
.set SPI_MAX7221_BSPIM_TxStsReg__4__MASK, 0x10
.set SPI_MAX7221_BSPIM_TxStsReg__4__POS, 4
.set SPI_MAX7221_BSPIM_TxStsReg__MASK, 0x1F
.set SPI_MAX7221_BSPIM_TxStsReg__MASK_REG, CYREG_B1_UDB04_MSK
.set SPI_MAX7221_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set SPI_MAX7221_BSPIM_TxStsReg__STATUS_REG, CYREG_B1_UDB04_ST

/* SPI_MAX7221_IntClock */
.set SPI_MAX7221_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set SPI_MAX7221_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set SPI_MAX7221_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set SPI_MAX7221_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set SPI_MAX7221_IntClock__INDEX, 0x00
.set SPI_MAX7221_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set SPI_MAX7221_IntClock__PM_ACT_MSK, 0x01
.set SPI_MAX7221_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set SPI_MAX7221_IntClock__PM_STBY_MSK, 0x01

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 48000000
.set BCLK__BUS_CLK__KHZ, 48000
.set BCLK__BUS_CLK__MHZ, 48
.set CYDEV_CHIP_DIE_GEN4, 2
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 12
.set CYDEV_CHIP_DIE_PSOC4A, 5
.set CYDEV_CHIP_DIE_PSOC5LP, 11
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 5
.set CYDEV_CHIP_MEMBER_4C, 9
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 6
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4L, 8
.set CYDEV_CHIP_MEMBER_4M, 7
.set CYDEV_CHIP_MEMBER_5A, 11
.set CYDEV_CHIP_MEMBER_5B, 10
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_GEN4_ES, 17
.set CYDEV_CHIP_REV_GEN4_ES2, 33
.set CYDEV_CHIP_REV_GEN4_PRODUCTION, 17
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 0
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 0
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP, 1
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
