#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; USBFS_1_arb_int
USBFS_1_arb_int__ES2_PATCH EQU 0
USBFS_1_arb_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBFS_1_arb_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBFS_1_arb_int__INTC_MASK EQU 0x40
USBFS_1_arb_int__INTC_NUMBER EQU 22
USBFS_1_arb_int__INTC_PRIOR_NUM EQU 7
USBFS_1_arb_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR22
USBFS_1_arb_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBFS_1_arb_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBFS_1_arb_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2C)

; USBFS_1_bus_reset
USBFS_1_bus_reset__ES2_PATCH EQU 0
USBFS_1_bus_reset__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBFS_1_bus_reset__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBFS_1_bus_reset__INTC_MASK EQU 0x80
USBFS_1_bus_reset__INTC_NUMBER EQU 23
USBFS_1_bus_reset__INTC_PRIOR_NUM EQU 7
USBFS_1_bus_reset__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR23
USBFS_1_bus_reset__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBFS_1_bus_reset__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBFS_1_bus_reset__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2E)

; USBFS_1_Dm
USBFS_1_Dm__0__MASK EQU 0x80
USBFS_1_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBFS_1_Dm__0__PORT EQU 15
USBFS_1_Dm__0__SHIFT EQU 7
USBFS_1_Dm__AG EQU CYREG_PRT15_AG
USBFS_1_Dm__AMUX EQU CYREG_PRT15_AMUX
USBFS_1_Dm__BIE EQU CYREG_PRT15_BIE
USBFS_1_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBFS_1_Dm__BYP EQU CYREG_PRT15_BYP
USBFS_1_Dm__CTL EQU CYREG_PRT15_CTL
USBFS_1_Dm__DM0 EQU CYREG_PRT15_DM0
USBFS_1_Dm__DM1 EQU CYREG_PRT15_DM1
USBFS_1_Dm__DM2 EQU CYREG_PRT15_DM2
USBFS_1_Dm__DR EQU CYREG_PRT15_DR
USBFS_1_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBFS_1_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBFS_1_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBFS_1_Dm__MASK EQU 0x80
USBFS_1_Dm__PORT EQU 15
USBFS_1_Dm__PRT EQU CYREG_PRT15_PRT
USBFS_1_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBFS_1_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBFS_1_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBFS_1_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBFS_1_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBFS_1_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBFS_1_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBFS_1_Dm__PS EQU CYREG_PRT15_PS
USBFS_1_Dm__SHIFT EQU 7
USBFS_1_Dm__SLW EQU CYREG_PRT15_SLW

; USBFS_1_Dp
USBFS_1_Dp__0__MASK EQU 0x40
USBFS_1_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBFS_1_Dp__0__PORT EQU 15
USBFS_1_Dp__0__SHIFT EQU 6
USBFS_1_Dp__AG EQU CYREG_PRT15_AG
USBFS_1_Dp__AMUX EQU CYREG_PRT15_AMUX
USBFS_1_Dp__BIE EQU CYREG_PRT15_BIE
USBFS_1_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBFS_1_Dp__BYP EQU CYREG_PRT15_BYP
USBFS_1_Dp__CTL EQU CYREG_PRT15_CTL
USBFS_1_Dp__DM0 EQU CYREG_PRT15_DM0
USBFS_1_Dp__DM1 EQU CYREG_PRT15_DM1
USBFS_1_Dp__DM2 EQU CYREG_PRT15_DM2
USBFS_1_Dp__DR EQU CYREG_PRT15_DR
USBFS_1_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBFS_1_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBFS_1_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBFS_1_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBFS_1_Dp__MASK EQU 0x40
USBFS_1_Dp__PORT EQU 15
USBFS_1_Dp__PRT EQU CYREG_PRT15_PRT
USBFS_1_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBFS_1_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBFS_1_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBFS_1_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBFS_1_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBFS_1_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBFS_1_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBFS_1_Dp__PS EQU CYREG_PRT15_PS
USBFS_1_Dp__SHIFT EQU 6
USBFS_1_Dp__SLW EQU CYREG_PRT15_SLW
USBFS_1_Dp__SNAP EQU CYREG_PICU15_SNAP

