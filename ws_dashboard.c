
/*
 *  File: ws_dashboard.c
 * 
 * Updated: 03Aug15
 * 
 * 
 */

#define  LINUX //WINDOWS //
//#define  DEBUG

#include "ws_dashboard.h"

// Gobal Variables
int * cp_memmap = NULL;
int * cj_memmap = NULL;
int   mapped_size;
int beta2 = FALSE;
int alpha_beta1 = FALSE;

parmDataT parmData[NUM_SCR][NUM_PARMS] =

        {
         // Screen 1
            {
                // Name  Row Col Value Formay Row Col Unit

            		/*
            	//Updated from spreadsheet 16Sept15

            		{PsVccint1V0, "PS Vccint 1V0", 1, 1, 0, 1, 1, 19,"V"},																		{CpSw2V5, "CP SW 2V5", 1, 28, 0, 0, 1, 46,"V"},													{PolMgt1V0_V, "POL MGT 1V0_V", 1, 55, 0, 1, 1, 73,"V"},
            		{PsVintMin1V0, "PS Vint min 1V0", 2, 1, 0, 1, 2, 19,"V"},																		{Brd3V3, "Brd 3V3", 2, 28, 0, 0, 2, 46,"V"},													{PolMgt1V0_I, "POL MGT 1V0_I", 2, 55, 0, 0, 2, 73,"A"},
            		{PsVintMax1V0, "PS Vint max 1V0", 3, 1, 0, 1, 3, 19,"V"},																		{Pol3V3_V, "POL 3V3_ V", 3, 28, 0, 0, 3, 46,"V"},													{CjMgt1V2, "CJ MGT 1V2", 3, 55, 0, 0, 3, 73,"V"},
            		{PsVccaux1V8, "PS Vccaux 1V8", 4, 1, 0, 1, 4, 19,"V"},																		{Pol3V3_I, "POL 3V3_ I", 4, 28, 0, 0, 4, 46,"A"},													{PolMgt1V2_V, "POL MGT 1V2_V ", 4, 55, 0, 0, 4, 73,"V"},
            		{PsVauxMin1V8, "PS Vaux min 1V8", 5, 1, 0, 1, 5, 19,"V"},																		{CpSw3V3, "CP SW 3V3", 5, 28, 0, 0, 5, 46,"V"},													{PolMgt1V2_I, "POL MGT 1V2_I", 5, 55, 0, 0, 5, 73,"A"},
            		{PsVauxMax1V8, "PS Vaux max 1V8", 6, 1, 0, 1, 6, 19,"V"},																		{CjSw3V3, "CJ SW 3V3", 6, 28, 0, 0, 6, 46,"V"},													{CjMgt1V8, "CJ MGT 1V8", 6, 55, 0, 0, 6, 73,"V"},
            		{PlVbram1V0, "PL Vbram 1V0", 7, 1, 0, 1, 7, 19,"V"},																		{Cu3V3, "CU 3V3", 7, 28, 0, 0, 7, 46,"V"},													{Blank54, "XXXXXXXXXXXXXXX", 7, 55, 0, 4, 7, 73,"X"},
            		{PlVbramMin1V0, "PL Vbram min 1V0", 8, 1, 0, 1, 8, 19,"V"},																		{Brd5V0, "Brd 5V0", 8, 28, 0, 0, 8, 46,"V"},													{Blank55, "XXXXXXXXXXXXXXX", 8, 55, 0, 4, 8, 73,"X"},
            		{PlVbramMax1V0, "PL Vbram max 1V0", 9, 1, 0, 1, 9, 19,"V"},																		{Brd12V0, "Brd 12V0", 9, 28, 0, 0, 9, 46,"V"},													{Blank56, "XXXXXXXXXXXXXXX", 9, 55, 0, 4, 9, 73,"X"},
            		{PsVccmem1V35, "PS Vccmem 1V35", 10, 1, 0, 1, 10, 19,"V"},																		{Dspy12V0, "DSPY 12V0", 10, 28, 0, 0, 10, 46,"V"},													{L22V5, "L2 2V5", 10, 55, 0, 0, 10, 73,"V"},
            		{PsVmemMin1V35, "PS Vmem min 1V35", 11, 1, 0, 1, 11, 19,"V"},																		{CjVccint0V95, "CJ Vccint 0V95", 11, 28, 0, 1, 11, 46,"V"},													{L21V8, "L2 1V8", 11, 55, 0, 0, 11, 73,"V"},
            		{PsVmemMax1V35, "PS Vmem max 1V35", 12, 1, 0, 1, 12, 19,"V"},																		{CjVintMin0V95, "CJ Vint min 0V95", 12, 28, 0, 1, 12, 46,"V"},													{L2Pll1V0, "L2 PLL 1V0", 12, 55, 0, 1, 12, 73,"V"},
            		{BrdDdr31V35, "Brd DDR3 1V35", 13, 1, 0, 0, 13, 19,"V"},																		{CjVintMax0V95, "CJ Vint max 0V95", 13, 28, 0, 1, 13, 46,"V"},													{L2Vdd0V95, "L2 VDD 0V95", 13, 55, 0, 1, 13, 73,"V"},
            		{PsDdr30V675, "PS DDR3 0V675", 14, 1, 0, 1, 14, 19,"V"},																		{PolVint1V0_V, "POL VINT 1V0_ V", 14, 28, 0, 1, 14, 46,"V"},													{PolL2Vdd_V, "POL L2 VDD_V", 14, 55, 0, 1, 14, 73,"V"},
            		{PlDdr30V675, "PL DDR3 0V675", 15, 1, 0, 1, 15, 19,"V"},																		{PolVint1V_I0, "POL VINT 1V_ I0", 15, 28, 0, 0, 15, 46,"A"},													{PolL2Vdd_I0, "POL L2 VDD_I0", 15, 55, 0, 0, 15, 73,"A"},
            		{PlMgt1V0, "PL MGT 1V0", 16, 1, 0, 0, 16, 19,"V"},																		{PolVint1V_I1, "POL VINT 1V_ I1", 16, 28, 0, 0, 16, 46,"A"},													{PolL2Vdd_I1, "POL L2 VDD_I1", 16, 55, 0, 0, 16, 73,"A"},
            		{PlMgt1V2, "PL MGT 1V2", 17, 1, 0, 0, 17, 19,"V"},																		{PolVint1V_It, "POL VINT 1V_ It", 17, 28, 0, 0, 17, 46,"A"},													{PolL2Vdd_I2, "POL L2 VDD_I2", 17, 55, 0, 0, 17, 73,"A"},
            		{PlMgt1V8, "PL MGT 1V8", 18, 1, 0, 0, 18, 19,"V"},																		{CjVbram0V95, "CJ Vbram 0V95", 18, 28, 0, 1, 18, 46,"V"},													{PolL2Vdd_I3, "POL L2 VDD_I3", 18, 55, 0, 0, 18, 73,"A"},
            		{CpBrd1V0, "CP Brd 1V0", 19, 1, 0, 0, 19, 19,"V"},																		{CjVramMin0V95, "CJ Vram min 0V95", 19, 28, 0, 1, 19, 46,"V"},													{PolL2Vdd_I4, "POL L2 VDD_I4", 19, 55, 0, 0, 19, 73,"A"},
            		{Pex1V0, "PEX 1V0", 20, 1, 0, 0, 20, 19,"V"},																		{CjVramMax0V95, "CJ Vram max 0V95", 20, 28, 0, 1, 20, 46,"V"},													{PolL2Vdd_I5, "POL L2 VDD_I5", 20, 55, 0, 0, 20, 73,"A"},
            		{RoboBrd1V2, "Robo Brd 1V2", 21, 1, 0, 0, 21, 19,"V"},																		{CjVccaux1V8, "CJ Vccaux 1V8", 21, 28, 0, 0, 21, 46,"V"},													{PolL2Vdd_It, "POL L2 VDD_It", 21, 55, 0, 0, 21, 73,"A"},
            		{Nco1V8, "NCO 1V8", 22, 1, 0, 0, 22, 19,"V"},																		{CjVauxMin1V8, "CJ Vaux min 1V8", 22, 28, 0, 0, 22, 46,"V"},													{L2Avdd1V0, "L2 AVDD 1V0", 22, 55, 0, 1, 22, 73,"V"},
            		{CpBrd1V8, "CP Brd 1V8", 23, 1, 0, 0, 23, 19,"V"},																		{CjVauxMax1V8, "CJ Vaux max 1V8", 23, 28, 0, 0, 23, 46,"V"},													{PolL2Avdd_V, "POL L2 AVDD_V", 23, 55, 0, 1, 23, 73,"V"},
            		{Brd2V5, "Brd 2V5", 24, 1, 0, 0, 24, 19,"V"},																		{CjMgt1V0, "CJ MGT 1V0", 24, 28, 0, 1, 24, 46,"V"},													{PolL2Avdd_I, "POL L2 AVDD_I", 24, 55, 0, 0, 24, 73,"A"},

  */
                	//Updated from spreadsheet 25Sept15
            		{PsVccint1V0, "PS Vccint 1V0", 1, 1, 0, 1, 1, 19,"V"},																		{CpSw2V5, "CP SW 2V5", 1, 28, 0, 0, 1, 46,"V"},													{PolMgt1V0_V, "POL MGT 1V0_V", 1, 55, 0, 1, 1, 73,"V"},
            		{PsVintMin1V0, "PS Vint min 1V0", 2, 1, 0, 1, 2, 19,"V"},																		{Brd3V3, "Brd 3V3", 2, 28, 0, 0, 2, 46,"V"},													{PolMgt1V0_I, "POL MGT 1V0_I", 2, 55, 0, 0, 2, 73,"A"},
            		{PsVintMax1V0, "PS Vint max 1V0", 3, 1, 0, 1, 3, 19,"V"},																		{Pol3V3_V, "POL 3V3_ V", 3, 28, 0, 0, 3, 46,"V"},													{CjMgt1V2, "CJ MGT 1V2", 3, 55, 0, 0, 3, 73,"V"},
            		{PsVccaux1V8, "PS Vccaux 1V8", 4, 1, 0, 1, 4, 19,"V"},																		{Pol3V3_I, "POL 3V3_ I", 4, 28, 0, 0, 4, 46,"A"},													{PolMgt1V2_V, "POL MGT 1V2_V ", 4, 55, 0, 0, 4, 73,"V"},
            		{PsVauxMin1V8, "PS Vaux min 1V8", 5, 1, 0, 1, 5, 19,"V"},																		{CpSw3V3, "CP SW 3V3", 5, 28, 0, 0, 5, 46,"V"},													{PolMgt1V2_I, "POL MGT 1V2_I", 5, 55, 0, 0, 5, 73,"A"},
            		{PsVauxMax1V8, "PS Vaux max 1V8", 6, 1, 0, 1, 6, 19,"V"},																		{CjSw3V3, "CJ SW 3V3", 6, 28, 0, 0, 6, 46,"V"},													{CjMgt1V8, "CJ MGT 1V8", 6, 55, 0, 0, 6, 73,"V"},
            		{PlVbram1V0, "PL Vbram 1V0", 7, 1, 0, 1, 7, 19,"V"},																		{Cu3V3, "CU 3V3", 7, 28, 0, 0, 7, 46,"V"},													{Blank54, "XXXXXXXXXXXXXXX", 7, 55, 0, 4, 7, 73,"X"},
            		{PlVbramMin1V0, "PL Vbram min 1V0", 8, 1, 0, 1, 8, 19,"V"},																		{Brd5V0, "Brd 5V0", 8, 28, 0, 0, 8, 46,"V"},													{Blank55, "XXXXXXXXXXXXXXX", 8, 55, 0, 4, 8, 73,"X"},
            		{PlVbramMax1V0, "PL Vbram max 1V0", 9, 1, 0, 1, 9, 19,"V"},																		{Brd12V0, "Brd 12V0", 9, 28, 0, 0, 9, 46,"V"},													{Blank56, "XXXXXXXXXXXXXXX", 9, 55, 0, 4, 9, 73,"X"},
            		{PsVccmem1V35, "PS Vccmem 1V35", 10, 1, 0, 1, 10, 19,"V"},																		{Dspy12V0, "DSPY 12V0", 10, 28, 0, 0, 10, 46,"V"},													{L22V5, "L2 2V5", 10, 55, 0, 0, 10, 73,"V"},
            		{PsVmemMin1V35, "PS Vmem min 1V35", 11, 1, 0, 1, 11, 19,"V"},																		{CjVccint0V95, "CJ Vccint 0V95", 11, 28, 0, 1, 11, 46,"V"},													{L21V8, "L2 1V8", 11, 55, 0, 0, 11, 73,"V"},
            		{PsVmemMax1V35, "PS Vmem max 1V35", 12, 1, 0, 1, 12, 19,"V"},																		{CjVintMin0V95, "CJ Vint min 0V95", 12, 28, 0, 1, 12, 46,"V"},													{L2Pll1V0, "L2 PLL 1V0", 12, 55, 0, 1, 12, 73,"V"},
            		{BrdDdr31V35, "Brd DDR3 1V35", 13, 1, 0, 0, 13, 19,"V"},																		{CjVintMax0V95, "CJ Vint max 0V95", 13, 28, 0, 1, 13, 46,"V"},													{L2Vdd0V95, "L2 VDD 0V95", 13, 55, 0, 1, 13, 73,"V"},
            		{PsDdr30V675, "PS DDR3 0V675", 14, 1, 0, 1, 14, 19,"V"},																		{PolVint1V0_V, "POL VINT 1V0_ V", 14, 28, 0, 1, 14, 46,"V"},													{PolL2Vdd_V, "POL L2 VDD_V", 14, 55, 0, 1, 14, 73,"V"},
            		{PlDdr30V675, "PL DDR3 0V675", 15, 1, 0, 1, 15, 19,"V"},																		{PolVint1V0_I0, "POL VINT 1V0_ I0", 15, 28, 0, 0, 15, 46,"A"},													{PolL2Vdd_I0, "POL L2 VDD_I0", 15, 55, 0, 0, 15, 73,"A"},
            		{PlMgt1V0, "PL MGT 1V0", 16, 1, 0, 0, 16, 19,"V"},																		{PolVint1V0_I1, "POL VINT 1V0_ I1", 16, 28, 0, 0, 16, 46,"A"},													{PolL2Vdd_I1, "POL L2 VDD_I1", 16, 55, 0, 0, 16, 73,"A"},
            		{PlMgt1V2, "PL MGT 1V2", 17, 1, 0, 0, 17, 19,"V"},																		{PolVint1V_It, "POL VINT 1V_ It", 17, 28, 0, 0, 17, 46,"A"},													{PolL2Vdd_I2, "POL L2 VDD_I2", 17, 55, 0, 0, 17, 73,"A"},
            		{PlMgt1V8, "PL MGT 1V8", 18, 1, 0, 0, 18, 19,"V"},																		{CjVbram0V95, "CJ Vbram 0V95", 18, 28, 0, 1, 18, 46,"V"},													{PolL2Vdd_I3, "POL L2 VDD_I3", 18, 55, 0, 0, 18, 73,"A"},
            		{CpBrd1V0, "CP Brd 1V0", 19, 1, 0, 0, 19, 19,"V"},																		{CjVramMin0V95, "CJ Vram min 0V95", 19, 28, 0, 1, 19, 46,"V"},													{PolL2Vdd_I4, "POL L2 VDD_I4", 19, 55, 0, 0, 19, 73,"A"},
            		{Pex1V0, "PEX 1V0", 20, 1, 0, 0, 20, 19,"V"},																		{CjVramMax0V95, "CJ Vram max 0V95", 20, 28, 0, 1, 20, 46,"V"},													{PolL2Vdd_I5, "POL L2 VDD_I5", 20, 55, 0, 0, 20, 73,"A"},
            		{RoboBrd1V2, "Robo Brd 1V2", 21, 1, 0, 0, 21, 19,"V"},																		{CjVccaux1V8, "CJ Vccaux 1V8", 21, 28, 0, 0, 21, 46,"V"},													{PolL2Vdd_It, "POL L2 VDD_It", 21, 55, 0, 0, 21, 73,"A"},
            		{Nco1V8, "NCO 1V8", 22, 1, 0, 0, 22, 19,"V"},																		{CjVauxMin1V8, "CJ Vaux min 1V8", 22, 28, 0, 0, 22, 46,"V"},													{L2Avdd1V0, "L2 AVDD 1V0", 22, 55, 0, 1, 22, 73,"V"},
            		{CpBrd1V8, "CP Brd 1V8", 23, 1, 0, 0, 23, 19,"V"},																		{CjVauxMax1V8, "CJ Vaux max 1V8", 23, 28, 0, 0, 23, 46,"V"},													{PolL2Avdd_V, "POL L2 AVDD_V", 23, 55, 0, 1, 23, 73,"V"},
            		{Brd2V5, "Brd 2V5", 24, 1, 0, 0, 24, 19,"V"},																		{CjMgt1V0, "CJ MGT 1V0", 24, 28, 0, 1, 24, 46,"V"},													{PolL2Avdd_I, "POL L2 AVDD_I", 24, 55, 0, 0, 24, 73,"A"},


           },

            // Screen 2
            {

            		//Updated from spreadsheet 14Sept15
            		{PolL2Vdd_T, "POL L2 VDD_T", 1, 1, 1, 2, 1, 19,"C"},																		{Psu1Vin, "PSU1 VIN", 1, 28, 25, 2, 1, 46,"V"},														{Psu2Vin, "PSU2 VIN", 1, 55, 49, 2, 1, 73,"V"},
            		{PolVint1V0_T, "POL VINT 1V0_T", 2, 1, 2, 2, 2, 19,"C"},																		{Psu1Iin, "PSU1 IIN", 2, 28, 26, 0, 2, 46,"A"},														{Psu2Iin, "PSU2 IIN", 2, 55, 50, 0, 2, 73,"A"},
            		{BrdLocal1_T, "Brd Local 1_T", 3, 1, 3, 2, 3, 19,"C"},																		{Psu1Pin, "PSU1 PIN", 3, 28, 27, 2, 3, 46,"W"},														{Psu2Pin, "PSU2 PIN", 3, 55, 51, 2, 3, 73,"W"},
            		{CpDieRmt_T, "CP Die Rmt_T", 4, 1, 4, 2, 4, 19,"C"},																		{Psu1Vout, "PSU1 VOUT", 4, 28, 28, 0, 4, 46,"V"},														{Psu2Vout, "PSU2 VOUT", 4, 55, 52, 0, 4, 73,"V"},
            		{CpXadcDie_T, "CP XADC Die_T", 5, 1, 5, 2, 5, 19,"C"},																		{Psu1Iout, "PSU1 IOUT", 5, 28, 29, 0, 5, 46,"A"},														{Psu2Iout, "PSU2 IOUT", 5, 55, 53, 0, 5, 73,"A"},
            		{CpAdcMinDie_T, "CP ADC Min Die_T", 6, 1, 6, 2, 6, 19,"C"},																		{Psu1Pout, "PSU1 POUT", 6, 28, 30, 2, 6, 46,"W"},														{Psu2Pout, "PSU2 POUT", 6, 55, 54, 2, 6, 73,"W"},
            		{CpAdcMaxDie_T, "CP ADC Max Die_T", 7, 1, 7, 2, 7, 19,"C"},																		{Psu1Hotspot_T, "PSU1 HotSpot_T", 7, 28, 31, 2, 7, 46,"C"},														{Psu2Hotspot_T, "PSU2 HotSpot_T", 7, 55, 55, 2, 7, 73,"C"},
            		{BrdLocal2_T, "Brd Local 2_T", 8, 1, 8, 2, 8, 19,"C"},																		{Psu1Inlet_T, "PSU1 Inlet_T", 8, 28, 32, 2, 8, 46,"C"},														{Psu2Inlet_T, "PSU2 Inlet_T", 8, 55, 56, 2, 8, 73,"C"},
            		{CjDieRmt_T, "CJ Die Rmt_T", 9, 1, 9, 2, 9, 19,"C"},																		{Psu1Exhaust_T, "PSU1 Exhaust_T", 9, 28, 33, 2, 9, 46,"C"},														{Psu2Exhaust_T, "PSU2 Exhaust_T", 9, 55, 57, 2, 9, 73,"C"},
            		{CjXadcDie_T, "CJ XADC Die_T", 10, 1, 10, 2, 10, 19,"C"},																		{Psu1FanSpd, "PSU1 FAN SPD", 10, 28, 34, 3, 10, 46,"R"},														{Psu2FanSpd, "PSU2 FAN SPD", 10, 55, 58, 3, 10, 73,"R"},
            		{CjAdcMinDie_T, "CJ ADC Min Die_T", 11, 1, 11, 2, 11, 19,"C"},																		{Psu1Efficiency, "PSU1 Efficiency", 11, 28, 35, 0, 11, 46,"%"},														{Psu2Efficiency, "PSU2 Efficiency", 11, 55, 59, 0, 11, 73,"%"},
            		{CjAdcMaxDie_T, "CJ ADC Max Die_T", 12, 1, 12, 2, 12, 19,"C"},																		{Cu1FanSpd1, "CU1 Fan Spd 1", 12, 28, 36, 3, 12, 46,"R"},														{Cu2FanSpd1, "CU2 Fan Spd 1", 12, 55, 60, 3, 12, 73,"R"},
            		{BrdLocal3_T, "Brd Local 3_T", 13, 1, 13, 2, 13, 19,"C"},																		{Cu1FanSpd2, "CU1 Fan Spd 2", 13, 28, 37, 3, 13, 46,"R"},														{Cu2FanSpd2, "CU2 Fan Spd 2", 13, 55, 61, 3, 13, 73,"R"},
            		{L2DieRmt_T, "L2 Die Rmt_T", 14, 1, 14, 2, 14, 19,"C"},																		{Cu1FanSpd3, "CU1 Fan Spd 3", 14, 28, 38, 3, 14, 46,"R"},														{Cu2FanSpd3, "CU2 Fan Spd 3", 14, 55, 62, 3, 14, 73,"R"},
            		{Psu1Hotspot_T, "PSU1 HotSpot_T", 15, 1, 15, 2, 15, 19,"C"},																		{Cu1FanSpd4, "CU1 Fan Spd 4", 15, 28, 39, 3, 15, 46,"R"},														{Cu2FanSpd4, "CU2 Fan Spd 4", 15, 55, 63, 3, 15, 73,"R"},
            		{Psu1Inlet_T, "PSU1 Inlet_T", 16, 1, 16, 2, 16, 19,"C"},																		{Cu1FanSpd5, "CU1 Fan Spd 5", 16, 28, 40, 3, 16, 46,"R"},														{Cu2FanSpd5, "CU2 Fan Spd 5", 16, 55, 64, 3, 16, 73,"R"},
            		{Psu1Exhaust_T, "PSU1 Exhaust_T", 17, 1, 17, 2, 17, 19,"C"},																		{Cu1FanSpd6, "CU1 Fan Spd 6", 17, 28, 41, 3, 17, 46,"R"},														{Cu2FanSpd6, "CU2 Fan Spd 6", 17, 55, 65, 3, 17, 73,"R"},
            		{Psu2Hotspot_T, "PSU2 HotSpot_T", 18, 1, 18, 2, 18, 19,"C"},																		{Cu1Temp1, "CU1 Temp 1", 18, 28, 42, 2, 18, 46,"C"},														{Cu2Temp1, "CU2 Temp 1", 18, 55, 66, 2, 18, 73,"C"},
            		{Psu2Inlet_T, "PSU2 Inlet_T", 19, 1, 19, 2, 19, 19,"C"},																		{Cu1Temp2, "CU1 Temp 2", 19, 28, 43, 2, 19, 46,"C"},														{Cu2Temp2, "CU2 Temp 2", 19, 55, 67, 2, 19, 73,"C"},
            		{Psu2Exhaust_T, "PSU2 Exhaust_T", 20, 1, 20, 2, 20, 19,"C"},																		{Cu1Temp3, "CU1 Temp 3", 20, 28, 44, 2, 20, 46,"C"},														{Cu2Temp3, "CU2 Temp 3", 20, 55, 68, 2, 20, 73,"C"},
            		{Cu1CtrlTemp, "CU1 Ctrl Temp", 21, 1, 21, 2, 21, 19,"C"},																		{Cu1CtrlTemp, "CU1 Ctrl Temp", 21, 28, 45, 2, 21, 46,"C"},														{Cu2CtrlTemp, "CU2 Ctrl Temp", 21, 55, 69, 2, 21, 73,"C"},
            		{Cu1Remote, "CU1 Remote", 22, 1, 22, 2, 22, 19,"C"},																		{Cu1Remote, "CU1 Remote", 22, 28, 46, 2, 22, 46,"C"},														{Cu2Remote, "CU2 Remote", 22, 55, 70, 2, 22, 73,"C"},
            		{Cu2CtrlTemp, "CU2 Ctrl Temp", 23, 1, 23, 2, 23, 19,"C"},																		{Blank46, "XXXXXXXXXXXXXXX", 23, 28, 47, 4, 23, 46,"X"},														{Blank70, "XXXXXXXXXXXXXXX", 23, 55, 71, 4, 23, 73,"X"},
            		{Cu2Remote, "CU2 Remote", 24, 1, 24, 2, 24, 19,"C"},																		{Blank47, "XXXXXXXXXXXXXXX", 24, 28, 48, 3, 24, 46,"X"},														{Blank71, "XXXXXXXXXXXXXXX", 24, 55, 72, 3, 24, 73,"X"},


           }/*,

           {
        		   {PsVccint1V0, "PS Vccint 1V0", 1, 1, 0, 1, 1, 19,"V"},																		{CpSw2V5, "CP SW 2V5", 1, 28, 0, 0, 1, 46,"V"},														{PolMgt1V0_V, "POL MGT 1V0_V", 1, 55, 0, 1, 1, 73,"V"},
        		   {PsVintMin1V0, "PS Vint min 1V0", 2, 1, 0, 1, 2, 19,"V"},																		{Brd3V3, "Brd 3V3", 2, 28, 0, 0, 2, 46,"V"},														{PolMgt1V0_I, "POL MGT 1V0_I", 2, 55, 0, 0, 2, 73,"A"},
        		   {PsVintMax1V0, "PS Vint max 1V0", 3, 1, 0, 1, 3, 19,"V"},																		{Pol3V3_V, "POL 3V3_ V", 3, 28, 0, 0, 3, 46,"V"},														{CjMgt1V2, "CJ MGT 1V2", 3, 55, 0, 0, 3, 73,"V"},
        		   {PsVccaux1V8, "PS Vccaux 1V8", 4, 1, 0, 1, 4, 19,"V"},																		{Pol3V3_I, "POL 3V3_ I", 4, 28, 0, 0, 4, 46,"A"},														{PolMgt1V2_V, "POL MGT 1V2_V ", 4, 55, 0, 0, 4, 73,"V"},
        		   {PsVauxMin1V8, "PS Vaux min 1V8", 5, 1, 0, 1, 5, 19,"V"},																		{CpSw3V3, "CP SW 3V3", 5, 28, 0, 0, 5, 46,"V"},														{PolMgt1V2_I, "POL MGT 1V2_I", 5, 55, 0, 0, 5, 73,"A"},
        		   {PsVauxMax1V8, "PS Vaux max 1V8", 6, 1, 0, 1, 6, 19,"V"},																		{CjSw3V3, "CJ SW 3V3", 6, 28, 0, 0, 6, 46,"V"},														{CjMgt1V8, "CJ MGT 1V8", 6, 55, 0, 0, 6, 73,"V"},
        		   {PlVbram1V0, "PL Vbram 1V0", 7, 1, 0, 1, 7, 19,"V"},																		{Cu3V3, "CU 3V3", 7, 28, 0, 0, 7, 46,"V"},														{Blank54, "XXXXXXXXXXXXXXX", 7, 55, 0, 4, 7, 73,"X"},
        		   {PlVbramMin1V0, "PL Vbram min 1V0", 8, 1, 0, 1, 8, 19,"V"},																		{Brd5V0, "Brd 5V0", 8, 28, 0, 0, 8, 46,"V"},														{Blank55, "XXXXXXXXXXXXXXX", 8, 55, 0, 4, 8, 73,"X"},
        		   {PlVbramMax1V0, "PL Vbram max 1V0", 9, 1, 0, 1, 9, 19,"V"},																		{Brd12V0, "Brd 12V0", 9, 28, 0, 0, 9, 46,"V"},														{Blank56, "XXXXXXXXXXXXXXX", 9, 55, 0, 4, 9, 73,"X"},
        		   {PsVccmem1V35, "PS Vccmem 1V35", 10, 1, 0, 1, 10, 19,"V"},																		{Dspy12V0, "DSPY 12V0", 10, 28, 0, 0, 10, 46,"V"},														{L22V5, "L2 2V5", 10, 55, 0, 0, 10, 73,"V"},
        		   {PsVmemMin1V35, "PS Vmem min 1V35", 11, 1, 0, 1, 11, 19,"V"},																		{CjVccint0V95, "CJ Vccint 0V95", 11, 28, 0, 1, 11, 46,"V"},														{L21V8, "L2 1V8", 11, 55, 0, 0, 11, 73,"V"},
        		   {PsVmemMax1V35, "PS Vmem max 1V35", 12, 1, 0, 1, 12, 19,"V"},																		{CjVintMin0V95, "CJ Vint min 0V95", 12, 28, 0, 1, 12, 46,"V"},														{L2Pll1V0, "L2 PLL 1V0", 12, 55, 0, 1, 12, 73,"V"},
        		   {BrdDdr31V35, "Brd DDR3 1V35", 13, 1, 0, 0, 13, 19,"V"},																		{CjVintMax0V95, "CJ Vint max 0V95", 13, 28, 0, 1, 13, 46,"V"},														{L2Vdd0V95, "L2 VDD 0V95", 13, 55, 0, 1, 13, 73,"V"},
        		   {PsDdr30V675, "PS DDR3 0V675", 14, 1, 0, 1, 14, 19,"V"},																		{PolVint1V0_V, "POL VINT 1V0_ V", 14, 28, 0, 1, 14, 46,"V"},														{PolL2Vdd_V, "POL L2 VDD_V", 14, 55, 0, 1, 14, 73,"V"},
        		   {PlDdr30V675, "PL DDR3 0V675", 15, 1, 0, 1, 15, 19,"V"},																		{PolVint1V0_I0, "POL VINT 1V0_ I0", 15, 28, 0, 0, 15, 46,"A"},														{PolL2Vdd_I0, "POL L2 VDD_I0", 15, 55, 0, 0, 15, 73,"A"},
        		   {PlMgt1V0, "PL MGT 1V0", 16, 1, 0, 0, 16, 19,"V"},																		{PolVint1V0_I1, "POL VINT 1V0_ I1", 16, 28, 0, 0, 16, 46,"A"},														{PolL2Vdd_I1, "POL L2 VDD_I1", 16, 55, 0, 0, 16, 73,"A"},
        		   {PlMgt1V2, "PL MGT 1V2", 17, 1, 0, 0, 17, 19,"V"},																		{PolVint1V_It, "POL VINT 1V_ It", 17, 28, 0, 0, 17, 46,"A"},														{PolL2Vdd_I2, "POL L2 VDD_I2", 17, 55, 0, 0, 17, 73,"A"},
        		   {PlMgt1V8, "PL MGT 1V8", 18, 1, 0, 0, 18, 19,"V"},																		{CjVbram0V95, "CJ Vbram 0V95", 18, 28, 0, 1, 18, 46,"V"},														{PolL2Vdd_I3, "POL L2 VDD_I3", 18, 55, 0, 0, 18, 73,"A"},
        		   {CpBrd1V0, "CP Brd 1V0", 19, 1, 0, 0, 19, 19,"V"},																		{CjVramMin0V95, "CJ Vram min 0V95", 19, 28, 0, 1, 19, 46,"V"},														{PolL2Vdd_I4, "POL L2 VDD_I4", 19, 55, 0, 0, 19, 73,"A"},
        		   {Pex1V0, "PEX 1V0", 20, 1, 0, 0, 20, 19,"V"},																		{CjVramMax0V95, "CJ Vram max 0V95", 20, 28, 0, 1, 20, 46,"V"},														{PolL2Vdd_I5, "POL L2 VDD_I5", 20, 55, 0, 0, 20, 73,"A"},
        		   {RoboBrd1V2, "Robo Brd 1V2", 21, 1, 0, 0, 21, 19,"V"},																		{CjVccaux1V8, "CJ Vccaux 1V8", 21, 28, 0, 0, 21, 46,"V"},														{PolL2Vdd_It, "POL L2 VDD_It", 21, 55, 0, 0, 21, 73,"A"},
        		   {Nco1V8, "NCO 1V8", 22, 1, 0, 0, 22, 19,"V"},																		{CjVauxMin1V8, "CJ Vaux min 1V8", 22, 28, 0, 0, 22, 46,"V"},														{L2Avdd1V0, "L2 AVDD 1V0", 22, 55, 0, 1, 22, 73,"V"},
        		   {CpBrd1V8, "CP Brd 1V8", 23, 1, 0, 0, 23, 19,"V"},																		{CjVauxMax1V8, "CJ Vaux max 1V8", 23, 28, 0, 0, 23, 46,"V"},														{PolL2Avdd_V, "POL L2 AVDD_V", 23, 55, 0, 1, 23, 73,"V"},
        		   {Brd2V5, "Brd 2V5", 24, 1, 0, 0, 24, 19,"V"},																		{CjMgt1V0, "CJ MGT 1V0", 24, 28, 0, 1, 24, 46,"V"},														{PolL2Avdd_I, "POL L2 AVDD_I", 24, 55, 0, 0, 24, 73,"A"},
        		   {PolL2Vdd_T, "POL L2 VDD_T", 25, 1, 0, 2, 25, 19,"C"},																		{Psu1Vin, "PSU1 VIN", 25, 28, 25, 2, 25, 46,"V"},														{Psu2Vin, "PSU2 VIN", 25, 55, 49, 2, 25, 73,"V"},
        		   {PolVint1V0_T, "POL VINT 1V0_T", 26, 1, 0, 2, 26, 19,"C"},																		{Psu1Iin, "PSU1 IIN", 26, 28, 26, 0, 26, 46,"A"},														{Psu2Iin, "PSU2 IIN", 26, 55, 50, 0, 26, 73,"A"},
        		   {BrdLocal1_T, "Brd Local 1_T", 27, 1, 0, 2, 27, 19,"C"},																		{Psu1Pin, "PSU1 PIN", 27, 28, 27, 2, 27, 46,"W"},														{Psu2Pin, "PSU2 PIN", 27, 55, 51, 2, 27, 73,"W"},
        		   {CpDieRmt_T, "CP Die Rmt_T", 28, 1, 0, 2, 28, 19,"C"},																		{Psu1Vout, "PSU1 VOUT", 28, 28, 28, 0, 28, 46,"V"},														{Psu2Vout, "PSU2 VOUT", 28, 55, 52, 0, 28, 73,"V"},
        		   {CpXadcDie_T, "CP XADC Die_T", 29, 1, 0, 2, 29, 19,"C"},																		{Psu1Iout, "PSU1 IOUT", 29, 28, 29, 0, 29, 46,"A"},														{Psu2Iout, "PSU2 IOUT", 29, 55, 53, 0, 29, 73,"A"},
        		   {CpAdcMinDie_T, "CP ADC Min Die_T", 30, 1, 0, 2, 30, 19,"C"},																		{Psu1Pout, "PSU1 POUT", 30, 28, 30, 2, 30, 46,"W"},														{Psu2Pout, "PSU2 POUT", 30, 55, 54, 2, 30, 73,"W"},
        		   {CpAdcMaxDie_T, "CP ADC Max Die_T", 31, 1, 0, 2, 31, 19,"C"},																		{Psu1Hotspot_T, "PSU1 HotSpot_T", 31, 28, 31, 2, 31, 46,"C"},														{Psu2Hotspot_T, "PSU2 HotSpot_T", 31, 55, 55, 2, 31, 73,"C"},
        		   {BrdLocal2_T, "Brd Local 2_T", 32, 1, 0, 2, 32, 19,"C"},																		{Psu1Inlet_T, "PSU1 Inlet_T", 32, 28, 32, 2, 32, 46,"C"},														{Psu2Inlet_T, "PSU2 Inlet_T", 32, 55, 56, 2, 32, 73,"C"},
        		   {CjDieRmt_T, "CJ Die Rmt_T", 33, 1, 0, 2, 33, 19,"C"},																		{Psu1Exhaust_T, "PSU1 Exhaust_T", 33, 28, 33, 2, 33, 46,"C"},														{Psu2Exhaust_T, "PSU2 Exhaust_T", 33, 55, 57, 2, 33, 73,"C"},
        		   {CjXadcDie_T, "CJ XADC Die_T", 34, 1, 0, 2, 34, 19,"C"},																		{Psu1FanSpd, "PSU1 FAN SPD", 34, 28, 34, 3, 34, 46,"R"},														{Psu2FanSpd, "PSU2 FAN SPD", 34, 55, 58, 3, 34, 73,"R"},
        		   {CjAdcMinDie_T, "CJ ADC Min Die_T", 35, 1, 0, 2, 35, 19,"C"},																		{Psu1Efficiency, "PSU1 Efficiency", 35, 28, 35, 0, 35, 46,"%"},														{Psu2Efficiency, "PSU2 Efficiency", 35, 55, 59, 0, 35, 73,"%"},
        		   {CjAdcMaxDie_T, "CJ ADC Max Die_T", 36, 1, 0, 2, 36, 19,"C"},																		{Cu1FanSpd1, "CU1 Fan Spd 1", 36, 28, 36, 3, 36, 46,"R"},														{Cu2FanSpd1, "CU2 Fan Spd 1", 36, 55, 60, 3, 36, 73,"R"},
        		   {BrdLocal3_T, "Brd Local 3_T", 37, 1, 0, 2, 37, 19,"C"},																		{Cu1FanSpd2, "CU1 Fan Spd 2", 37, 28, 37, 3, 37, 46,"R"},														{Cu2FanSpd2, "CU2 Fan Spd 2", 37, 55, 61, 3, 37, 73,"R"},
        		   {L2DieRmt_T, "L2 Die Rmt_T", 38, 1, 0, 2, 38, 19,"C"},																		{Cu1FanSpd3, "CU1 Fan Spd 3", 38, 28, 38, 3, 38, 46,"R"},														{Cu2FanSpd3, "CU2 Fan Spd 3", 38, 55, 62, 3, 38, 73,"R"},
        		   {Psu1Hotspot_T, "PSU1 HotSpot_T", 39, 1, 0, 2, 39, 19,"C"},																		{Cu1FanSpd4, "CU1 Fan Spd 4", 39, 28, 39, 3, 39, 46,"R"},														{Cu2FanSpd4, "CU2 Fan Spd 4", 39, 55, 63, 3, 39, 73,"R"},
        		   {Psu1Inlet_T, "PSU1 Inlet_T", 40, 1, 0, 2, 40, 19,"C"},																		{Cu1FanSpd5, "CU1 Fan Spd 5", 40, 28, 40, 3, 40, 46,"R"},														{Cu2FanSpd5, "CU2 Fan Spd 5", 40, 55, 64, 3, 40, 73,"R"},
        		   {Psu1Exhaust_T, "PSU1 Exhaust_T", 41, 1, 0, 2, 41, 19,"C"},																		{Cu1FanSpd6, "CU1 Fan Spd 6", 41, 28, 41, 3, 41, 46,"R"},														{Cu2FanSpd6, "CU2 Fan Spd 6", 41, 55, 65, 3, 41, 73,"R"},
        		   {Psu2Hotspot_T, "PSU2 HotSpot_T", 42, 1, 0, 2, 42, 19,"C"},																		{Cu1Temp1, "CU1 Temp 1", 42, 28, 42, 2, 42, 46,"C"},														{Cu2Temp1, "CU2 Temp 1", 42, 55, 66, 2, 42, 73,"C"},
        		   {Psu2Inlet_T, "PSU2 Inlet_T", 43, 1, 0, 2, 43, 19,"C"},																		{Cu1Temp2, "CU1 Temp 2", 43, 28, 43, 2, 43, 46,"C"},														{Cu2Temp2, "CU2 Temp 2", 43, 55, 67, 2, 43, 73,"C"},
        		   {Psu2Exhaust_T, "PSU2 Exhaust_T", 44, 1, 0, 2, 44, 19,"C"},																		{Cu1Temp3, "CU1 Temp 3", 44, 28, 44, 2, 44, 46,"C"},														{Cu2Temp3, "CU2 Temp 3", 44, 55, 68, 2, 44, 73,"C"},
        		   {Cu1CtrlTemp, "CU1 Ctrl Temp", 45, 1, 0, 2, 45, 19,"C"},																		{Cu1CtrlTemp, "CU1 Ctrl Temp", 45, 28, 45, 2, 45, 46,"C"},														{Cu2CtrlTemp, "CU2 Ctrl Temp", 45, 55, 69, 2, 45, 73,"C"},
        		   {Cu1Remote, "CU1 Remote", 46, 1, 0, 2, 46, 19,"C"},																		{Cu1Remote, "CU1 Remote", 46, 28, 46, 2, 46, 46,"C"},														{Cu2Remote, "CU2 Remote", 46, 55, 70, 2, 46, 73,"C"},
        		   {Cu2CtrlTemp, "CU2 Ctrl Temp", 47, 1, 0, 2, 47, 19,"C"},																		{Blank46, "XXXXXXXXXXXXXXX", 47, 28, 47, 4, 47, 46,"X"},														{Blank70, "XXXXXXXXXXXXXXX", 47, 55, 71, 4, 47, 73,"X"},
        		   {Cu2Remote, "CU2 Remote", 48, 1, 0, 2, 48, 19,"C"},																		{Blank47, "XXXXXXXXXXXXXXX", 48, 28, 48, 4, 48, 46,"X"},														{Blank71, "XXXXXXXXXXXXXXX", 48, 55, 72, 4, 48, 73,"X"},

           }*/


        };

