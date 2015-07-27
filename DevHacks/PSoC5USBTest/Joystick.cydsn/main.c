
/* Project Description:
 * This project creates a simple USB  device that appears as a USB gamepad on Windows  and can drive LEDs and take in buttons to control X-Plane.
 * Also includes MAX7221 routines for driving LEDs and 7 segment type displays.
 * This project is Opes Source under the  MIT License
***************************************************************************** */

#include <device.h>
#include <stdio.h>

void StartUp (void); 		/* Function prototype for component startup API */
void ReadJoystick (void);   /* Function prototype for reading and altering data for joystick information */
void ReadButtons (void);    /* Function prototype for reading and altering data for button information */
//#define DEVICE_ID 0
#define JOY_ENDPOINT 0x03
#define IN_ENDPOINT 0x04
#define OUT_ENDPOINT 0x05
/* Input and Output Data Buffers */
uint8 IN_Data_Buffer[8];  /* [0] = Button Status, [1..4] = ADC Result, [5..7] = Unused */
uint8 OUT_Data_Buffer[8]; /* [0] = LED State, [1] = PWM Duty Cycle, [2..7] = Unused */

//MAX7221
void MAX7221_StartUp(void);


//static uint16 X_Axis=0, Y_Axis=0;
static int16 X_Data=0, Y_Data=0;
static int8 Joystick_Data[3] = {0, 0, 0}; /*[0] = X-Axis, [1] = Y-Axis, [2] = Buttons */

static unsigned char Buttons = 0x0c;
static uint32 delay = 0;
uint OUT_COUNT = 0;
int main()
{
    StartUp(); 								/* Calls the proper start API for all the components */
	int WhichMessage = 0;

	for(;;)
    {
    	if(USBFS_1_bGetEPAckState(JOY_ENDPOINT)) 	/* Wait for ACK before loading data */
		{
            //ReadJoystick();						/* Calls function to read joystick movement */
    		//ReadButtons();						/* Calls function to monitor button presses */
    		
            if(delay++>100)
            {
                if((Buttons&0x0f) == 0x0A)
                {
                    Buttons = 0x05;
                    Pin_LED_Write(0x01);
                }
                else
                {
                    Buttons = 0x0A;
                    Pin_LED_Write(0x00);
                }
                delay=0;
            }
            //uint8 test = Button_A_Read();
            if(Button_A_Read() == 0)
            {
                Buttons = Buttons | 0x10;
            }
            else
            {
                Buttons = Buttons & 0x0f;
            }
          
    		X_Data = 100-(delay*2);
            Joystick_Data[0] = X_Data;		
    		Joystick_Data[1] = Y_Data;
    		Joystick_Data[2] = Buttons;
    		USBFS_1_LoadInEP(JOY_ENDPOINT, (uint8 *)Joystick_Data, 3); /* Load latest mouse data into EP4 and send to PC */
        }
        
        //End Joystick, start Generic HID
        if(USBFS_1_GetEPState(IN_ENDPOINT) == USBFS_1_IN_BUFFER_EMPTY)
		{
			/* Load data located in IN_Data_Buffer and load it into the IN endpoint */
			//USBFS_LoadEP(IN_ENDPOINT, IN_Data_Buffer, MAX_NUM_BYTES);
			if(WhichMessage == 0)
            {
                USBFS_1_LoadInEP(IN_ENDPOINT, (uint8 *)"Aces   ", 8);
			    WhichMessage++;
            }
            else
            {
                USBFS_1_LoadEP(IN_ENDPOINT, (uint8 *)"High!  ", 8);
			    WhichMessage=0;
            }


            /* Enable the OUT endpoint to recieve data */
			USBFS_1_EnableOutEP(OUT_ENDPOINT);
            		/* Check to see if the OUT Endpoint is full from a recieved transaction. */
    		if(USBFS_1_GetEPState(OUT_ENDPOINT) == USBFS_1_OUT_BUFFER_FULL)
    		{
    			/* Get the number of bytes recieved */
    			OUT_COUNT = USBFS_1_GetEPCount(OUT_ENDPOINT);
    			/* Read the OUT endpoint and store data in OUT_Data_Buffer */
    			USBFS_1_ReadOutEP(OUT_ENDPOINT, OUT_Data_Buffer, OUT_COUNT);
    			/* Re-enable OUT endpoint */
    			USBFS_1_EnableOutEP(OUT_ENDPOINT);
    		}
		}	
    }
    return 0;
}

void StartUp (void)
{
	CYGlobalIntEnable;           					/* Enable Global interrupts */
    
	USBFS_1_Start(0, USBFS_1_DWR_VDDD_OPERATION);	/* Start USBFS operation/device 0 and with 5V operation */
	while(!USBFS_1_bGetConfiguration()){};			/* Wait for Device to enumerate */
    USBFS_1_LoadInEP(JOY_ENDPOINT, (uint8 *)Joystick_Data, 3); /* Loads an inital value into EP4 and sends it out to the PC */
}

uint8 MAX7221_Data[8] = {0,0,0,0,0,0,0,0};
void MAX7221_WriteRegister(uint8 addr, uint8 data)
{
    uint16 output = 0x0000;
    output = (addr << 8) + data;
    SPI_MAX7221_WriteTxData(output);
}

void MAX7221_UpdateDigit(uint8 digit)
{
    MAX7221_WriteRegister(digit+1,MAX7221_Data[digit]);
}

void MAX7221_LEDOn(uint8 index) // [5:3]=digit  [2:0]=segment
{
    uint8 digit = (index&0x38) >> 3;
    uint8 mask = 0x01 << (index&0x07);
    MAX7221_Data[digit] |= mask;
    MAX7221_UpdateDigit(digit);
}

void MAX7221_LEDOff(uint8 index) // [5:3]=digit  [2:0]=segment
{
    uint8 digit = (index&0x38) >> 3;
    uint8 mask = 0x01 << (index&0x07);
    MAX7221_Data[digit] &= (!mask);
    MAX7221_UpdateDigit(digit);
}

void MAX7221_SetDecodeMode(uint8 mode)
{
    MAX7221_WriteRegister(0x09,mode);
}

void MAX7221_SetIntensity(uint8 intensity)
{
    MAX7221_WriteRegister(0x0A,intensity);
}

void MAX7221_SetScanLimit(uint8 limit)
{
    MAX7221_WriteRegister(0x0B,limit);
}

void MAX7221_Shutdown(uint8 shutdown)
{
    MAX7221_WriteRegister(0x0C, shutdown);   
}    

void MAX7221_StartUp()
{
    SPI_MAX7221_Start();
}


/* End of File */