; USBFS_1_dp_int
USBFS_1_dp_int__ES2_PATCH EQU 0
USBFS_1_dp_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN1
USBFS_1_dp_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD1
USBFS_1_dp_int__INTC_MASK EQU 0x10
USBFS_1_dp_int__INTC_NUMBER EQU 12
USBFS_1_dp_int__INTC_PRIOR_NUM EQU 7
USBFS_1_dp_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR12
USBFS_1_dp_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN1
USBFS_1_dp_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD1
USBFS_1_dp_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x18)

; USBFS_1_ep_0
USBFS_1_ep_0__ES2_PATCH EQU 0
USBFS_1_ep_0__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN3
USBFS_1_ep_0__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD3
USBFS_1_ep_0__INTC_MASK EQU 0x01
USBFS_1_ep_0__INTC_NUMBER EQU 24
USBFS_1_ep_0__INTC_PRIOR_NUM EQU 7
USBFS_1_ep_0__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR24
USBFS_1_ep_0__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN3
USBFS_1_ep_0__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD3
USBFS_1_ep_0__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x30)

; USBFS_1_ep_1
USBFS_1_ep_1__ES2_PATCH EQU 0
USBFS_1_ep_1__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN0
USBFS_1_ep_1__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD0
USBFS_1_ep_1__INTC_MASK EQU 0x01
USBFS_1_ep_1__INTC_NUMBER EQU 0
USBFS_1_ep_1__INTC_PRIOR_NUM EQU 7
USBFS_1_ep_1__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR0
USBFS_1_ep_1__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN0
USBFS_1_ep_1__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD0
USBFS_1_ep_1__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x00)

; USBFS_1_ord_int
USBFS_1_ord_int__ES2_PATCH EQU 0
USBFS_1_ord_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN3
USBFS_1_ord_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD3
USBFS_1_ord_int__INTC_MASK EQU 0x02
USBFS_1_ord_int__INTC_NUMBER EQU 25
USBFS_1_ord_int__INTC_PRIOR_NUM EQU 7
USBFS_1_ord_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR25
USBFS_1_ord_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN3
USBFS_1_ord_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD3
USBFS_1_ord_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x32)

; USBFS_1_sof_int
USBFS_1_sof_int__ES2_PATCH EQU 0
USBFS_1_sof_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBFS_1_sof_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBFS_1_sof_int__INTC_MASK EQU 0x20
USBFS_1_sof_int__INTC_NUMBER EQU 21
USBFS_1_sof_int__INTC_PRIOR_NUM EQU 7
USBFS_1_sof_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR21
USBFS_1_sof_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBFS_1_sof_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBFS_1_sof_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2A)

; USBFS_1_USB
USBFS_1_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBFS_1_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBFS_1_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBFS_1_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBFS_1_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBFS_1_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBFS_1_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBFS_1_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBFS_1_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBFS_1_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBFS_1_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBFS_1_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBFS_1_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBFS_1_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBFS_1_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBFS_1_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBFS_1_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBFS_1_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBFS_1_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBFS_1_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBFS_1_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBFS_1_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBFS_1_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBFS_1_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBFS_1_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBFS_1_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBFS_1_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBFS_1_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBFS_1_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBFS_1_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBFS_1_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBFS_1_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBFS_1_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBFS_1_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBFS_1_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBFS_1_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBFS_1_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBFS_1_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBFS_1_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBFS_1_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBFS_1_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBFS_1_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBFS_1_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBFS_1_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBFS_1_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBFS_1_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBFS_1_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBFS_1_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBFS_1_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBFS_1_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBFS_1_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBFS_1_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBFS_1_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBFS_1_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBFS_1_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBFS_1_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBFS_1_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBFS_1_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBFS_1_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBFS_1_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBFS_1_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBFS_1_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBFS_1_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBFS_1_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBFS_1_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBFS_1_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBFS_1_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBFS_1_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBFS_1_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBFS_1_USB__CR0 EQU CYREG_USB_CR0
USBFS_1_USB__CR1 EQU CYREG_USB_CR1
USBFS_1_USB__CWA EQU CYREG_USB_CWA
USBFS_1_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBFS_1_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBFS_1_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBFS_1_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBFS_1_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBFS_1_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBFS_1_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBFS_1_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBFS_1_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBFS_1_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBFS_1_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBFS_1_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBFS_1_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBFS_1_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBFS_1_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBFS_1_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBFS_1_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBFS_1_USB__OSCLK_DR0 EQU CYREG_USB_OSCLK_DR0
USBFS_1_USB__OSCLK_DR1 EQU CYREG_USB_OSCLK_DR1
USBFS_1_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBFS_1_USB__PM_ACT_MSK EQU 0x01
USBFS_1_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBFS_1_USB__PM_STBY_MSK EQU 0x01
USBFS_1_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBFS_1_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBFS_1_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBFS_1_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBFS_1_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBFS_1_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBFS_1_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBFS_1_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBFS_1_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBFS_1_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBFS_1_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBFS_1_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBFS_1_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBFS_1_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBFS_1_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBFS_1_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBFS_1_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBFS_1_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBFS_1_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBFS_1_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBFS_1_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBFS_1_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBFS_1_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBFS_1_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBFS_1_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBFS_1_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBFS_1_USB__SOF0 EQU CYREG_USB_SOF0
USBFS_1_USB__SOF1 EQU CYREG_USB_SOF1
USBFS_1_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBFS_1_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBFS_1_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1
USBFS_1_USB__USBIO_CR2 EQU CYREG_USB_USBIO_CR2

