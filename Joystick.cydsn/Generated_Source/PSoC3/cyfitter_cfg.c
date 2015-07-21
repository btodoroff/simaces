/*******************************************************************************
* FILENAME: cyfitter_cfg.c
* 
* PSoC Creator  3.2
*
* DESCRIPTION:
* This file contains device initialization code.
* Except for the user defined sections in CyClockStartupError(), this file should not be modified.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2015 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include "cytypes.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include "CyLib.h"
#include "cyfitter_cfg.h"

#define CY_NEED_CYCLOCKSTARTUPERROR 1


#if defined(__C51__) || defined(__CX51__)
	#define CYPACKED
	#define CYPACKED_ATTR
	#define CYALIGNED
	
    #define CY_CFG_UNUSED
	#define CY_CFG_MEMORY_BARRIER() do { } while (0)



	#define CYMEMZERO(a,c) cymemzero((a),(c))
	#define CYCONFIGCPY(d,s,c) cyconfigcpy((c),(s),(d))
	#define CYCONFIGCPYCODE(d,s,c) cyconfigcpycode((c),(s),(d))
#else
	#error Unsupported toolchain
#endif



/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u

#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode);
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* `#START CyClockStartupError` */

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

    /* `#END` */

    /* If nothing else, stop here since the clocks have not started         */
    /* correctly.                                                           */
    while(1) {}
}
#endif


/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*  Performs the initialization of all of the clocks in the device based on the
*  settings in the Clock tab of the DWR.  This includes enabling the requested
*  clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void ClockSetup(void);
static void ClockSetup(void)
{
	/* CYDEV_CLKDIST_ACFG0_CFG0 Address: CYREG_CLKDIST_ACFG0_CFG0 Size (bytes): 4 */
	static const uint8 CYCODE BS_CYDEV_CLKDIST_ACFG0_CFG0_VAL[] = {
		0x65u, 0x01u, 0x18u, 0x01u};

	uint32 timeout;
	uint8 pllLock;


	/* Configure Digital Clocks based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0), 0x0000u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_DCFG0_CFG0 + 0x2u), 0x50u);

	/* Configure Analog Clocks based on settings from Clock DWR */
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_CLKDIST_ACFG0_CFG0), (const void CYCODE *)(BS_CYDEV_CLKDIST_ACFG0_CFG0_VAL), 4u);

	/* Configure ILO based on settings from Clock DWR */
	CY_SET_REG8((void CYXDATA *)(CYREG_SLOWCLK_ILO_CR0), 0x06u);

	/* Configure IMO based on settings from Clock DWR */
	CY_SET_REG8((void CYXDATA *)(CYREG_FASTCLK_IMO_CR), 0x52u);
	CY_SET_REG8((void CYXDATA *)(CYREG_IMO_TR1), (CY_GET_XTND_REG8((void CYFAR *)CYREG_FLSHID_CUST_TABLES_IMO_USB)));

	/* Configure PLL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_P), 0x0710u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_CFG0), 0x1251u);
	/* Wait up to 250us for the PLL to lock */
	pllLock = 0u;
	for (timeout = 250u / 10u; (timeout > 0u) && (pllLock != 0x03u); timeout--)
	{ 
		pllLock = 0x03u & ((uint8)((uint8)pllLock << 1) | ((CY_GET_REG8((void CYXDATA *)CYREG_FASTCLK_PLL_SR) & 0x01u) >> 0));
		CyDelayCycles(10u * 48u); /* Delay 10us based on 48MHz clock */
	}
	/* If we ran out of time the PLL didn't lock so go to the error function */
	if (timeout == 0u)
	{
		CyClockStartupError(CYCLOCKSTART_PLL_ERROR);
	}

	/* Configure Bus/Master Clock based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x0100u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_MSTR0), 0x07u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_BCFG0), 0x00u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_BCFG2), 0x48u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_MSTR0), 0x00u);

	/* Configure USB Clock based on settings from Clock DWR */
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_UCFG), 0x00u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_LD), 0x02u);
	CY_SET_REG8((void CYXDATA *)(CYREG_CLKDIST_DLY1), 0x04u);

	CY_SET_REG8((void CYXDATA *)(CYREG_PM_ACT_CFG2), ((CY_GET_REG8((void CYXDATA *)CYREG_PM_ACT_CFG2) | 0x01u)));
	CY_SET_REG8((void CYXDATA *)(CYREG_PM_ACT_CFG1), ((CY_GET_REG8((void CYXDATA *)CYREG_PM_ACT_CFG1) | 0x01u)));
	CY_SET_REG8((void CYXDATA *)(CYREG_PM_ACT_CFG0), ((CY_GET_REG8((void CYXDATA *)CYREG_PM_ACT_CFG0) | 0x80u)));
}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
	uint8 bg_xover_inl_trim = CY_GET_XTND_REG8((void CYFAR *)(CYREG_FLSHID_MFG_CFG_BG_XOVER_INL_TRIM + 1u));
	CY_SET_REG8((void CYXDATA *)(CYREG_BG_DFT0), (bg_xover_inl_trim & 0x07u));
	CY_SET_REG8((void CYXDATA *)(CYREG_BG_DFT1), ((bg_xover_inl_trim >> 4) & 0x0Fu));
	CY_SET_REG8((void CYXDATA *)CYREG_DAC1_SW0, 0x01u);
	CY_SET_REG8((void CYXDATA *)CYREG_DSM0_SW0, 0x02u);
	CY_SET_REG8((void CYXDATA *)CYREG_BUS_SW0, 0x02u);
	CY_SET_REG8((void CYXDATA *)CYREG_PUMP_CR0, 0x44u);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage
* crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint8 regValue = CY_GET_REG8((void CYXDATA *)CYREG_PUMP_CR0);
	if (enabled != 0u)
	{
		regValue |= 0x22u;
	}
	else
	{
		regValue &= (uint8)~0x22u;
	}
	CY_SET_REG8((void CYXDATA *)CYREG_PUMP_CR0, regValue);
}

#define CY_AMUX_UNUSED CYREG_BOOST_SR
/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
uint8 CYXDATA * const CYCODE AMux_1__addrTable[4] = {
	(uint8 CYXDATA *)CYREG_PRT5_AG, (uint8 CYXDATA *)CYREG_DAC1_SW0, 
	(uint8 CYXDATA *)CYREG_PRT5_AG, (uint8 CYXDATA *)CY_AMUX_UNUSED, 
};

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
const uint8 CYCODE AMux_1__maskTable[4] = {
	0x01u, 0x02u, 
	0x02u, 0x00u, 
};

/*******************************************************************************
* Function Name: AMux_1_Set
********************************************************************************
* Summary:
*  This function is used to set a particular channel as active on the AMux.
*
* Parameters:  
*   channel - The mux channel input to set as active
*
* Return:
*   void
*
*******************************************************************************/
void AMux_1_Set(uint8 channel)
{
	if (channel < 2)
	{
		channel += channel;
		*AMux_1__addrTable[channel] |= AMux_1__maskTable[channel];
		channel++;
		*AMux_1__addrTable[channel] |= AMux_1__maskTable[channel];
	}
}

/*******************************************************************************
* Function Name: AMux_1_Unset
********************************************************************************
* Summary:
*  This function is used to clear a particular channel from being active on the
*  AMux.
*
* Parameters:  
*   channel - The mux channel input to mark inactive
*
* Return:
*   void
*
*******************************************************************************/
void AMux_1_Unset(uint8 channel)
{
	if (channel < 2)
	{
		channel += channel;
		*AMux_1__addrTable[channel] &= (uint8)~AMux_1__maskTable[channel];
		channel++;
		*AMux_1__addrTable[channel] &= (uint8)~AMux_1__maskTable[channel];
	}
}

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
uint8 CYXDATA * const CYCODE ADC_DelSig_1_AMux__addrTable[2] = {
	(uint8 CYXDATA *)CYREG_DSM0_SW3, 
	(uint8 CYXDATA *)CY_AMUX_UNUSED, 
};

