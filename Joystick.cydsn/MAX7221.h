/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#if !defined(MAX7221_H) 
#define MAX7221_H
    
#include <device.h>

typedef struct {
    uint8 state[8];
    uint8 mode;
    
} MAX7221;

void MAX7221_Start()
{}

#endif
/* [] END OF FILE */