; X_Input
X_Input__0__MASK EQU 0x01
X_Input__0__PC EQU CYREG_PRT5_PC0
X_Input__0__PORT EQU 5
X_Input__0__SHIFT EQU 0
X_Input__AG EQU CYREG_PRT5_AG
X_Input__AMUX EQU CYREG_PRT5_AMUX
X_Input__BIE EQU CYREG_PRT5_BIE
X_Input__BIT_MASK EQU CYREG_PRT5_BIT_MASK
X_Input__BYP EQU CYREG_PRT5_BYP
X_Input__CTL EQU CYREG_PRT5_CTL
X_Input__DM0 EQU CYREG_PRT5_DM0
X_Input__DM1 EQU CYREG_PRT5_DM1
X_Input__DM2 EQU CYREG_PRT5_DM2
X_Input__DR EQU CYREG_PRT5_DR
X_Input__INP_DIS EQU CYREG_PRT5_INP_DIS
X_Input__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
X_Input__LCD_EN EQU CYREG_PRT5_LCD_EN
X_Input__MASK EQU 0x01
X_Input__PORT EQU 5
X_Input__PRT EQU CYREG_PRT5_PRT
X_Input__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
X_Input__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
X_Input__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
X_Input__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
X_Input__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
X_Input__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
X_Input__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
X_Input__PS EQU CYREG_PRT5_PS
X_Input__SHIFT EQU 0
X_Input__SLW EQU CYREG_PRT5_SLW

; Y_Input
Y_Input__0__MASK EQU 0x02
Y_Input__0__PC EQU CYREG_PRT5_PC1
Y_Input__0__PORT EQU 5
Y_Input__0__SHIFT EQU 1
Y_Input__AG EQU CYREG_PRT5_AG
Y_Input__AMUX EQU CYREG_PRT5_AMUX
Y_Input__BIE EQU CYREG_PRT5_BIE
Y_Input__BIT_MASK EQU CYREG_PRT5_BIT_MASK
Y_Input__BYP EQU CYREG_PRT5_BYP
Y_Input__CTL EQU CYREG_PRT5_CTL
Y_Input__DM0 EQU CYREG_PRT5_DM0
Y_Input__DM1 EQU CYREG_PRT5_DM1
Y_Input__DM2 EQU CYREG_PRT5_DM2
Y_Input__DR EQU CYREG_PRT5_DR
Y_Input__INP_DIS EQU CYREG_PRT5_INP_DIS
Y_Input__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
Y_Input__LCD_EN EQU CYREG_PRT5_LCD_EN
Y_Input__MASK EQU 0x02
Y_Input__PORT EQU 5
Y_Input__PRT EQU CYREG_PRT5_PRT
Y_Input__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
Y_Input__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
Y_Input__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
Y_Input__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
Y_Input__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
Y_Input__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
Y_Input__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
Y_Input__PS EQU CYREG_PRT5_PS
Y_Input__SHIFT EQU 1
Y_Input__SLW EQU CYREG_PRT5_SLW