// THis will be replaced with UIO later
/***************************************************************
 * Function: mem_map_xadc
 *
 * Description: Function to map HW address space
 *              address must be a page boundary
 * Parameters:
 *
 * Returns:
 *             -1 for error
 ****************************************************************/

int * mem_map_xadc(uint32_t address )
{
   int fd;
   void *mm;

   off_t page_offset, offset;

   page_offset = address % getpagesize();  // Need to be on page boundary
   offset = (off_t) (address - page_offset);  // Location from that page boundary

   mapped_size = getpagesize()*2;
   fd = open("/dev/mem", O_RDWR|O_SYNC);
   if (fd < 0)
     {
        printf("Error opening /dev/mem : %s\n",strerror(errno));
        return 0 ;
     }
   mm = mmap(NULL, mapped_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, offset);
   if (mm == MAP_FAILED)
     {
        printf("Error with mmap: %s\n",strerror(errno));
        close(fd);
        return 0;
     }
   return (int*)mm;
}

void gotoxy(int x,int y)
    {
   // printf("%c[%d;%df",ESC,x,y); //Row Col
    printf("%c[%d;%dH",ESC,x,y); //Row Col
    }

#ifdef LINUX

int kbhit(void)
    {
        struct timeval tv;
        
        fd_set read_fd;
        tv.tv_sec=0;
        tv.tv_usec=0;
        FD_ZERO(&read_fd);
        FD_SET(0,&read_fd);

        if(select(1, &read_fd, NULL, NULL, &tv) == -1)
            return 0;

        if(FD_ISSET(0,&read_fd))
            return 1;

        return 0;
    }    
