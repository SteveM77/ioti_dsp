/*
 * File:           C:\Users\mobleys\Documents\Analog Devices\SigmaStudio 3.10\Projects\ioti_DSP\PassThru96K\export\pass-thru-96K_ADAU1445.h
 *
 * Created:        Saturday, April 05, 2014 11:34:43 AM
 * Description:    pass-thru-96K:ADAU1445 program data.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2014 Analog Devices, Inc. All rights reserved.
 */
#ifndef __PASS_THRU_96K_ADAU1445_H__
#define __PASS_THRU_96K_ADAU1445_H__

#include "SigmaStudioFW.h"
#include "pass-thru-96K_ADAU1445_REG.h"

#define DEVICE_ARCHITECTURE_ADAU1445              "ADAU144x"
#define DEVICE_ADDR_ADAU1445                      0x70

/* DSP Ram Data */
#define NON_MODULO_RAM_SIZE_ADAU1445 0
#define NON_MODULO_RAM_ADDR_ADAU1445 24576
#define NON_MODULO_RAM_Data_ADAU1445  0


/* DSP Program Data */
#define PROGRAM_SIZE_ADAU1445 1656
#define PROGRAM_ADDR_ADAU1445 8192
ADI_REG_TYPE Program_Data_ADAU1445[PROGRAM_SIZE_ADAU1445] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0x80, 0x00, 0x00, 0x00, 
0x06, 0x04, 0xD0, 0x00, 0x00, 0x00, 
0x06, 0x04, 0xB0, 0x00, 0x00, 0x00, 
0x06, 0x05, 0x50, 0x00, 0x00, 0x00, 
0x06, 0x05, 0x70, 0x00, 0x00, 0x00, 
0x07, 0xFF, 0xD1, 0x08, 0x20, 0x00, 
0x06, 0x04, 0xE0, 0x00, 0x00, 0x00, 
0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0xA0, 0x0C, 0x00, 0x00, 
0x06, 0x00, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xFF, 0xA0, 0x07, 0x20, 0x08, 
0x00, 0x00, 0x00, 0x06, 0xA0, 0x00, 
0x07, 0xFF, 0x80, 0x00, 0xC0, 0x00, 
0x06, 0x06, 0x00, 0x07, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0x00, 0x1F, 0x00, 0x27, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0xA0, 0x1B, 0x00, 0x00, 
0x07, 0xFF, 0xA0, 0x01, 0x20, 0x00, 
0x07, 0xFE, 0xE0, 0x01, 0x03, 0x00, 
0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 
0x06, 0x04, 0x20, 0x00, 0x00, 0x00, 
0x07, 0xFF, 0xD0, 0x00, 0x20, 0x00, 
0x07, 0xFE, 0xE0, 0x07, 0x02, 0x00, 
0x04, 0x08, 0x11, 0x08, 0x20, 0x00, 
0x00, 0x05, 0x60, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0x31, 0x08, 0x20, 0x00, 
0x00, 0x00, 0x20, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0x51, 0x08, 0x20, 0x00, 
0x00, 0x01, 0x00, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0x71, 0x08, 0x20, 0x00, 
0x00, 0x06, 0x40, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0x91, 0x08, 0x20, 0x00, 
0x00, 0x01, 0xE0, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0xB1, 0x08, 0x20, 0x00, 
0x00, 0x02, 0xC0, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0xD1, 0x08, 0x20, 0x00, 
0x00, 0x03, 0xA0, 0x00, 0xE2, 0x00, 
0x04, 0x08, 0xF1, 0x08, 0x20, 0x00, 
0x00, 0x04, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x80, 0x08, 0x20, 0x00, 
0x00, 0x00, 0x40, 0x08, 0x34, 0x00, 
0x00, 0x00, 0x11, 0x08, 0x22, 0x40, 
0x00, 0x00, 0x31, 0x08, 0x22, 0x00, 
0x00, 0x00, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x01, 0x60, 0x09, 0x20, 0x00, 
0x00, 0x01, 0x20, 0x09, 0x34, 0x00, 
0x00, 0x00, 0xF1, 0x08, 0x22, 0x40, 
0x00, 0x01, 0x11, 0x08, 0x22, 0x00, 
0x00, 0x01, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x01, 0x80, 0x00, 0xF2, 0x00, 
0x00, 0x02, 0x40, 0x0A, 0x20, 0x00, 
0x00, 0x02, 0x00, 0x0A, 0x34, 0x00, 
0x00, 0x01, 0xD1, 0x08, 0x22, 0x40, 
0x00, 0x01, 0xF1, 0x08, 0x22, 0x00, 
0x00, 0x02, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x02, 0x60, 0x00, 0xF2, 0x00, 
0x00, 0x03, 0x20, 0x0B, 0x20, 0x00, 
0x00, 0x02, 0xE0, 0x0B, 0x34, 0x00, 
0x00, 0x02, 0xB1, 0x08, 0x22, 0x40, 
0x00, 0x02, 0xD1, 0x08, 0x22, 0x00, 
0x00, 0x03, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x00, 0xF2, 0x00, 
0x00, 0x04, 0x00, 0x0C, 0x20, 0x00, 
0x00, 0x03, 0xC0, 0x0C, 0x34, 0x00, 
0x00, 0x03, 0x91, 0x08, 0x22, 0x40, 
0x00, 0x03, 0xB1, 0x08, 0x22, 0x00, 
0x00, 0x03, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x20, 0x00, 0xF2, 0x00, 
0x00, 0x04, 0xE0, 0x0D, 0x20, 0x00, 
0x00, 0x04, 0xA0, 0x0D, 0x34, 0x00, 
0x00, 0x04, 0x71, 0x08, 0x22, 0x40, 
0x00, 0x04, 0x91, 0x08, 0x22, 0x00, 
0x00, 0x04, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x00, 0x00, 0xF2, 0x00, 
0x00, 0x05, 0xC0, 0x0E, 0x20, 0x00, 
0x00, 0x05, 0x80, 0x0E, 0x34, 0x00, 
0x00, 0x05, 0x51, 0x08, 0x22, 0x40, 
0x00, 0x05, 0x71, 0x08, 0x22, 0x00, 
0x00, 0x05, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0xE0, 0x00, 0xF2, 0x00, 
0x00, 0x06, 0xA0, 0x0F, 0x20, 0x00, 
0x00, 0x06, 0x60, 0x0F, 0x34, 0x00, 
0x00, 0x06, 0x31, 0x08, 0x22, 0x40, 
0x00, 0x06, 0x51, 0x08, 0x22, 0x00, 
0x00, 0x06, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x06, 0xC0, 0x00, 0xF2, 0x00, 
0x00, 0x05, 0xA0, 0x00, 0xC0, 0x00, 
0x00, 0x05, 0xB1, 0x08, 0x20, 0x00, 
0x00, 0x07, 0xC0, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x15, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x16, 0x12, 0x00, 
0x00, 0x05, 0xBF, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x07, 0x51, 0x08, 0x20, 0x00, 
0x00, 0x07, 0x40, 0x10, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x10, 0x22, 0x00, 
0x00, 0x07, 0x11, 0x08, 0x34, 0x00, 
0x00, 0x07, 0x00, 0x10, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x10, 0x22, 0x00, 
0x00, 0x07, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0x60, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x13, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x14, 0x12, 0x00, 
0x00, 0x00, 0x60, 0x00, 0xC0, 0x00, 
0x00, 0x00, 0x71, 0x08, 0x20, 0x00, 
0x00, 0x08, 0x60, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x1C, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x1D, 0x12, 0x00, 
0x00, 0x00, 0x7F, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x08, 0x31, 0x08, 0x20, 0x00, 
0x00, 0x08, 0x20, 0x17, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x17, 0x22, 0x00, 
0x00, 0x07, 0xF1, 0x08, 0x34, 0x00, 
0x00, 0x07, 0xE0, 0x17, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x17, 0x22, 0x00, 
0x00, 0x08, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x08, 0x40, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x1A, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x1B, 0x12, 0x00, 
0x00, 0x01, 0x40, 0x00, 0xC0, 0x00, 
0x00, 0x01, 0x51, 0x08, 0x20, 0x00, 
0x00, 0x09, 0x00, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x23, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x24, 0x12, 0x00, 
0x00, 0x01, 0x5F, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x08, 0xD1, 0x08, 0x20, 0x00, 
0x00, 0x08, 0xC0, 0x1E, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x1E, 0x22, 0x00, 
0x00, 0x08, 0x91, 0x08, 0x34, 0x00, 
0x00, 0x08, 0x80, 0x1E, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x1E, 0x22, 0x00, 
0x00, 0x08, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x08, 0xE0, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x21, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x22, 0x12, 0x00, 
0x00, 0x06, 0x80, 0x00, 0xC0, 0x00, 
0x00, 0x06, 0x91, 0x08, 0x20, 0x00, 
0x00, 0x09, 0xA0, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x2A, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x2B, 0x12, 0x00, 
0x00, 0x06, 0x9F, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x09, 0x71, 0x08, 0x20, 0x00, 
0x00, 0x09, 0x60, 0x25, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x25, 0x22, 0x00, 
0x00, 0x09, 0x31, 0x08, 0x34, 0x00, 
0x00, 0x09, 0x20, 0x25, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x25, 0x22, 0x00, 
0x00, 0x09, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x09, 0x80, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x28, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x29, 0x12, 0x00, 
0x00, 0x02, 0x20, 0x00, 0xC0, 0x00, 
0x00, 0x02, 0x31, 0x08, 0x20, 0x00, 
0x00, 0x0A, 0x40, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x31, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x32, 0x12, 0x00, 
0x00, 0x02, 0x3F, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x0A, 0x11, 0x08, 0x20, 0x00, 
0x00, 0x0A, 0x00, 0x2C, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x2C, 0x22, 0x00, 
0x00, 0x09, 0xD1, 0x08, 0x34, 0x00, 
0x00, 0x09, 0xC0, 0x2C, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x2C, 0x22, 0x00, 
0x00, 0x09, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0x20, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x2F, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x30, 0x12, 0x00, 
0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 
0x00, 0x03, 0x11, 0x08, 0x20, 0x00, 
0x00, 0x0A, 0xE0, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x38, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x39, 0x12, 0x00, 
0x00, 0x03, 0x1F, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x0A, 0xB1, 0x08, 0x20, 0x00, 
0x00, 0x0A, 0xA0, 0x33, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x33, 0x22, 0x00, 
0x00, 0x0A, 0x71, 0x08, 0x34, 0x00, 
0x00, 0x0A, 0x60, 0x33, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x33, 0x22, 0x00, 
0x00, 0x0A, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0xC0, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x36, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x37, 0x12, 0x00, 
0x00, 0x03, 0xE0, 0x00, 0xC0, 0x00, 
0x00, 0x03, 0xF1, 0x08, 0x20, 0x00, 
0x00, 0x0B, 0x80, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x3F, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x40, 0x12, 0x00, 
0x00, 0x03, 0xFF, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x0B, 0x51, 0x08, 0x20, 0x00, 
0x00, 0x0B, 0x40, 0x3A, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x3A, 0x22, 0x00, 
0x00, 0x0B, 0x11, 0x08, 0x34, 0x00, 
0x00, 0x0B, 0x00, 0x3A, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x3A, 0x22, 0x00, 
0x00, 0x0B, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x0B, 0x60, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x3D, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x3E, 0x12, 0x00, 
0x00, 0x04, 0xC0, 0x00, 0xC0, 0x00, 
0x00, 0x04, 0xD1, 0x08, 0x20, 0x00, 
0x00, 0x0C, 0x20, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x46, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x47, 0x12, 0x00, 
0x00, 0x04, 0xDF, 0xFF, 0x20, 0x00, 
0x00, 0x07, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xA0, 0x00, 0xF2, 0x00, 
0x00, 0x0B, 0xF1, 0x08, 0x20, 0x00, 
0x00, 0x0B, 0xE0, 0x41, 0x22, 0x40, 
0x00, 0x07, 0xA0, 0x41, 0x22, 0x00, 
0x00, 0x0B, 0xB1, 0x08, 0x34, 0x00, 
0x00, 0x0B, 0xA0, 0x41, 0x22, 0x40, 
0x00, 0x07, 0x80, 0x41, 0x22, 0x00, 
0x00, 0x0B, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x0C, 0x00, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x44, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x45, 0x12, 0x00, 
0x00, 0x07, 0xD1, 0x08, 0x20, 0x00, 
0x04, 0x18, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x08, 0x71, 0x08, 0x20, 0x00, 
0x04, 0x18, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x09, 0x11, 0x08, 0x20, 0x00, 
0x04, 0x18, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x09, 0xB1, 0x08, 0x20, 0x00, 
0x04, 0x18, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0x51, 0x08, 0x20, 0x00, 
0x04, 0x18, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0xF1, 0x08, 0x20, 0x00, 
0x04, 0x18, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x0B, 0x91, 0x08, 0x20, 0x00, 
0x04, 0x18, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x0C, 0x31, 0x08, 0x20, 0x00, 
0x04, 0x18, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x07, 0xD1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x08, 0x71, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x09, 0x11, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x09, 0xB1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0x51, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x0A, 0xF1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x0B, 0x91, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x0C, 0x31, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x00, 0xC0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0x00, 0x10, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