; Button_A
Button_A__0__MASK EQU 0x10
Button_A__0__PC EQU CYREG_PRT3_PC4
Button_A__0__PORT EQU 3
Button_A__0__SHIFT EQU 4
Button_A__AG EQU CYREG_PRT3_AG
Button_A__AMUX EQU CYREG_PRT3_AMUX
Button_A__BIE EQU CYREG_PRT3_BIE
Button_A__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Button_A__BYP EQU CYREG_PRT3_BYP
Button_A__CTL EQU CYREG_PRT3_CTL
Button_A__DM0 EQU CYREG_PRT3_DM0
Button_A__DM1 EQU CYREG_PRT3_DM1
Button_A__DM2 EQU CYREG_PRT3_DM2
Button_A__DR EQU CYREG_PRT3_DR
Button_A__INP_DIS EQU CYREG_PRT3_INP_DIS
Button_A__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Button_A__LCD_EN EQU CYREG_PRT3_LCD_EN
Button_A__MASK EQU 0x10
Button_A__PORT EQU 3
Button_A__PRT EQU CYREG_PRT3_PRT
Button_A__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Button_A__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Button_A__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Button_A__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Button_A__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Button_A__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Button_A__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Button_A__PS EQU CYREG_PRT3_PS
Button_A__SHIFT EQU 4
Button_A__SLW EQU CYREG_PRT3_SLW

; Button_B
Button_B__0__MASK EQU 0x08
Button_B__0__PC EQU CYREG_PRT3_PC3
Button_B__0__PORT EQU 3
Button_B__0__SHIFT EQU 3
Button_B__AG EQU CYREG_PRT3_AG
Button_B__AMUX EQU CYREG_PRT3_AMUX
Button_B__BIE EQU CYREG_PRT3_BIE
Button_B__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Button_B__BYP EQU CYREG_PRT3_BYP
Button_B__CTL EQU CYREG_PRT3_CTL
Button_B__DM0 EQU CYREG_PRT3_DM0
Button_B__DM1 EQU CYREG_PRT3_DM1
Button_B__DM2 EQU CYREG_PRT3_DM2
Button_B__DR EQU CYREG_PRT3_DR
Button_B__INP_DIS EQU CYREG_PRT3_INP_DIS
Button_B__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Button_B__LCD_EN EQU CYREG_PRT3_LCD_EN
Button_B__MASK EQU 0x08
Button_B__PORT EQU 3
Button_B__PRT EQU CYREG_PRT3_PRT
Button_B__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Button_B__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Button_B__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Button_B__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Button_B__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Button_B__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Button_B__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Button_B__PS EQU CYREG_PRT3_PS
Button_B__SHIFT EQU 3
Button_B__SLW EQU CYREG_PRT3_SLW

; Button_C
Button_C__0__MASK EQU 0x04
Button_C__0__PC EQU CYREG_PRT3_PC2
Button_C__0__PORT EQU 3
Button_C__0__SHIFT EQU 2
Button_C__AG EQU CYREG_PRT3_AG
Button_C__AMUX EQU CYREG_PRT3_AMUX
Button_C__BIE EQU CYREG_PRT3_BIE
Button_C__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Button_C__BYP EQU CYREG_PRT3_BYP
Button_C__CTL EQU CYREG_PRT3_CTL
Button_C__DM0 EQU CYREG_PRT3_DM0
Button_C__DM1 EQU CYREG_PRT3_DM1
Button_C__DM2 EQU CYREG_PRT3_DM2
Button_C__DR EQU CYREG_PRT3_DR
Button_C__INP_DIS EQU CYREG_PRT3_INP_DIS
Button_C__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Button_C__LCD_EN EQU CYREG_PRT3_LCD_EN
Button_C__MASK EQU 0x04
Button_C__PORT EQU 3
Button_C__PRT EQU CYREG_PRT3_PRT
Button_C__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Button_C__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Button_C__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Button_C__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Button_C__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Button_C__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Button_C__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Button_C__PS EQU CYREG_PRT3_PS
Button_C__SHIFT EQU 2
Button_C__SLW EQU CYREG_PRT3_SLW

