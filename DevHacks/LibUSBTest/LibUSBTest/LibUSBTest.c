/*
* libusb example program to list devices on the bus
* Copyright © 2007 Daniel Drake <dsd@gentoo.org>
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <stdio.h>
#include "libusb.h"
#include <time.h>

struct libusb_device_handle *ButtonAce = NULL;

static void print_devs(libusb_device **devs)
{
	libusb_device *dev;
	int i = 0, j = 0;
	uint8_t path[8];

	while ((dev = devs[i++]) != NULL) {
		struct libusb_device_descriptor desc;
		int r = libusb_get_device_descriptor(dev, &desc);
		if (r < 0) {
			fprintf(stderr, "failed to get device descriptor");
			return;
		}

		printf("%04x:%04x (bus %d, device %d)",
			desc.idVendor, desc.idProduct,
			libusb_get_bus_number(dev), libusb_get_device_address(dev));

		r = libusb_get_port_numbers(dev, path, sizeof(path));
		if (r > 0) {
			printf(" path: %d", path[0]);
			for (j = 1; j < r; j++)
				printf(".%d", path[j]);
			
		if (desc.idVendor == 0x1209 && desc.idProduct == 0xACE5)
		{
			int Result = 0;
			printf("\n  Found this: ");

			Result = libusb_open(dev, &ButtonAce);
			switch (Result)
			{
				case 0:
					printf("Success!\n");
				default:
					printf("Error %d\n", Result);
			}
		}

		}
		printf("\n");
	}


}

/* Initialize and Set Default Vendor ID (VID) and Product ID (PID) */
static const int VID = 0x1209;
static const int PID = 0xACE5;


/* Endpoint Addresses defined in Endpoint Descriptor */
static const int IN_ENDPOINT_ADDRESS = 0x84;
static const int OUT_ENDPOINT_ADDRESS = 0x05;
/* Maximum Input and Output Transfer size */
static const int MAXIMUM_IN_TRANSFER_SIZE = 8;
static const int MAXIMUM_OUT_TRANSFER_SIZE = 8;
/* Miscellaneous variables for timing and interface referencing */
static const int INTERFACE_NUMBER = 1;
static const int TIMEOUT_MS = 5000;
static const int NUMBER_INPUT_ITERATIONS = 10;
static const int TIME_DELAY = 1000;



void Perform_Input_and_Output_Transfers(libusb_device_handle *MyHIDDevice)
{
	/* Declare area in RAM for Input and Output Data Buffer */
	unsigned char In_Data_Buffer[8];
	unsigned char Out_Data_Buffer[8];
	/* Various variables for application code */
	int ADC_Result = 0;
	int Switch_Status = 0;
	int Transfer_Count;
	int Result = 0;
	int In_Iteration_Count = 0;
	/* Store output data in output buffer prior to prior to transferring */
	Out_Data_Buffer[0] = 'B';
	Out_Data_Buffer[1] = 'D';
	Out_Data_Buffer[2] = 'T';
	Out_Data_Buffer[3] = 0;

	/* Perform Output Transfer to PSoC */
	Result = libusb_interrupt_transfer(MyHIDDevice, OUT_ENDPOINT_ADDRESS, Out_Data_Buffer,
		MAXIMUM_OUT_TRANSFER_SIZE, &Transfer_Count,
		TIMEOUT_MS);
	/* Check to see if Output transaction was successful */
	if (Result == 0)
	{
		printf("\n");
		printf("/********** Output Data = '%s'\n",Out_Data_Buffer);
		printf("\n");
		printf("\n");
	}
	else
	{
		printf("Error Has Occurred with Output Transfer \n");
		printf("\n");
	}
	/* Request IN report from PSoC. Performs in a loop. Number of cycles dependent on
	NUMBER_INPUT_ITERATIONS */
	printf("/********** Input Data **********/\n");
	for (In_Iteration_Count = 0; In_Iteration_Count < 4; // NUMBER_INPUT_ITERATIONS;
	In_Iteration_Count++)
	{
		Result = libusb_interrupt_transfer(MyHIDDevice,
			IN_ENDPOINT_ADDRESS,
			In_Data_Buffer,
			MAXIMUM_IN_TRANSFER_SIZE,
			&Transfer_Count,
			TIMEOUT_MS);
		/* Check to see if Input request was successful */
		if (Result == 0)
		{
			/* Unload data from Input Buffer and format ADC Data */
			printf("Ok, here's what we got: %s\n", In_Data_Buffer);
			/* Print Input Data in the Terminal */
		}
		else
		{
			printf("Error Occurred with Input Transfer \n");
			printf("\n");
		}
		/* Time is seconds to wait between Input requests */
		Sleep(TIME_DELAY);
	}
}

void TestOut()
{
	//struct libusb_device_handle *ButtonAce = NULL;
	int Device_Status = 0;
	int Result = 0;

	printf("\nOk, boys lets see if we can fly!\n");
	/* Finds matching device and assigns device handle */
	//ButtonAce = libusb_open_device_with_vid_pid(NULL, VID, PID);
	/* Check to see if HID was detected and properly assigned a handle */
	if (ButtonAce != NULL)
	{
		printf("Ha! Got one!\n");
		/* Claim USB interface for Application */
		Result = libusb_claim_interface(ButtonAce, INTERFACE_NUMBER);
		/* Ask user to provide parameters for Output Report */
		switch (Result)
		{
		case 0:
			Device_Status = 1;
			fprintf(stderr, "Device Connected \n");
			Perform_Input_and_Output_Transfers(ButtonAce);
			libusb_release_interface(ButtonAce, 0);
			break;
		case LIBUSB_ERROR_NOT_FOUND:
			fprintf(stderr, "The requested interface does not exist. \n");
			break;
		case LIBUSB_ERROR_BUSY:
			fprintf(stderr, "Another program or driver has claimed the interface.\n");
				break;
		case LIBUSB_ERROR_NO_DEVICE:
			fprintf(stderr, "The device has been disconnected. \n");
			break;
		default:
			fprintf(stderr, "An Error has occurred. Application cannot continue.\n");
				break;
		}
	}
	else
	{
		fprintf(stderr, "Unable to locate an attached device that matches.\n");
	}
}

int main(void)
{
	libusb_device **devs;
	
	int r;
	ssize_t cnt;

	r = libusb_init(NULL);
	if (r < 0)
		return r;

	libusb_set_debug(NULL,LIBUSB_LOG_LEVEL_WARNING);
	cnt = libusb_get_device_list(NULL, &devs);
	if (cnt < 0)
		return (int)cnt;

	print_devs(devs);
	libusb_free_device_list(devs, 1);

	TestOut();
	getc(stdin);
	libusb_exit(NULL);
	return 0;
}