/* DSP Parameter (Coefficient) Data */
#define PARAM_SIZE_ADAU1445 288
#define PARAM_ADDR_ADAU1445 0
ADI_REG_TYPE Param_Data_ADAU1445[PARAM_SIZE_ADAU1445] = {
0x00, 0x00, 0x20, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x7F, 0xFC, 0xB9, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
};


/* Register Default - ADAU1445.Start_Pulse_Select */
ADI_REG_TYPE R0_START_PULSE_SELECT_ADAU1445_Default[REG_START_PULSE_SELECT_ADAU1445_BYTE] = {
0x00, 0x1C
};

/* Register Default - ADAU1445.Core_Run_Bit */
ADI_REG_TYPE R1_CORE_RUN_BIT_ADAU1445_Default[REG_CORE_RUN_BIT_ADAU1445_BYTE] = {
0x00, 0x00
};

/* Register Default - ADAU1445.Serial Input Modes */
#define R3_SERIAL_INPUT_MODES_ADAU1445_SIZE 18
ADI_REG_TYPE R3_SERIAL_INPUT_MODES_ADAU1445_Default[R3_SERIAL_INPUT_MODES_ADAU1445_SIZE] = {
0x40, 0x09, 0x44, 0x09, 0x48, 0x09, 0x4C, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - ADAU1445.Serial Output Modes */
#define R4_SERIAL_OUTPUT_MODES_ADAU1445_SIZE 18
ADI_REG_TYPE R4_SERIAL_OUTPUT_MODES_ADAU1445_Default[R4_SERIAL_OUTPUT_MODES_ADAU1445_SIZE] = {
0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 0xA8, 0x09, 0xA8, 0x09, 0xA8, 0x09, 0xA8, 0x09, 0x28, 0x00
};

/* Register Default - ADAU1445.High-Speed Slave Interface Mode */
ADI_REG_TYPE R5_HIGH_SPEED_SLAVE_INTERFACE_MODE_ADAU1445_Default[REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_ADAU1445_BYTE] = {
0x00, 0x00
};

/* Register Default - ADAU1445.Routing Matrix ASRC Input Data Selector */
#define R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_ADAU1445_SIZE 16
ADI_REG_TYPE R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_ADAU1445_Default[R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_ADAU1445_SIZE] = {
0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x06, 0x00, 0x07
};

/* Register Default - ADAU1445.Routing Matrix ASRC Output Rate Selector */
#define R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_ADAU1445_SIZE 16
ADI_REG_TYPE R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_ADAU1445_Default[R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_ADAU1445_SIZE] = {
0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10
};

/* Register Default - ADAU1445.Routing Matrix Serial Output Data Selector */
#define R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_ADAU1445_SIZE 24
ADI_REG_TYPE R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_ADAU1445_Default[R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_ADAU1445_SIZE] = {
0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x10, 0x00, 0x11, 0x00, 0x12, 0x00, 0x13, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17
};

/* Register Default - ADAU1445.S/PDIF Regs */
#define R9_SPDIF_REGS_ADAU1445_SIZE 24
ADI_REG_TYPE R9_SPDIF_REGS_ADAU1445_Default[R9_SPDIF_REGS_ADAU1445_SIZE] = {
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - ADAU1445.ASRC1 (0-3) */
ADI_REG_TYPE R10_ASRC1_MUTE_IN_OUT_ADAU1445_Default[REG_ASRC1_MUTE_IN_OUT_ADAU1445_BYTE] = {
0x00, 0x00
};

/* Register Default - ADAU1445.ASRC2 (4-7) */
ADI_REG_TYPE R11_ASRC2_MUTE_IN_OUT_ADAU1445_Default[REG_ASRC2_MUTE_IN_OUT_ADAU1445_BYTE] = {
0x00, 0x00
};

/* Register Default - ADAU1445.Serial In Flex Modes */
#define R12_SERIAL_IN_FLEX_MODES_ADAU1445_SIZE 48
ADI_REG_TYPE R12_SERIAL_IN_FLEX_MODES_ADAU1445_Default[R12_SERIAL_IN_FLEX_MODES_ADAU1445_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - ADAU1445.Serial Out Flex Modes */
#define R13_SERIAL_OUT_FLEX_MODES_ADAU1445_SIZE 64
ADI_REG_TYPE R13_SERIAL_OUT_FLEX_MODES_ADAU1445_Default[R13_SERIAL_OUT_FLEX_MODES_ADAU1445_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - ADAU1445.DSP Regs */
#define R14_DSP_REGS_ADAU1445_SIZE 84
ADI_REG_TYPE R14_DSP_REGS_ADAU1445_Default[R14_DSP_REGS_ADAU1445_SIZE] = {
0xF7, 0xC7, 0xFF, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x02, 0x0E, 0x18, 0x00, 0x00, 0x10, 0x00, 0x00, 0x09, 0x00, 0x00, 0x20, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x77
};

/* Register Default - ADAU1445.Other DSP Modes 1 */
#define R15_OTHER_DSP_MODES_1_ADAU1445_SIZE 4
ADI_REG_TYPE R15_OTHER_DSP_MODES_1_ADAU1445_Default[R15_OTHER_DSP_MODES_1_ADAU1445_SIZE] = {
0x00, 0x02, 0x00, 0x00
};

/* Register Default - ADAU1445.Other DSP Modes 2 */
#define R16_OTHER_DSP_MODES_2_ADAU1445_SIZE 12
ADI_REG_TYPE R16_OTHER_DSP_MODES_2_ADAU1445_Default[R16_OTHER_DSP_MODES_2_ADAU1445_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - ADAU1445.Enable Register */
ADI_REG_TYPE R17_MASTER_CLK_ENABLE_ADAU1445_Default[REG_MASTER_CLK_ENABLE_ADAU1445_BYTE] = {
0x01, 0xFF
};

/* Register Default - Modulo Data Memory Register */
#define R19_ADAU1445_ADAU1445_ADDR 0xE21F
#define R19_ADAU1445_ADAU1445_SIZE 2
ADI_REG_TYPE R19_ADAU1445_ADAU1445_Default[R19_ADAU1445_ADAU1445_SIZE] = {
0x20, 0x00
};

/* Register Default - ADAU1445.Start_Pulse_Select */
ADI_REG_TYPE R21_START_PULSE_SELECT_ADAU1445_Default[REG_START_PULSE_SELECT_ADAU1445_BYTE] = {
0x00, 0x13
};

/* Register Default - ADAU1445.Core_Run_Bit */
ADI_REG_TYPE R22_CORE_RUN_BIT_ADAU1445_Default[REG_CORE_RUN_BIT_ADAU1445_BYTE] = {
0x00, 0x01
};

/* Register Default - ADAU1445.Dejitter_Window */
ADI_REG_TYPE R23_DEJITTER_WINDOW_ADAU1445_Default[REG_DEJITTER_WINDOW_ADAU1445_BYTE] = {
0x00, 0x00
};

/* Register Default - ADAU1445.Dejitter_Window */
ADI_REG_TYPE R24_DEJITTER_WINDOW_ADAU1445_Default[REG_DEJITTER_WINDOW_ADAU1445_BYTE] = {
0x00, 0x05
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_ADAU1445 25

void default_download_ADAU1445() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_START_PULSE_SELECT_ADAU1445_ADDR, REG_START_PULSE_SELECT_ADAU1445_BYTE, R0_START_PULSE_SELECT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_CORE_RUN_BIT_ADAU1445_ADDR, REG_CORE_RUN_BIT_ADAU1445_BYTE, R1_CORE_RUN_BIT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, PROGRAM_ADDR_ADAU1445, PROGRAM_SIZE_ADAU1445, Program_Data_ADAU1445 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SERIALINPUT0_DEFAULT_ADAU1445_ADDR , R3_SERIAL_INPUT_MODES_ADAU1445_SIZE, R3_SERIAL_INPUT_MODES_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SERIALOUTPUT0_DEFAULT_ADAU1445_ADDR , R4_SERIAL_OUTPUT_MODES_ADAU1445_SIZE, R4_SERIAL_OUTPUT_MODES_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_ADAU1445_ADDR, REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_ADAU1445_BYTE, R5_HIGH_SPEED_SLAVE_INTERFACE_MODE_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_ASRCINPUTSELECTPAIR0_DEFAULT_ADAU1445_ADDR , R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_ADAU1445_SIZE, R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_ASRCOUTPUTRATESELECTORPAIR0_DEFAULT_ADAU1445_ADDR , R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_ADAU1445_SIZE, R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SERIALOUTSELECTORPAIR0_DEFAULT_ADAU1445_ADDR , R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_ADAU1445_SIZE, R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SPDIF_RECEIVER__READ_AUXILIARY_OUTPUTS_ADAU1445_ADDR , R9_SPDIF_REGS_ADAU1445_SIZE, R9_SPDIF_REGS_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_ASRC1_MUTE_IN_OUT_ADAU1445_ADDR, REG_ASRC1_MUTE_IN_OUT_ADAU1445_BYTE, R10_ASRC1_MUTE_IN_OUT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_ASRC2_MUTE_IN_OUT_ADAU1445_ADDR, REG_ASRC2_MUTE_IN_OUT_ADAU1445_BYTE, R11_ASRC2_MUTE_IN_OUT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SERIAL_INPUT_FLEXIBLE_TDM_TO_DSP_CHANNEL_0_ADAU1445_ADDR , R12_SERIAL_IN_FLEX_MODES_ADAU1445_SIZE, R12_SERIAL_IN_FLEX_MODES_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_SERIAL_OUTPUT_FLEXIBLE_TDM_INTERFACE_MODES_0_ADAU1445_ADDR , R13_SERIAL_OUT_FLEX_MODES_ADAU1445_SIZE, R13_SERIAL_OUT_FLEX_MODES_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_CRC_IDEAL_1_ADAU1445_ADDR , R14_DSP_REGS_ADAU1445_SIZE, R14_DSP_REGS_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_CLOCK_PAD_MULTIPLEXER_ADAU1445_ADDR , R15_OTHER_DSP_MODES_1_ADAU1445_SIZE, R15_OTHER_DSP_MODES_1_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_BIT_CLOCK_PAD_STRENGTH_ADAU1445_ADDR , R16_OTHER_DSP_MODES_2_ADAU1445_SIZE, R16_OTHER_DSP_MODES_2_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_MASTER_CLK_ENABLE_ADAU1445_ADDR, REG_MASTER_CLK_ENABLE_ADAU1445_BYTE, R17_MASTER_CLK_ENABLE_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, PARAM_ADDR_ADAU1445, PARAM_SIZE_ADAU1445, Param_Data_ADAU1445 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, R19_ADAU1445_ADAU1445_ADDR, R19_ADAU1445_ADAU1445_SIZE, R19_ADAU1445_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, NON_MODULO_RAM_ADDR_ADAU1445, NON_MODULO_RAM_SIZE_ADAU1445, NON_MODULO_RAM_Data_ADAU1445 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_START_PULSE_SELECT_ADAU1445_ADDR, REG_START_PULSE_SELECT_ADAU1445_BYTE, R21_START_PULSE_SELECT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_CORE_RUN_BIT_ADAU1445_ADDR, REG_CORE_RUN_BIT_ADAU1445_BYTE, R22_CORE_RUN_BIT_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_DEJITTER_WINDOW_ADAU1445_ADDR, REG_DEJITTER_WINDOW_ADAU1445_BYTE, R23_DEJITTER_WINDOW_ADAU1445_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_ADAU1445, REG_DEJITTER_WINDOW_ADAU1445_ADDR, REG_DEJITTER_WINDOW_ADAU1445_BYTE, R24_DEJITTER_WINDOW_ADAU1445_Default );
}

#endif