; Button_D
Button_D__0__MASK EQU 0x02
Button_D__0__PC EQU CYREG_PRT3_PC1
Button_D__0__PORT EQU 3
Button_D__0__SHIFT EQU 1
Button_D__AG EQU CYREG_PRT3_AG
Button_D__AMUX EQU CYREG_PRT3_AMUX
Button_D__BIE EQU CYREG_PRT3_BIE
Button_D__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Button_D__BYP EQU CYREG_PRT3_BYP
Button_D__CTL EQU CYREG_PRT3_CTL
Button_D__DM0 EQU CYREG_PRT3_DM0
Button_D__DM1 EQU CYREG_PRT3_DM1
Button_D__DM2 EQU CYREG_PRT3_DM2
Button_D__DR EQU CYREG_PRT3_DR
Button_D__INP_DIS EQU CYREG_PRT3_INP_DIS
Button_D__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Button_D__LCD_EN EQU CYREG_PRT3_LCD_EN
Button_D__MASK EQU 0x02
Button_D__PORT EQU 3
Button_D__PRT EQU CYREG_PRT3_PRT
Button_D__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Button_D__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Button_D__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Button_D__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Button_D__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Button_D__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Button_D__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Button_D__PS EQU CYREG_PRT3_PS
Button_D__SHIFT EQU 1
Button_D__SLW EQU CYREG_PRT3_SLW

; LCD_Char_1_LCDPort
LCD_Char_1_LCDPort__0__MASK EQU 0x01
LCD_Char_1_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_Char_1_LCDPort__0__PORT EQU 2
LCD_Char_1_LCDPort__0__SHIFT EQU 0
LCD_Char_1_LCDPort__1__MASK EQU 0x02
LCD_Char_1_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_Char_1_LCDPort__1__PORT EQU 2
LCD_Char_1_LCDPort__1__SHIFT EQU 1
LCD_Char_1_LCDPort__2__MASK EQU 0x04
LCD_Char_1_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_Char_1_LCDPort__2__PORT EQU 2
LCD_Char_1_LCDPort__2__SHIFT EQU 2
LCD_Char_1_LCDPort__3__MASK EQU 0x08
LCD_Char_1_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_Char_1_LCDPort__3__PORT EQU 2
LCD_Char_1_LCDPort__3__SHIFT EQU 3
LCD_Char_1_LCDPort__4__MASK EQU 0x10
LCD_Char_1_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_Char_1_LCDPort__4__PORT EQU 2
LCD_Char_1_LCDPort__4__SHIFT EQU 4
LCD_Char_1_LCDPort__5__MASK EQU 0x20
LCD_Char_1_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_Char_1_LCDPort__5__PORT EQU 2
LCD_Char_1_LCDPort__5__SHIFT EQU 5
LCD_Char_1_LCDPort__6__MASK EQU 0x40
LCD_Char_1_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_Char_1_LCDPort__6__PORT EQU 2
LCD_Char_1_LCDPort__6__SHIFT EQU 6
LCD_Char_1_LCDPort__AG EQU CYREG_PRT2_AG
LCD_Char_1_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_Char_1_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_Char_1_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_Char_1_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_Char_1_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_Char_1_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_Char_1_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_Char_1_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_Char_1_LCDPort__DR EQU CYREG_PRT2_DR
LCD_Char_1_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_Char_1_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_Char_1_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_Char_1_LCDPort__MASK EQU 0x7F
LCD_Char_1_LCDPort__PORT EQU 2
LCD_Char_1_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_Char_1_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_Char_1_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_Char_1_LCDPort__PS EQU CYREG_PRT2_PS
LCD_Char_1_LCDPort__SHIFT EQU 0
LCD_Char_1_LCDPort__SLW EQU CYREG_PRT2_SLW

; ADC_DelSig_1_DEC
ADC_DelSig_1_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_1_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_1_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_1_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_1_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_1_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_1_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_1_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_1_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_1_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_1_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_1_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_1_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_1_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_1_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_1_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_1_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_1_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_1_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_1_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_1_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_1_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_1_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_1_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_1_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_1_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_1_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_1_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_1_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

