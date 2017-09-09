

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

parmDataT parmData[NUM_SCR][NUM_PARMS] =

{
// Screen 1
{
// Name  Row Col Value Formay Row Col Unit
{PsVccint1V0, "PS Vccint 1V0", 1, 1, 0, 1, 1, 19,"V"},				{CpSw2V5, "CP SW 2V5", 1, 28, 0, 0, 1, 46,"V"},				{PolMgt1V0_V, "POL MGT 1V0_V", 1, 55, 0, 1, 1, 73,"V"},
{PsVintMin1V0, "PS Vint min 1V0", 2, 1, 0, 1, 2, 19,"V"},				{Brd3V3, "Brd 3V3", 2, 28, 0, 0, 2, 46,"V"},				{PolMgt1V0_I, "POL MGT 1V0_I", 2, 55, 0, 0, 2, 73,"A"},
{PsVintMax1V0, "PS Vint max 1V0", 3, 1, 0, 1, 3, 19,"V"},				{Pol3V3_V, "POL 3V3_ V", 3, 28, 0, 0, 3, 46,"V"},				{CjMgt1V2, "CJ MGT 1V2", 3, 55, 0, 0, 3, 73,"V"},
{PsVccaux1V8, "PS Vccaux 1V8", 4, 1, 0, 1, 4, 19,"V"},				{Pol3V3_I, "POL 3V3_ I", 4, 28, 0, 0, 4, 46,"A"},				{PolMgt1V2_V, "POL MGT 1V2_V ", 4, 55, 0, 0, 4, 73,"V"},
{PsVauxMin1V8, "PS Vaux min 1V8", 5, 1, 0, 1, 5, 19,"V"},				{CpSw3V3, "CP SW 3V3", 5, 28, 0, 0, 5, 46,"V"},				{PolMgt1V2_I, "POL MGT 1V2_I", 5, 55, 0, 0, 5, 73,"A"},
{PsVauxMax1V8, "PS Vaux max 1V8", 6, 1, 0, 1, 6, 19,"V"},				{CjSw3V3, "CJ SW 3V3", 6, 28, 0, 0, 6, 46,"V"},				{CjMgt1V8, "CJ MGT 1V8", 6, 55, 0, 0, 6, 73,"V"},
{PlVbram1V0, "PL Vbram 1V0", 7, 1, 0, 1, 7, 19,"V"},				{Cu3V3, "CU 3V3", 7, 28, 0, 0, 7, 46,"V"},				{Blank54, "XXXXXXXXXXXXXXX", 7, 55, 0, 4, 7, 73,"X"},
{PlVbramMin1V0, "PL Vbram min 1V0", 8, 1, 0, 1, 8, 19,"V"},				{Brd5V0, "Brd 5V0", 8, 28, 0, 0, 8, 46,"V"},				{Blank55, "XXXXXXXXXXXXXXX", 8, 55, 0, 4, 8, 73,"X"},
{PlVbramMax1V0, "PL Vbram max 1V0", 9, 1, 0, 1, 9, 19,"V"},				{Brd12V0, "Brd 12V0", 9, 28, 0, 0, 9, 46,"V"},				{Blank56, "XXXXXXXXXXXXXXX", 9, 55, 0, 4, 9, 73,"X"},
{PsVccmem1V35, "PS Vccmem 1V35", 10, 1, 0, 1, 10, 19,"V"},				{Dspy12V0, "DSPY 12V0", 10, 28, 0, 0, 10, 46,"V"},				{L22V5, "L2 2V5", 10, 55, 0, 0, 10, 73,"V"},
{PsVmemMin1V35, "PS Vmem min 1V35", 11, 1, 0, 1, 11, 19,"V"},				{CjVccint0V95, "CJ Vccint 0V95", 11, 28, 0, 1, 11, 46,"V"},				{L21V8, "L2 1V8", 11, 55, 0, 0, 11, 73,"V"},
{PsVmemMax1V35, "PS Vmem max 1V35", 12, 1, 0, 1, 12, 19,"V"},				{CjVintMin0V95, "CJ Vint min 0V95", 12, 28, 0, 1, 12, 46,"V"},				{L2Pll1V0, "L2 PLL 1V0", 12, 55, 0, 1, 12, 73,"V"},
{BrdDdr31V35, "Brd DDR3 1V35", 13, 1, 0, 0, 13, 19,"V"},				{CjVintMax0V95, "CJ Vint max 0V95", 13, 28, 0, 1, 13, 46,"V"},				{L2Vdd0V95, "L2 VDD 0V95", 13, 55, 0, 1, 13, 73,"V"},
{PsDdr30V675, "PS DDR3 0V675", 14, 1, 0, 1, 14, 19,"V"},				{PolVint1V0_V, "POL VINT 1V0_ V", 14, 28, 0, 1, 14, 46,"V"},				{PolL2Vdd_V, "POL L2 VDD_V", 14, 55, 0, 1, 14, 73,"V"},
{PlDdr30V675, "PL DDR3 0V675", 15, 1, 0, 1, 15, 19,"V"},				{PolVint1V0_I0, "POL VINT 1V0_ I0", 15, 28, 0, 0, 15, 46,"A"},				{PolL2Vdd_I0, "POL L2 VDD_I0", 15, 55, 0, 0, 15, 73,"A"},
{PlMgt1V0, "PL MGT 1V0", 16, 1, 0, 0, 16, 19,"V"},				{PolVint1V0_I1, "POL VINT 1V0_ I1", 16, 28, 0, 0, 16, 46,"A"},				{PolL2Vdd_I1, "POL L2 VDD_I1", 16, 55, 0, 0, 16, 73,"A"},
{PlMgt1V2, "PL MGT 1V2", 17, 1, 0, 0, 17, 19,"V"},				{PolVint1V_It, "POL VINT 1V_ It", 17, 28, 0, 0, 17, 46,"A"},				{PolL2Vdd_I2, "POL L2 VDD_I2", 17, 55, 0, 0, 17, 73,"A"},
{PlMgt1V8, "PL MGT 1V8", 18, 1, 0, 0, 18, 19,"V"},				{CjVbram0V95, "CJ Vbram 0V95", 18, 28, 0, 1, 18, 46,"V"},				{PolL2Vdd_I3, "POL L2 VDD_I3", 18, 55, 0, 0, 18, 73,"A"},
{CpBrd1V0, "CP Brd 1V0", 19, 1, 0, 0, 19, 19,"V"},				{CjVramMin0V95, "CJ Vram min 0V95", 19, 28, 0, 1, 19, 46,"V"},				{PolL2Vdd_I4, "POL L2 VDD_I4", 19, 55, 0, 0, 19, 73,"A"},
{Pex1V0, "PEX 1V0", 20, 1, 0, 0, 20, 19,"V"},				{CjVramMax0V95, "CJ Vram max 0V95", 20, 28, 0, 1, 20, 46,"V"},				{PolL2Vdd_I5, "POL L2 VDD_I5", 20, 55, 0, 0, 20, 73,"A"},
{RoboBrd1V2, "Robo Brd 1V2", 21, 1, 0, 0, 21, 19,"V"},				{CjVccaux1V8, "CJ Vccaux 1V8", 21, 28, 0, 0, 21, 46,"V"},				{PolL2Vdd_It, "POL L2 VDD_It", 21, 55, 0, 0, 21, 73,"A"},
{Nco1V8, "NCO 1V8", 22, 1, 0, 0, 22, 19,"V"},				{CjVauxMin1V8, "CJ Vaux min 1V8", 22, 28, 0, 0, 22, 46,"V"},				{L2Avdd1V0, "L2 AVDD 1V0", 22, 55, 0, 1, 22, 73,"V"},
{CpBrd1V8, "CP Brd 1V8", 23, 1, 0, 0, 23, 19,"V"},				{CjVauxMax1V8, "CJ Vaux max 1V8", 23, 28, 0, 0, 23, 46,"V"},				{PolL2Avdd_V, "POL L2 AVDD_V", 23, 55, 0, 1, 23, 73,"V"},
{Brd2V5, "Brd 2V5", 24, 1, 0, 0, 24, 19,"V"},				{CjMgt1V0, "CJ MGT 1V0", 24, 28, 0, 1, 24, 46,"V"},				{PolL2Avdd_I, "POL L2 AVDD_I", 24, 55, 0, 0, 24, 73,"A"},
{PolL2Vdd_T, "POL L2 VDD_T", 25, 1, 0, 2, 25, 19,"C"},				{Psu1Vin, "PSU1 VIN", 25, 28, 25, 2, 25, 46,"V"},				{Psu2Vin, "PSU2 VIN", 25, 55, 49, 2, 25, 73,"V"},
{PolVint1V0_T, "POL VINT 1V0_T", 26, 1, 0, 2, 26, 19,"C"},				{Psu1Iin, "PSU1 IIN", 26, 28, 26, 0, 26, 46,"A"},				{Psu2Iin, "PSU2 IIN", 26, 55, 50, 0, 26, 73,"A"},
{BrdLocal1_T, "Brd Local 1_T", 27, 1, 0, 2, 27, 19,"C"},				{Psu1Pin, "PSU1 PIN", 27, 28, 27, 2, 27, 46,"W"},				{Psu2Pin, "PSU2 PIN", 27, 55, 51, 2, 27, 73,"W"},
{CpDieRmt_T, "CP Die Rmt_T", 28, 1, 0, 2, 28, 19,"C"},				{Psu1Vout, "PSU1 VOUT", 28, 28, 28, 0, 28, 46,"V"},				{Psu2Vout, "PSU2 VOUT", 28, 55, 52, 0, 28, 73,"V"},
{CpXadcDie_T, "CP XADC Die_T", 29, 1, 0, 2, 29, 19,"C"},				{Psu1Iout, "PSU1 IOUT", 29, 28, 29, 0, 29, 46,"A"},				{Psu2Iout, "PSU2 IOUT", 29, 55, 53, 0, 29, 73,"A"},
{CpAdcMinDie_T, "CP ADC Min Die_T", 30, 1, 0, 2, 30, 19,"C"},				{Psu1Pout, "PSU1 POUT", 30, 28, 30, 2, 30, 46,"W"},				{Psu2Pout, "PSU2 POUT", 30, 55, 54, 2, 30, 73,"W"},
{CpAdcMaxDie_T, "CP ADC Max Die_T", 31, 1, 0, 2, 31, 19,"C"},				{Psu1Hotspot_T, "PSU1 HotSpot_T", 31, 28, 31, 2, 31, 46,"C"},				{Psu2Hotspot_T, "PSU2 HotSpot_T", 31, 55, 55, 2, 31, 73,"C"},
{BrdLocal2_T, "Brd Local 2_T", 32, 1, 0, 2, 32, 19,"C"},				{Psu1Inlet_T, "PSU1 Inlet_T", 32, 28, 32, 2, 32, 46,"C"},				{Psu2Inlet_T, "PSU2 Inlet_T", 32, 55, 56, 2, 32, 73,"C"},
{CjDieRmt_T, "CJ Die Rmt_T", 33, 1, 0, 2, 33, 19,"C"},				{Psu1Exhaust_T, "PSU1 Exhaust_T", 33, 28, 33, 2, 33, 46,"C"},				{Psu2Exhaust_T, "PSU2 Exhaust_T", 33, 55, 57, 2, 33, 73,"C"},
{CjXadcDie_T, "CJ XADC Die_T", 34, 1, 0, 2, 34, 19,"C"},				{Psu1FanSpd, "PSU1 FAN SPD", 34, 28, 34, 3, 34, 46,"R"},				{Psu2FanSpd, "PSU2 FAN SPD", 34, 55, 58, 3, 34, 73,"R"},
{CjAdcMinDie_T, "CJ ADC Min Die_T", 35, 1, 0, 2, 35, 19,"C"},				{Psu1Efficiency, "PSU1 Efficiency", 35, 28, 35, 0, 35, 46,"%"},				{Psu2Efficiency, "PSU2 Efficiency", 35, 55, 59, 0, 35, 73,"%"},
{CjAdcMaxDie_T, "CJ ADC Max Die_T", 36, 1, 0, 2, 36, 19,"C"},				{Cu1FanSpd1, "CU1 Fan Spd 1", 36, 28, 36, 3, 36, 46,"R"},				{Cu2FanSpd1, "CU2 Fan Spd 1", 36, 55, 60, 3, 36, 73,"R"},
{BrdLocal3_T, "Brd Local 3_T", 37, 1, 0, 2, 37, 19,"C"},				{Cu1FanSpd2, "CU1 Fan Spd 2", 37, 28, 37, 3, 37, 46,"R"},				{Cu2FanSpd2, "CU2 Fan Spd 2", 37, 55, 61, 3, 37, 73,"R"},
{L2DieRmt_T, "L2 Die Rmt_T", 38, 1, 0, 2, 38, 19,"C"},				{Cu1FanSpd3, "CU1 Fan Spd 3", 38, 28, 38, 3, 38, 46,"R"},				{Cu2FanSpd3, "CU2 Fan Spd 3", 38, 55, 62, 3, 38, 73,"R"},
{Psu1Hotspot_T, "PSU1 HotSpot_T", 39, 1, 0, 2, 39, 19,"C"},				{Cu1FanSpd4, "CU1 Fan Spd 4", 39, 28, 39, 3, 39, 46,"R"},				{Cu2FanSpd4, "CU2 Fan Spd 4", 39, 55, 63, 3, 39, 73,"R"},
{Psu1Inlet_T, "PSU1 Inlet_T", 40, 1, 0, 2, 40, 19,"C"},				{Cu1FanSpd5, "CU1 Fan Spd 5", 40, 28, 40, 3, 40, 46,"R"},				{Cu2FanSpd5, "CU2 Fan Spd 5", 40, 55, 64, 3, 40, 73,"R"},
{Psu1Exhaust_T, "PSU1 Exhaust_T", 41, 1, 0, 2, 41, 19,"C"},				{Cu1FanSpd6, "CU1 Fan Spd 6", 41, 28, 41, 3, 41, 46,"R"},				{Cu2FanSpd6, "CU2 Fan Spd 6", 41, 55, 65, 3, 41, 73,"R"},
{Psu2Hotspot_T, "PSU2 HotSpot_T", 42, 1, 0, 2, 42, 19,"C"},				{Cu1Temp1, "CU1 Temp 1", 42, 28, 42, 2, 42, 46,"C"},				{Cu2Temp1, "CU2 Temp 1", 42, 55, 66, 2, 42, 73,"C"},
{Psu2Inlet_T, "PSU2 Inlet_T", 43, 1, 0, 2, 43, 19,"C"},				{Cu1Temp2, "CU1 Temp 2", 43, 28, 43, 2, 43, 46,"C"},				{Cu2Temp2, "CU2 Temp 2", 43, 55, 67, 2, 43, 73,"C"},
{Psu2Exhaust_T, "PSU2 Exhaust_T", 44, 1, 0, 2, 44, 19,"C"},				{Cu1Temp3, "CU1 Temp 3", 44, 28, 44, 2, 44, 46,"C"},				{Cu2Temp3, "CU2 Temp 3", 44, 55, 68, 2, 44, 73,"C"},
{Cu1CtrlTemp, "CU1 Ctrl Temp", 45, 1, 0, 2, 45, 19,"C"},				{Cu1CtrlTemp, "CU1 Ctrl Temp", 45, 28, 45, 2, 45, 46,"C"},				{Cu2CtrlTemp, "CU2 Ctrl Temp", 45, 55, 69, 2, 45, 73,"C"},
{Cu1Remote, "CU1 Remote", 46, 1, 0, 2, 46, 19,"C"},				{Cu1Remote, "CU1 Remote", 46, 28, 46, 2, 46, 46,"C"},				{Cu2Remote, "CU2 Remote", 46, 55, 70, 2, 46, 73,"C"},
{Cu2CtrlTemp, "CU2 Ctrl Temp", 47, 1, 0, 2, 47, 19,"C"},				{Blank46, "XXXXXXXXXXXXXXX", 47, 28, 47, 4, 47, 46,"X"},				{Blank70, "XXXXXXXXXXXXXXX", 47, 55, 71, 4, 47, 73,"X"},
{Cu2Remote, "CU2 Remote", 48, 1, 0, 2, 48, 19,"C"},				{Blank47, "XXXXXXXXXXXXXXX", 48, 28, 48, 4, 48, 46,"X"},				{Blank71, "XXXXXXXXXXXXXXX", 48, 55, 72, 4, 48, 73,"X"},
			},
						
// Screen 2
{
		      // Name  Row Col Value Formay Row Col Unit
}
		};