/* This is an implementation detail of the AMux. Code that depends on it may be
   incompatible with other versions of PSoC Creator. */
const uint8 CYCODE ADC_DelSig_1_AMux__maskTable[2] = {
	0x40u, 
	0x00u, 
};

/*******************************************************************************
* Function Name: ADC_DelSig_1_AMux_Set
********************************************************************************
* Summary:
*  This function is used to set a particular channel as active on the AMux.
*
* Parameters:  
*   channel - The mux channel input to set as active
*
* Return:
*   void
*
*******************************************************************************/
void ADC_DelSig_1_AMux_Set(uint8 channel)
{
	if (channel < 2)
	{
		*ADC_DelSig_1_AMux__addrTable[channel] |= ADC_DelSig_1_AMux__maskTable[channel];
	}
}

/*******************************************************************************
* Function Name: ADC_DelSig_1_AMux_Unset
********************************************************************************
* Summary:
*  This function is used to clear a particular channel from being active on the
*  AMux.
*
* Parameters:  
*   channel - The mux channel input to mark inactive
*
* Return:
*   void
*
*******************************************************************************/
void ADC_DelSig_1_AMux_Unset(uint8 channel)
{
	if (channel < 2)
	{
		*ADC_DelSig_1_AMux__addrTable[channel] &= (uint8)~ADC_DelSig_1_AMux__maskTable[channel];
	}
}



/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/

void cyfitter_cfg(void)
{
	/* IOPINS0_8 Address: CYREG_PRT15_DR Size (bytes): 10 */
	static const uint8 CYCODE BS_IOPINS0_8_VAL[] = {
		0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0xC0u, 0x00u};

	/* IOPINS0_2 Address: CYREG_PRT2_DM0 Size (bytes): 8 */
	static const uint8 CYCODE BS_IOPINS0_2_VAL[] = {
		0x00u, 0x7Fu, 0x7Fu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u};

	/* IOPINS0_3 Address: CYREG_PRT3_DM0 Size (bytes): 8 */
	static const uint8 CYCODE BS_IOPINS0_3_VAL[] = {
		0x1Fu, 0x1Fu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u};

	/* IOPINS0_5 Address: CYREG_PRT5_DM0 Size (bytes): 8 */
	static const uint8 CYCODE BS_IOPINS0_5_VAL[] = {
		0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x03u, 0x00u};

	/* Enable/Disable Debug functionality based on settings from System DWR */
	CY_SET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG, (CY_GET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG) | 0x05u));

	{
		static const uint8 CYCODE cfg_byte_table[] = {
			0x16u,
			0x00u, 0x45u, 0x01u, /* Base address 0x004500 */
			/* CYDEV_PICU_INTTYPE_PICU15_BASE */
			0x7Eu, 0x02u, 
			0x00u, 0x52u, 0x02u, /* Base address 0x005200 */
			/* CYDEV_PRTDSI_PRT3_BASE */
			0x1Cu, 0x1Fu, 
			/* CYDEV_PRTDSI_PRT15_BASE */
			0x7Cu, 0x40u, 
			0x01u, 0x09u, 0x01u, /* Base address 0x010900 */
			/* CYDEV_UCFG_B0_P4_ROUTE_BASE + 0x00000080u */
			0xB5u, 0x02u, 
			0x01u, 0x0Au, 0x04u, /* Base address 0x010A00 */
			/* CYDEV_UCFG_B0_P5_U1_BASE */
			0xB8u, 0x02u, 0xBEu, 0x01u, 0xD8u, 0x04u, 0xDFu, 0x01u, 
			0x01u, 0x0Bu, 0x01u, /* Base address 0x010B00 */
			/* CYDEV_UCFG_B0_P5_ROUTE_BASE */
			0x1Du, 0x02u, 
			0x01u, 0x15u, 0x01u, /* Base address 0x011500 */
			/* CYDEV_UCFG_B1_P2_ROUTE_BASE + 0x00000080u */
			0xECu, 0x10u, 
			0x01u, 0x17u, 0x01u, /* Base address 0x011700 */
			/* CYDEV_UCFG_B1_P3_ROUTE_BASE + 0x00000080u */
			0xEEu, 0x08u, 
			0x01u, 0x19u, 0x01u, /* Base address 0x011900 */
			/* CYDEV_UCFG_B1_P4_ROUTE_BASE + 0x00000080u */
			0xEEu, 0x08u, 
			0x01u, 0x1Bu, 0x01u, /* Base address 0x011B00 */
			/* CYDEV_UCFG_B1_P5_ROUTE_BASE + 0x00000080u */
			0xECu, 0x10u, 
			0x01u, 0x40u, 0x02u, /* Base address 0x014000 */
			/* CYDEV_UCFG_DSI0_BASE */
			0x33u, 0x80u, 
			/* CYDEV_UCFG_DSI0_BASE + 0x00000080u */
			0xCCu, 0x10u, 
			0x01u, 0x41u, 0x01u, /* Base address 0x014100 */
			/* CYDEV_UCFG_DSI1_BASE + 0x00000080u */
			0xA7u, 0x80u, 
			0x01u, 0x42u, 0x01u, /* Base address 0x014200 */
			/* CYDEV_UCFG_DSI2_BASE + 0x00000080u */
			0xA7u, 0x80u, 
			0x01u, 0x43u, 0x01u, /* Base address 0x014300 */
			/* CYDEV_UCFG_DSI3_BASE + 0x00000080u */
			0xA7u, 0x80u, 
			0x01u, 0x44u, 0x02u, /* Base address 0x014400 */
			/* CYDEV_UCFG_DSI4_BASE */
			0x7Cu, 0x01u, 
			/* CYDEV_UCFG_DSI4_BASE + 0x00000080u */
			0xDEu, 0x01u, 
			0x01u, 0x45u, 0x01u, /* Base address 0x014500 */
			/* CYDEV_UCFG_DSI5_BASE + 0x00000080u */
			0x94u, 0x01u, 
			0x01u, 0x46u, 0x03u, /* Base address 0x014600 */
			/* CYDEV_UCFG_DSI6_BASE */
			0x45u, 0x08u, 
			/* CYDEV_UCFG_DSI6_BASE + 0x00000080u */
			0x94u, 0x01u, 0xD0u, 0x01u, 
			0x01u, 0x47u, 0x05u, /* Base address 0x014700 */
			/* CYDEV_UCFG_DSI7_BASE */
			0x08u, 0x08u, 
			/* CYDEV_UCFG_DSI7_BASE + 0x00000080u */
			0xA5u, 0x08u, 0xB4u, 0x01u, 0xC2u, 0x08u, 0xECu, 0x08u, 
			0x01u, 0x48u, 0x04u, /* Base address 0x014800 */
			/* CYDEV_UCFG_DSI8_BASE */
			0x25u, 0x10u, 
			/* CYDEV_UCFG_DSI8_BASE + 0x00000080u */
			0xAFu, 0x80u, 0xC8u, 0x20u, 0xEEu, 0x10u, 
			0x01u, 0x49u, 0x01u, /* Base address 0x014900 */
			/* CYDEV_UCFG_DSI9_BASE + 0x00000080u */
			0xB5u, 0x10u, 
			0x01u, 0x4Cu, 0x02u, /* Base address 0x014C00 */
			/* CYDEV_UCFG_DSI12_BASE + 0x00000080u */
			0xA5u, 0x08u, 0xACu, 0x08u, 
			0x01u, 0x4Du, 0x02u, /* Base address 0x014D00 */
			/* CYDEV_UCFG_DSI13_BASE + 0x00000080u */
			0xB5u, 0x08u, 0xECu, 0x08u, 
			0x01u, 0x51u, 0x01u, /* Base address 0x015100 */
			/* CYREG_IDMUX_IRQ_CTL0 */
			0x00u, 0x02u, 
		};
		/* BYTES: 145 */


		CYPACKED typedef struct {
			void CYFAR *address;
			uint16 size;
		} CYPACKED_ATTR cfg_memset_t;

		static const cfg_memset_t CYCODE cfg_memset_list [] = {
			/* address, size */
			{(void CYFAR *)(CYREG_PRT0_DR), 32u},
			{(void CYFAR *)(CYREG_PRT4_DR), 16u},
			{(void CYFAR *)(CYREG_PRT6_DR), 16u},
			{(void CYFAR *)(CYREG_PRT12_DR), 16u},
			{(void CYFAR *)(CYDEV_UCFG_B0_P0_U0_BASE), 4096u},
			{(void CYFAR *)(CYDEV_UCFG_B1_P2_U0_BASE), 2048u},
			{(void CYFAR *)(CYDEV_UCFG_DSI0_BASE), 2560u},
			{(void CYFAR *)(CYDEV_UCFG_DSI12_BASE), 512u},
			{(void CYFAR *)(CYREG_BCTL0_MDCLK_EN), 32u},
		};

		uint8 CYDATA i;

		/* Zero out critical memory blocks before beginning configuration */
		for (i = 0u; i < (sizeof(cfg_memset_list)/sizeof(cfg_memset_list[0])); i++)
		{
			const cfg_memset_t CYCODE * CYDATA ms = &cfg_memset_list[i];
			CYMEMZERO(ms->address, ms->size);
		}

		cfg_write_bytes_code(cfg_byte_table);

		/* Perform normal device configuration. Order is not critical for these items. */
		CY_SET_REG8((void CYXDATA *)(CYREG_DSM0_CR3), 0x0Au);

		/* Enable digital routing */
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL) | 0x02u);
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL) | 0x02u);

		/* Enable UDB array */
		CY_SET_REG8((void CYXDATA *)CYREG_PM_ACT_CFG0, CY_GET_REG8((void CYXDATA *)CYREG_PM_ACT_CFG0) | 0x40u);
		CY_SET_REG8((void CYXDATA *)CYREG_PM_AVAIL_CR2, CY_GET_REG8((void CYXDATA *)CYREG_PM_AVAIL_CR2) | 0x10u);
	}


	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT15_DR), (const void CYCODE *)(BS_IOPINS0_8_VAL), 10u);
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT2_DM0), (const void CYCODE *)(BS_IOPINS0_2_VAL), 8u);
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT3_DM0), (const void CYCODE *)(BS_IOPINS0_3_VAL), 8u);
	CYCONFIGCPYCODE((void CYFAR *)(CYREG_PRT5_DM0), (const void CYCODE *)(BS_IOPINS0_5_VAL), 8u);
	CY_SET_REG8((void CYXDATA *)(CYREG_INTC_CSR_EN), 0x01u);
	/* Switch Boost to the precision bandgap reference from its internal reference */
	CY_SET_REG8((void CYXDATA *)CYREG_BOOST_CR2, (CY_GET_REG8((void CYXDATA *)CYREG_BOOST_CR2) | 0x08u));
	if (CYDEV_CHIP_REV_ACTUAL < 5u)
	{
		CY_SET_REG8((void CYXDATA *)CYREG_PWRSYS_WAKE_TR2, 0x3Au);
	}


	/* Set Flash Cycles based on max possible frequency in case a glitch occurs during ClockSetup(). */
	CY_SET_REG8((void CYXDATA *)(CYREG_CACHE_CR), (((CYDEV_INSTRUCT_CACHE_ENABLED) != 0) ? 0xF1u : 0xC0u));
	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

	/* Configure alternate active mode */
	CYCONFIGCPY((void CYFAR *)CYDEV_PM_STBY_BASE, (const void CYFAR *)CYDEV_PM_ACT_BASE, 14u);
	CY_SET_REG8((void CYXDATA *)CYREG_PM_STBY_CFG0, CY_GET_REG8((void CYXDATA *)CYREG_PM_STBY_CFG0) & (uint8)~0x02u);	/* Disable CPU */
}