#endif
    
void writeParms(scr_t scr)
{
    int parmIndex;
        
    for (parmIndex = 0; parmIndex <= NUM_PARMS - 1; parmIndex++)
      {
            gotoxy(parmData[scr][parmIndex].parmNameX, parmData[scr][parmIndex].parmNameY);
            printf("%s", parmData[scr][parmIndex].parmName);
            gotoxy(parmData[scr][parmIndex].parmNameX, parmData[scr][parmIndex].parmNameY + 24);
            printf("%s", parmData[scr][parmIndex].parmUnit);
      } // for
    commandLine();
} // writeParms


void commandLine(void)
{
    gotoxy(25,1);
    printf("Selet Screen: 1 or 2      28Sept15");
    gotoxy(25,50);
    printf("x to exit");
    gotoxy(25,22);

} //Command_line

void writeData(scr_t scr)
{
    int f;

   for (f = 0; f < NUM_PARMS; f++)
    {
      gotoxy(parmData[scr][f].parmValueX, parmData[scr][f].parmValueY);

        switch (parmData[scr][f].parmFormat)
        {
            case 0:
               printf("%3.2f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 1:
            	printf("%2.3f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 2:
                printf("%4.1f", parmValue[parmData[scr][f].parmIndex]);
                break;
            case 3:
                printf("%5d ", (int)parmValue[parmData[scr][f].parmIndex]);
                break;
            case 4: // Don't Print
                break;
            default:
            	printf("X");
				 gotoxy(27,1);
				 printf("Missing Format Parameter");
                break;

        } // switch (parmData

        // Debug Code
        if (f == -1)
        {
		  gotoxy(28,1);
		  printf("XADCValue:%f", parmValue[xadc_data[f].parmIndex]);
		  gotoxy(29,1);
		  printf("%3.2f", parmValue[parmData[scr][f].parmIndex]);
		  gotoxy(30,1);
		  printf("parmIndex:%d", parmData[scr][f].parmIndex);
        }

    } // for
#ifdef DEBUG
        // Debug code
		 gotoxy(26,1); // Debug delete after
        for (f = 0; f < 16; f++)
        {
		 printf("loop-%d:Index-%d:Val-%f:x-%d:y-%d\n",f,parmData[scr][f].parmIndex, parmData[scr][f].parmValue, parmData[scr][parmData[scr][f].parmIndex].parmValueX, parmData[scr][parmData[scr][f].parmIndex].parmValueY );
        }
#endif // DEBUG

} // writeData


int allocate_xadc_memory(void)
	{
		// Assign memory space for Gronckle XADCs
		cp_memmap = mem_map_xadc(XADC_BASE);
		if (cp_memmap == NULL)
		{
			printf("Error mapping Gronckle XADC memmap\n");
		 	return 0;
		} // if (cp_memap

		// Assign memory space for Cloud Jumper XADCs
		cj_memmap = mem_map_xadc(CJA_XADC_BASE);
		if (cj_memmap == NULL)
	      {
		 	printf("Error mapping Cloud Jumper XADC memmap\n");
		 	return 0;
	      }
      return 1;
	} //allocate_xadc_memory

//int main(void)

void print_usage()
    {
    printf("Usage: -a select alpha & beta1\n");
    printf("       -b select beta2\n");
    }

int main(int argc, char *argv[])
    {
    	int option = 0;


        char c = '1';
        int  x = 0;
        int update;

        while ((option = getopt(argc, argv,"abh")) != -1)
            {
            switch (option)
                {
                 case 'a' : alpha_beta1 = TRUE;
                     break;
                 case 'b' : beta2 = TRUE;
                     break;
                 case 'h' : print_usage();
                                  exit(1);
                     break;
                 case '?' : print_usage();
                            exit(1);
                     break;
                 default: print_usage();
                     exit(1);
                } // switch
            } //while
            if (alpha_beta1 == 0 && beta2 == 0)
                {
                print_usage();
                exit(1);
                }
            if (alpha_beta1 == 1 && beta2 == 1)
                {
                printf("Select only one option\n");
                print_usage();
                exit(1);
                }
       gotoxy(26,1);

     //  printf("alpha_beta1 %d, beta2 %d option %d\n",alpha_beta1, beta2, option);
     //  usleep(3000000);

        clear_scr();
        //printf("%c[>5l" , ESC ); // cursor hidden
        printf("%c[?25l" , ESC ); // cursor off
     //   printf("%c[?3h" , ESC ); // 132 column mode
     //   printf("%c[?3l" , ESC ); // 80 column mode
        
     //   gotoxy(25,1);
     //   printf("%c[2K" , ESC ); // clear line

        // Debug   pol_data(); // Debug remove from here
        // Debug exit(1);
        gotoxy(26,1);

        allocate_xadc_memory();

        writeParms(scr1);  // Write the list of parameters to the screen

        init_cp_xadc(); // Initialize the Gronckle XADCs

        while (c != 'x')
            {
        	update = 0;
            while (!kbhit())
                {
                    x++;
                    switch (c)
                        {   
                        case '1': //Screen one
                            {
                             if (update == 0)
                               {
                            	clear_scr();
                                writeParms(scr1);  // Write the list of parameters to the screen
                                update ++;
                               }
                            pol_data();
                             read_xadc();
                             writeData(scr1); // Write the data to the screen
                            break;
                            }
                        case '2': //Screen two
                            {
                                if (update == 0)
                                  {
                                   clear_scr();
                                   writeParms(scr2);  // Write the list of parameters to the screen
                                   update ++;
                                  }
                           // port_expander();
                            pol_data();
                            cu_data();
                            psu_data();
                            read_xadc();
                            brd_temps();
                            writeData(scr2); // Write the data to the screen
                            break;
                            }
                        case '3': //Screen three
                            if (update == 0)
                               {
                                clear_scr();
                                writeParms(scr3);  // Write the list of parameters to the screen
                                update ++;
                               }
                         pol_data();
                         cu_data();
                         psu_data();
                         read_xadc();
                         brd_temps();
                         writeData(scr3); // Write the data to the screen
                         break;

                        	break;
                        default:
                            {

                           // gotoxy(26,1);
                           // printf("Selet Screen: 1 or 2a");
                            }
                        } //Switch

                    gotoxy(25,65);
                    printf("Loop: %d:%c", x, c);
                    gotoxy(26,1);
                    usleep(500000);//delay(1000);
                } // while (!kbhit())
             c = getchar();
           } // while (c != 'x')
        printf("\n\n\n");
        // Release memory
        munmap((void*)XADC_BASE, mapped_size);
   	    munmap((void*)CJA_XADC_BASE, mapped_size);

        return 0;
}