typedef enum //parm_index
{PsVccint1V0, CpSw2V5, PolMgt1V0_V, PsVintMin1V0, Brd3V3, PolMgt1V0_I, PsVintMax1V0, Pol3V3_V, CjMgt1V2, PsVccaux1V8, Pol3V3_I, PolMgt1V2_V, PsVauxMin1V8, CpSw3V3, PolMgt1V2_I, PsVauxMax1V8, CjSw3V3, CjMgt1V8, PlVbram1V0, Cu3V3, Blank54, PlVbramMin1V0, Brd5V0, Blank55,
PlVbramMax1V0, Brd12V0, Blank56, PsVccmem1V35, Dspy12V0, 13, PsVmemMin1V35, CjVccint0V95, L22V5, PsVmemMax1V35, CjVintMin0V95, L2Pll1V0, BrdDdr31V35, CjVintMax0V95, L2Vdd0V95, PsDdr30V675, PolVint1V0_V, PolL2Vdd_V, PlDdr30V675, PolVint1V0_I0, PolL2Vdd_I0, PlMgt1V0, PolVint1V0_I1, PolL2Vdd_I1,
PlMgt1V2, PolVint1V_It, PolL2Vdd_I2, PlMgt1V8, CjVbram0V95, PolL2Vdd_I3, CpBrd1V0, CjVramMin0V95, PolL2Vdd_I4, Pex1V0, CjVramMax0V95, PolL2Vdd_I5, RoboBrd1V2, CjVccaux1V8, PolL2Vdd_It, Nco1V8, CjVauxMin1V8, L2Avdd1V0, CpBrd1V8, CjVauxMax1V8, PolL2Avdd_V, Brd2V5, CjMgt1V0, PolL2Avdd_I,
PolL2Vdd_T, Psu1Vin, Psu2Vin, PolVint1V0_T, Psu1Iin, Psu2Iin, BrdLocal1_T, Psu1Pin, Psu2Pin, CpDieRmt_T, Psu1Vout, Psu2Vout, CpXadcDie_T, Psu1Iout, Psu2Iout, CpAdcMinDie_T, Psu1Pout, Psu2Pout, CpAdcMaxDie_T, Psu1Hotspot_T, Psu2Hotspot_T, BrdLocal2_T, Psu1Inlet_T, Psu2Inlet_T,
CjDieRmt_T, Psu1Exhaust_T, Psu2Exhaust_T, CjXadcDie_T, Psu1FanSpd, Psu2FanSpd, CjAdcMinDie_T, Psu1Efficiency, Psu2Efficiency, CjAdcMaxDie_T, Cu1FanSpd1, Cu2FanSpd1, BrdLocal3_T, Cu1FanSpd2, Cu2FanSpd2, L2DieRmt_T, Cu1FanSpd3, Cu2FanSpd3, Psu1Hotspot_T, Cu1FanSpd4, Cu2FanSpd4, Psu1Inlet_T, Cu1FanSpd5, Cu2FanSpd5,
Psu1Exhaust_T, Cu1FanSpd6, Cu2FanSpd6, Psu2Hotspot_T, Cu1Temp1, Cu2Temp1, Psu2Inlet_T, Cu1Temp2, Cu2Temp2, Psu2Exhaust_T, Cu1Temp3, Cu2Temp3, Cu1CtrlTemp, Cu1CtrlTemp, Cu2CtrlTemp, Cu1Remote, Cu1Remote, Cu2Remote, Cu2CtrlTemp, Blank46, Blank70, Cu2Remote, Blank47, Blank71,Parm_Index_Last}

parm_index_t;


// Variable used to store all data to be displayed to VT100 display.
float parmValue[Parm_Index_Last];


// Screen Data Structure
typedef struct
{
parm_index_t parmIndex;
char    parmName[16];
int     parmNameX; //Row
int     parmNameY; //Col
float   parmValueOld;
int     parmFormat;
int     parmValueX; //Row
int     parmValueY; //Col
char    parmUnit[1];
} parmDataT;

extern parmDataT 	parmData[NUM_SCR][NUM_PARMS];


// Screen Index
typedef enum {scr1, scr2, scr3, scr4} scr_t;


#endif //VT100_DASHBOARD_H_