; ADC_DelSig_1_DSM
ADC_DelSig_1_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_1_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_1_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_1_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_1_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_1_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_1_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_1_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_1_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_1_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_1_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_1_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_1_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_1_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_1_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_1_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_1_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_1_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_1_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_1_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_1_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_1_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_1_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_1_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_1_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_1_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_1_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_1_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_1_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_1_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_1_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_1_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_1_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_1_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_1_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_1_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_1_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_1_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_1_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_1_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_1_DSM__TST1 EQU CYREG_DSM0_TST1

; ADC_DelSig_1_Ext_CP_Clk
ADC_DelSig_1_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_1_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_1_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

; ADC_DelSig_1_IRQ
ADC_DelSig_1_IRQ__ES2_PATCH EQU 0
ADC_DelSig_1_IRQ__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN3
ADC_DelSig_1_IRQ__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD3
ADC_DelSig_1_IRQ__INTC_MASK EQU 0x20
ADC_DelSig_1_IRQ__INTC_NUMBER EQU 29
ADC_DelSig_1_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_1_IRQ__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR29
ADC_DelSig_1_IRQ__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN3
ADC_DelSig_1_IRQ__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD3
ADC_DelSig_1_IRQ__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x3A)

; ADC_DelSig_1_theACLK
ADC_DelSig_1_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_DelSig_1_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_DelSig_1_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_DelSig_1_theACLK__INDEX EQU 0x00
ADC_DelSig_1_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_DelSig_1_theACLK__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_DelSig_1_theACLK__PM_STBY_MSK EQU 0x01

; Thumb_Button
Thumb_Button__0__MASK EQU 0x01
Thumb_Button__0__PC EQU CYREG_PRT3_PC0
Thumb_Button__0__PORT EQU 3
Thumb_Button__0__SHIFT EQU 0
Thumb_Button__AG EQU CYREG_PRT3_AG
Thumb_Button__AMUX EQU CYREG_PRT3_AMUX
Thumb_Button__BIE EQU CYREG_PRT3_BIE
Thumb_Button__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Thumb_Button__BYP EQU CYREG_PRT3_BYP
Thumb_Button__CTL EQU CYREG_PRT3_CTL
Thumb_Button__DM0 EQU CYREG_PRT3_DM0
Thumb_Button__DM1 EQU CYREG_PRT3_DM1
Thumb_Button__DM2 EQU CYREG_PRT3_DM2
Thumb_Button__DR EQU CYREG_PRT3_DR
Thumb_Button__INP_DIS EQU CYREG_PRT3_INP_DIS
Thumb_Button__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Thumb_Button__LCD_EN EQU CYREG_PRT3_LCD_EN
Thumb_Button__MASK EQU 0x01
Thumb_Button__PORT EQU 3
Thumb_Button__PRT EQU CYREG_PRT3_PRT
Thumb_Button__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Thumb_Button__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Thumb_Button__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Thumb_Button__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Thumb_Button__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Thumb_Button__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Thumb_Button__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Thumb_Button__PS EQU CYREG_PRT3_PS
Thumb_Button__SHIFT EQU 0
Thumb_Button__SLW EQU CYREG_PRT3_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 48000000
BCLK__BUS_CLK__KHZ EQU 48000
BCLK__BUS_CLK__MHZ EQU 48
CY_PROJECT_NAME LIT 'Joystick'
CY_VERSION LIT 'PSoC Creator  3.2'
CYDEV_CHIP_DIE_GEN4 EQU 2
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 12
CYDEV_CHIP_DIE_PSOC4A EQU 5
CYDEV_CHIP_DIE_PSOC5LP EQU 11
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 5
CYDEV_CHIP_MEMBER_4C EQU 9
CYDEV_CHIP_MEMBER_4D EQU 3
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 6
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4L EQU 8
CYDEV_CHIP_MEMBER_4M EQU 7
CYDEV_CHIP_MEMBER_5A EQU 11
CYDEV_CHIP_MEMBER_5B EQU 10
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_GEN4_ES EQU 17
CYDEV_CHIP_REV_GEN4_ES2 EQU 33
CYDEV_CHIP_REV_GEN4_PRODUCTION EQU 17
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 0
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 0
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA LIT '5.0'
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD LIT '5.0'
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 LIT '5.0'
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 LIT '5.0'
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 LIT '5.0'
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 LIT '5.0'
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 LIT '5.0'
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 LIT '5.0'
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 LIT '5.0'
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 LIT '5.0'
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_DP8051_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */