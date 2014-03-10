/*
 * File:           C:\Users\mobleys\Documents\ioti\trunk\hardware_test\sigmadsp\audioTests\Export\AudioTests_IC_1.h
 *
 * Created:        Sunday, March 09, 2014 9:55:41 PM
 * Description:    AudioTests:IC 1 program data.
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
#ifndef __AUDIOTESTS_IC_1_H__
#define __AUDIOTESTS_IC_1_H__

#include "SigmaStudioFW.h"
#include "AudioTests_IC_1_REG.h"

#define DEVICE_ARCHITECTURE_IC_1                  "ADAU144x"
#define DEVICE_ADDR_IC_1                          0x70

/* DSP Ram Data */
#define NON_MODULO_RAM_SIZE_IC_1 0
#define NON_MODULO_RAM_ADDR_IC_1 24576
#define NON_MODULO_RAM_Data_IC_1  0


/* DSP Program Data */
#define PROGRAM_SIZE_IC_1 1182
#define PROGRAM_ADDR_IC_1 8192
ADI_REG_TYPE Program_Data_IC_1[PROGRAM_SIZE_IC_1] = {
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
0x07, 0xFF, 0xA0, 0x08, 0x20, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xE2, 0x00, 
0x06, 0x05, 0x00, 0x0C, 0x00, 0x00, 
0x06, 0x05, 0xA0, 0x0D, 0x00, 0x00, 
0x06, 0x03, 0x40, 0xA8, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x20, 0x00, 0xE2, 0x00, 
0x07, 0xFF, 0xA0, 0x0E, 0x20, 0x08, 
0x00, 0x01, 0x20, 0x0F, 0x20, 0x00, 
0x07, 0xFF, 0xF1, 0x1F, 0x22, 0x00, 
0x00, 0x01, 0x40, 0x00, 0xF2, 0x00, 
0x07, 0xFF, 0xB1, 0x09, 0x32, 0x40, 
0x07, 0xFF, 0xD1, 0x08, 0x20, 0x27, 
0x00, 0x01, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xD1, 0x1F, 0x20, 0x00, 
0x00, 0x01, 0x91, 0x08, 0x22, 0x00, 
0x00, 0x00, 0x00, 0x11, 0xA0, 0x00, 
0x07, 0xFF, 0x91, 0x18, 0x22, 0x00, 
0x00, 0x00, 0x00, 0x10, 0xA0, 0x00, 
0x00, 0x01, 0xA0, 0x00, 0xEA, 0x00, 
0x00, 0x01, 0xE0, 0x00, 0xF2, 0x00, 
0x00, 0x01, 0xA0, 0x00, 0xC0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x10, 0x01, 0xA1, 0x00, 
0x07, 0xFF, 0x91, 0x08, 0x20, 0x00, 
0x00, 0x00, 0x10, 0x00, 0xA1, 0x00, 
0x07, 0xFF, 0x91, 0x08, 0x22, 0x40, 
0x00, 0x02, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x01, 0xE0, 0x00, 0xC0, 0x00, 
0x00, 0x02, 0x1F, 0xFF, 0x20, 0x00, 
0x07, 0xFF, 0x91, 0x08, 0x22, 0x08, 
0x07, 0xFF, 0xB1, 0x08, 0x20, 0x00, 
0x07, 0xFF, 0xB1, 0x08, 0x20, 0x67, 
0x00, 0x00, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0xE0, 0x12, 0x20, 0x00, 
0x00, 0x01, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x13, 0x20, 0x00, 
0x00, 0x00, 0x20, 0x14, 0x22, 0x00, 
0x00, 0x01, 0x60, 0x15, 0x22, 0x00, 
0x00, 0x01, 0x00, 0x16, 0x22, 0x00, 
0x00, 0x02, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x02, 0x20, 0x00, 0xC0, 0x00, 
0x00, 0x02, 0x31, 0x08, 0x20, 0x00, 
0x00, 0x03, 0x00, 0x00, 0xE2, 0x00, 
0x07, 0xFE, 0xE0, 0x1C, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x1D, 0x12, 0x00, 
0x00, 0x02, 0x3F, 0xFF, 0x20, 0x00, 
0x00, 0x02, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x02, 0xE0, 0x00, 0xF2, 0x00, 
0x00, 0x02, 0x91, 0x08, 0x20, 0x00, 
0x00, 0x02, 0x80, 0x17, 0x22, 0x40, 
0x00, 0x02, 0xE0, 0x17, 0x22, 0x00, 
0x00, 0x02, 0x51, 0x08, 0x34, 0x00, 
0x00, 0x02, 0x40, 0x17, 0x22, 0x40, 
0x00, 0x02, 0xC0, 0x17, 0x22, 0x00, 
0x00, 0x02, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x02, 0xA0, 0x00, 0xF2, 0x00, 
0x07, 0xFE, 0xE0, 0x1A, 0x02, 0x00, 
0x07, 0xFE, 0xE0, 0x1B, 0x12, 0x00, 
0x00, 0x03, 0x00, 0x1E, 0x20, 0x00, 
0x00, 0x03, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x03, 0x20, 0x1F, 0x20, 0x00, 
0x00, 0x03, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x20, 0x20, 0x20, 0x00, 
0x00, 0x03, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x21, 0x20, 0x00, 
0x00, 0x03, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x22, 0x20, 0x00, 
0x00, 0x03, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x23, 0x20, 0x00, 
0x00, 0x03, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x24, 0x20, 0x00, 
0x00, 0x03, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x25, 0x20, 0x00, 
0x00, 0x04, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x26, 0x20, 0x00, 
0x00, 0x04, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x27, 0x20, 0x00, 
0x00, 0x04, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x40, 0x28, 0x20, 0x00, 
0x00, 0x04, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x29, 0x20, 0x00, 
0x00, 0x04, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2A, 0x20, 0x00, 
0x00, 0x04, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2B, 0x20, 0x00, 
0x00, 0x04, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2C, 0x20, 0x00, 
0x00, 0x04, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2D, 0x20, 0x00, 
0x00, 0x05, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2E, 0x20, 0x00, 
0x00, 0x05, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x2F, 0x20, 0x00, 
0x00, 0x05, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x60, 0x30, 0x20, 0x00, 
0x00, 0x05, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0x91, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0xB1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0xD1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x03, 0xF1, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x11, 0x08, 0x20, 0x00, 
0x04, 0x19, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x31, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x51, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x71, 0x08, 0x20, 0x00, 
0x04, 0x19, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0xB1, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0x20, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x51, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0xC0, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0xD1, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0x40, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0xF1, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x71, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0xE0, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x31, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0xA0, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x11, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0x80, 0x00, 0xE2, 0x00, 
0x00, 0x04, 0x91, 0x08, 0x20, 0x00, 
0x04, 0x1A, 0x00, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x00, 0xC0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0x00, 0x10, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x03, 0xC0, 0x00, 0x00, 0x00, 
0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x01, 0x60, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x18, 0x0B, 0x00, 0x00, 
0x06, 0x00, 0xF1, 0x1F, 0x20, 0x00, 
0x06, 0x00, 0xD1, 0x08, 0x22, 0x00, 
0x00, 0x00, 0x18, 0x06, 0xA0, 0x00, 
0x07, 0xFF, 0x91, 0x18, 0x22, 0x00, 
0x00, 0x00, 0x18, 0x06, 0xA0, 0x00, 
0x06, 0x00, 0x60, 0x00, 0xEA, 0x00, 
0x06, 0x00, 0xE0, 0x00, 0xF2, 0x00, 
0x06, 0x00, 0xC0, 0x00, 0xC0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xFF, 0xB0, 0x01, 0x21, 0x00, 
0x00, 0x00, 0x10, 0x00, 0xA1, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xFF, 0x91, 0x08, 0x22, 0x40, 
0x06, 0x00, 0x40, 0x00, 0xE2, 0x00, 
0x06, 0x01, 0x00, 0x00, 0xC0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x06, 0x00, 0xDF, 0xFF, 0x20, 0x00, 
0x07, 0xFF, 0x91, 0x08, 0x22, 0x00, 
0x06, 0x00, 0xA0, 0x00, 0xE2, 0x00, 
0x06, 0x00, 0xB8, 0x05, 0x20, 0x00, 
0x06, 0x03, 0xE0, 0x00, 0x00, 0x00, 
0x06, 0x04, 0x20, 0x00, 0x00, 0x00, 
0x06, 0x03, 0x60, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

/* DSP Parameter (Coefficient) Data */
#define PARAM_SIZE_IC_1 196
#define PARAM_ADDR_IC_1 0
ADI_REG_TYPE Param_Data_IC_1[PARAM_SIZE_IC_1] = {
0x00, 0x00, 0x20, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x02, 0xAA, 0xAB, 
0x00, 0x00, 0x00, 0xFF, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x02, 
0x00, 0x00, 0x00, 0x09, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x05, 0x46, 0x4B, 
0x00, 0x00, 0x00, 0xFF, 
0x00, 0x02, 0xAA, 0xAB, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x27, 0x52, 
0x00, 0x00, 0x03, 0xC0, 
0x00, 0x00, 0x03, 0x8E, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x0C, 0xCC, 0xCD, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x72, 0x14, 0x83, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 
};


/* Register Default - IC 1.Start_Pulse_Select */
ADI_REG_TYPE R0_START_PULSE_SELECT_IC_1_Default[REG_START_PULSE_SELECT_IC_1_BYTE] = {
0x00, 0x1C
};

/* Register Default - IC 1.Core_Run_Bit */
ADI_REG_TYPE R1_CORE_RUN_BIT_IC_1_Default[REG_CORE_RUN_BIT_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.Serial Input Modes */
#define R3_SERIAL_INPUT_MODES_IC_1_SIZE 18
ADI_REG_TYPE R3_SERIAL_INPUT_MODES_IC_1_Default[R3_SERIAL_INPUT_MODES_IC_1_SIZE] = {
0x24, 0x80, 0x24, 0x80, 0x24, 0x80, 0x24, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80
};

/* Register Default - IC 1.Serial Output Modes */
#define R4_SERIAL_OUTPUT_MODES_IC_1_SIZE 18
ADI_REG_TYPE R4_SERIAL_OUTPUT_MODES_IC_1_Default[R4_SERIAL_OUTPUT_MODES_IC_1_SIZE] = {
0x24, 0x80, 0x24, 0x80, 0x24, 0x80, 0x24, 0x80, 0xA8, 0x09, 0xA8, 0x09, 0xA8, 0x09, 0xA8, 0x09, 0x24, 0x09
};

/* Register Default - IC 1.High-Speed Slave Interface Mode */
ADI_REG_TYPE R5_HIGH_SPEED_SLAVE_INTERFACE_MODE_IC_1_Default[REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.Routing Matrix ASRC Input Data Selector */
#define R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_IC_1_SIZE 16
ADI_REG_TYPE R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_IC_1_Default[R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_IC_1_SIZE] = {
0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F
};

/* Register Default - IC 1.Routing Matrix ASRC Output Rate Selector */
#define R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_IC_1_SIZE 16
ADI_REG_TYPE R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_IC_1_Default[R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_IC_1_SIZE] = {
0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F
};

/* Register Default - IC 1.Routing Matrix Serial Output Data Selector */
#define R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_IC_1_SIZE 24
ADI_REG_TYPE R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_IC_1_Default[R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_IC_1_SIZE] = {
0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x19, 0x00, 0x1A, 0x00, 0x1B
};

/* Register Default - IC 1.S/PDIF Regs */
#define R9_SPDIF_REGS_IC_1_SIZE 24
ADI_REG_TYPE R9_SPDIF_REGS_IC_1_Default[R9_SPDIF_REGS_IC_1_SIZE] = {
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 1.ASRC1 (0-3) */
ADI_REG_TYPE R10_ASRC1_MUTE_IN_OUT_IC_1_Default[REG_ASRC1_MUTE_IN_OUT_IC_1_BYTE] = {
0x0F, 0x00
};

/* Register Default - IC 1.ASRC2 (4-7) */
ADI_REG_TYPE R11_ASRC2_MUTE_IN_OUT_IC_1_Default[REG_ASRC2_MUTE_IN_OUT_IC_1_BYTE] = {
0x0F, 0x00
};

/* Register Default - IC 1.Serial In Flex Modes */
#define R12_SERIAL_IN_FLEX_MODES_IC_1_SIZE 48
ADI_REG_TYPE R12_SERIAL_IN_FLEX_MODES_IC_1_Default[R12_SERIAL_IN_FLEX_MODES_IC_1_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 1.Serial Out Flex Modes */
#define R13_SERIAL_OUT_FLEX_MODES_IC_1_SIZE 64
ADI_REG_TYPE R13_SERIAL_OUT_FLEX_MODES_IC_1_Default[R13_SERIAL_OUT_FLEX_MODES_IC_1_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 1.DSP Regs */
#define R14_DSP_REGS_IC_1_SIZE 84
ADI_REG_TYPE R14_DSP_REGS_IC_1_Default[R14_DSP_REGS_IC_1_SIZE] = {
0x9F, 0xF2, 0x48, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x0D, 0x00, 0x0D, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 1.Other DSP Modes 1 */
#define R15_OTHER_DSP_MODES_1_IC_1_SIZE 4
ADI_REG_TYPE R15_OTHER_DSP_MODES_1_IC_1_Default[R15_OTHER_DSP_MODES_1_IC_1_SIZE] = {
0x00, 0x02, 0x00, 0x00
};

/* Register Default - IC 1.Other DSP Modes 2 */
#define R16_OTHER_DSP_MODES_2_IC_1_SIZE 12
ADI_REG_TYPE R16_OTHER_DSP_MODES_2_IC_1_Default[R16_OTHER_DSP_MODES_2_IC_1_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 1.Enable Register */
ADI_REG_TYPE R17_MASTER_CLK_ENABLE_IC_1_Default[REG_MASTER_CLK_ENABLE_IC_1_BYTE] = {
0x01, 0xFF
};

/* Register Default - Modulo Data Memory Register */
#define R19_IC_1_IC_1_ADDR 0xE21F
#define R19_IC_1_IC_1_SIZE 2
ADI_REG_TYPE R19_IC_1_IC_1_Default[R19_IC_1_IC_1_SIZE] = {
0x20, 0x00
};

/* Register Default - IC 1.Start_Pulse_Select */
ADI_REG_TYPE R21_START_PULSE_SELECT_IC_1_Default[REG_START_PULSE_SELECT_IC_1_BYTE] = {
0x00, 0x13
};

/* Register Default - IC 1.Core_Run_Bit */
ADI_REG_TYPE R22_CORE_RUN_BIT_IC_1_Default[REG_CORE_RUN_BIT_IC_1_BYTE] = {
0x00, 0x01
};

/* Register Default - IC 1.Dejitter_Window */
ADI_REG_TYPE R23_DEJITTER_WINDOW_IC_1_Default[REG_DEJITTER_WINDOW_IC_1_BYTE] = {
0x00, 0x00
};

/* Register Default - IC 1.Dejitter_Window */
ADI_REG_TYPE R24_DEJITTER_WINDOW_IC_1_Default[REG_DEJITTER_WINDOW_IC_1_BYTE] = {
0x00, 0x05
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_1 25

void default_download_IC_1() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_PULSE_SELECT_IC_1_ADDR, REG_START_PULSE_SELECT_IC_1_BYTE, R0_START_PULSE_SELECT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_CORE_RUN_BIT_IC_1_ADDR, REG_CORE_RUN_BIT_IC_1_BYTE, R1_CORE_RUN_BIT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, PROGRAM_ADDR_IC_1, PROGRAM_SIZE_IC_1, Program_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIALINPUT0_DEFAULT_IC_1_ADDR , R3_SERIAL_INPUT_MODES_IC_1_SIZE, R3_SERIAL_INPUT_MODES_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIALOUTPUT0_DEFAULT_IC_1_ADDR , R4_SERIAL_OUTPUT_MODES_IC_1_SIZE, R4_SERIAL_OUTPUT_MODES_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_IC_1_ADDR, REG_HIGH_SPEED_SLAVE_INTERFACE_MODE_IC_1_BYTE, R5_HIGH_SPEED_SLAVE_INTERFACE_MODE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ASRCINPUTSELECTPAIR0_DEFAULT_IC_1_ADDR , R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_IC_1_SIZE, R6_ROUTING_MATRIX_ASRC_INPUT_DATA_SELECTOR_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ASRCOUTPUTRATESELECTORPAIR0_DEFAULT_IC_1_ADDR , R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_IC_1_SIZE, R7_ROUTING_MATRIX_ASRC_OUTPUT_RATE_SELECTOR_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIALOUTSELECTORPAIR0_DEFAULT_IC_1_ADDR , R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_IC_1_SIZE, R8_ROUTING_MATRIX_SERIAL_OUTPUT_DATA_SELECTOR_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SPDIF_RECEIVER__READ_AUXILIARY_OUTPUTS_IC_1_ADDR , R9_SPDIF_REGS_IC_1_SIZE, R9_SPDIF_REGS_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ASRC1_MUTE_IN_OUT_IC_1_ADDR, REG_ASRC1_MUTE_IN_OUT_IC_1_BYTE, R10_ASRC1_MUTE_IN_OUT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ASRC2_MUTE_IN_OUT_IC_1_ADDR, REG_ASRC2_MUTE_IN_OUT_IC_1_BYTE, R11_ASRC2_MUTE_IN_OUT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_INPUT_FLEXIBLE_TDM_TO_DSP_CHANNEL_0_IC_1_ADDR , R12_SERIAL_IN_FLEX_MODES_IC_1_SIZE, R12_SERIAL_IN_FLEX_MODES_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_SERIAL_OUTPUT_FLEXIBLE_TDM_INTERFACE_MODES_0_IC_1_ADDR , R13_SERIAL_OUT_FLEX_MODES_IC_1_SIZE, R13_SERIAL_OUT_FLEX_MODES_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_CRC_IDEAL_1_IC_1_ADDR , R14_DSP_REGS_IC_1_SIZE, R14_DSP_REGS_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_CLOCK_PAD_MULTIPLEXER_IC_1_ADDR , R15_OTHER_DSP_MODES_1_IC_1_SIZE, R15_OTHER_DSP_MODES_1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_BIT_CLOCK_PAD_STRENGTH_IC_1_ADDR , R16_OTHER_DSP_MODES_2_IC_1_SIZE, R16_OTHER_DSP_MODES_2_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_MASTER_CLK_ENABLE_IC_1_ADDR, REG_MASTER_CLK_ENABLE_IC_1_BYTE, R17_MASTER_CLK_ENABLE_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, PARAM_ADDR_IC_1, PARAM_SIZE_IC_1, Param_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, R19_IC_1_IC_1_ADDR, R19_IC_1_IC_1_SIZE, R19_IC_1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, NON_MODULO_RAM_ADDR_IC_1, NON_MODULO_RAM_SIZE_IC_1, NON_MODULO_RAM_Data_IC_1 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_START_PULSE_SELECT_IC_1_ADDR, REG_START_PULSE_SELECT_IC_1_BYTE, R21_START_PULSE_SELECT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_CORE_RUN_BIT_IC_1_ADDR, REG_CORE_RUN_BIT_IC_1_BYTE, R22_CORE_RUN_BIT_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DEJITTER_WINDOW_IC_1_ADDR, REG_DEJITTER_WINDOW_IC_1_BYTE, R23_DEJITTER_WINDOW_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DEJITTER_WINDOW_IC_1_ADDR, REG_DEJITTER_WINDOW_IC_1_BYTE, R24_DEJITTER_WINDOW_IC_1_Default );
}

#endif
