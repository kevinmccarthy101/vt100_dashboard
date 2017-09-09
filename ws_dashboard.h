//Updated: 03Aug15

#ifndef WS_DASHBOARD_H_
#define WS_DASHBOARD_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>      // errno and perror 
#include <stdint.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <sys/mman.h>
#include <linux/i2c-dev.h>



#define 	ESC 			 27
#define 	INIT_XADC		 1
#define     NUM_PARMS   	 (3 * 24 ) //Cols, Rows
#define     NUM_SCR			 2
#define 	XADC_BASE     	 0xBFF13000
#define 	CJA_XADC_BASE 	 0xA0000000
#define 	XADC_NUM_REGS    34
#define 	NUM_CJ_REGS      28
#define 	NUM_POL_PARMS	 19
#define 	TRUE			 1
#define 	FALSE			 0

// Macros
#define 	convert_temp(value) (float)((value * 503.975)/65536) - 273.15
#define 	convert_volt(value, sf)  (float) (value * sf)/65536
#define     clear_scr()   printf("%c[2J"  , ESC ) // clear scr


// Prototypes
int read_xadc(void);
void gotoxy(int x,int y);
void brd_temps(void);
void pol_data(void);
void init_cp_xadc(void);
int * mem_map_xadc(uint32_t address );
void cu_data(void);
void psu_data(void);
void commandLine(void);
void port_expander(void);

extern int beta2;
extern int alpha_beta1;

extern int * cp_memmap;
extern int * cj_memmap;
extern int mapped_size;


// Cut and Paste from spreadsheet:

/*
// Updated from spreadsheet: 12Sept15
typedef enum //parm_index
		{PsVccint1V0, CpSw2V5, PolMgt1V0_V, PsVintMin1V0, Brd3V3, PolMgt1V0_I, PsVintMax1V0, Pol3V3_V, CjMgt1V2, PsVccaux1V8, Pol3V3_I, PolMgt1V2_V, PsVauxMin1V8, CpSw3V3, PolMgt1V2_I, PsVauxMax1V8, CjSw3V3, CjMgt1V8, PlVbram1V0, Cu3V3, Blank54, PlVbramMin1V0, Brd5V0, Blank55,
		PlVbramMax1V0, Brd12V0, Blank56, PsVccmem1V35, Dspy12V0, L21V8, PsVmemMin1V35, CjVccint0V95, L22V5, PsVmemMax1V35, CjVintMin0V95, L2Pll1V0, BrdDdr31V35, CjVintMax0V95, L2Vdd0V95, PsDdr30V675, PolVint1V0_V, PolL2Vdd_V, PlDdr30V675, PolVint1V_I1, PolL2Vdd_I0, PlMgt1V0, PolVint1V0_I, PolL2Vdd_I1,
		PlMgt1V2, PolVint1V_It, PolL2Vdd_I2, PlMgt1V8, CjVbram0V95, PolL2Vdd_I3, CpBrd1V0, CjVramMin0V95, PolL2Vdd_I4, Pex1V0, CjVramMax0V95, PolL2Vdd_I5, RoboBrd1V2, CjVccaux1V8, PolL2Vdd_It, Nco1V8, CjVauxMin1V8, L2Avdd1V0, CpBrd1V8, CjVauxMax1V8, PolL2Avdd_V, Brd2V5, CjMgt1V0, PolL2Avdd_I,

		PolL2Vdd_T, Psu1Vin, Psu2Vin, PolVint1V0_T, Psu1Iin, Psu2Iin, BrdLocal1_T, Psu1Pin, Psu2Pin, CpDieRmt_T, Psu1Vout, Psu2Vout, CpXadcDie_T, Psu1Iout, Psu2Iout, CpAdcMinDie_T, Psu1Pout, Psu2Pout, CpAdcMaxDie_T, BrdLocal2_T,
		CjDiaRmt_T, CjXadcDie_T, Psu1FanSpd, Psu2FanSpd, CjAdcMinDie_T, Psu1Efficiency, Blank58, CjAdcMaxDie_T, Cu1FanSpd1, Cu2FanSpd1, BrdLocal3_T, Cu1FanSpd2, Cu2FanSpd2, L2DiaRmt_T, Cu1FanSpd3, Cu2FanSpd3, Psu1Hotspot_T, Cu1FanSpd4, Cu2FanSpd4, Psu1Inlet_T, Cu1FanSpd5, Cu2FanSpd5,
		Psu1Exhaust_T, Cu1FanSpd6, Cu2FanSpd6, Psu2Hotspot_T, Cu1Temp1, Cu2Temp1, Psu2Inlet_T, Cu1Temp2, Cu2Temp2, Psu2Exhaust_T, Cu1Temp3, Cu2Temp3, Cu1CtrlTemp, Cu1Remote, Cu2CtrlTemp, Blank46, Blank70, Cu2Remote, Blank47, Blank71, Parm_Index_Last}
parm_index_t;
// Updated from spreadsheet: 13Sept15
typedef enum //parm_index
		{PsVccint1V0, CpSw2V5, PolMgt1V0_V, PsVintMin1V0, Brd3V3, PolMgt1V0_I, PsVintMax1V0, Pol3V3_V, CjMgt1V2, PsVccaux1V8, Pol3V3_I, PolMgt1V2_V, PsVauxMin1V8, CpSw3V3, PolMgt1V2_I, PsVauxMax1V8, CjSw3V3, CjMgt1V8, PlVbram1V0, Cu3V3, Blank54, PlVbramMin1V0, Brd5V0, Blank55,
		PlVbramMax1V0, Brd12V0, Blank56, PsVccmem1V35, Dspy12V0, L21V8, PsVmemMin1V35, CjVccint0V95, L22V5, PsVmemMax1V35, CjVintMin0V95, L2Pll1V0, BrdDdr31V35, CjVintMax0V95, L2Vdd0V95, PsDdr30V675, PolVint1V0_V, PolL2Vdd_V, PlDdr30V675, PolVint1V_I0, PolL2Vdd_I0, PlMgt1V0, PolVint1V_I1, PolL2Vdd_I1,
		PlMgt1V2, PolVint1V_It, PolL2Vdd_I2, PlMgt1V8, CjVbram0V95, PolL2Vdd_I3, CpBrd1V0, CjVramMin0V95, PolL2Vdd_I4, Pex1V0, CjVramMax0V95, PolL2Vdd_I5, RoboBrd1V2, CjVccaux1V8, PolL2Vdd_It, Nco1V8, CjVauxMin1V8, L2Avdd1V0, CpBrd1V8, CjVauxMax1V8, PolL2Avdd_V, Brd2V5, CjMgt1V0, PolL2Avdd_I,

		PolL2Vdd_T, Psu1Vin, Psu2Vin, PolVint1V0_T, Psu1Iin, Psu2Iin, BrdLocal1_T, Psu1Pin, Psu2Pin, CpDieRmt_T, Psu1Vout, Psu2Vout, CpXadcDie_T, Psu1Iout, Psu2Iout, CpAdcMinDie_T, Psu1Pout, Psu2Pout, CpAdcMaxDie_T, BrdLocal2_T,
		CjDiaRmt_T, CjXadcDie_T, Psu1FanSpd, Psu2FanSpd, CjAdcMinDie_T, Psu1Efficiency, Blank58, CjAdcMaxDie_T, Cu1FanSpd1, Cu2FanSpd1, BrdLocal3_T, Cu1FanSpd2, Cu2FanSpd2, L2DiaRmt_T, Cu1FanSpd3, Cu2FanSpd3, Psu1Hotspot_T, Cu1FanSpd4, Cu2FanSpd4, Psu1Inlet_T, Cu1FanSpd5, Cu2FanSpd5,
		Psu1Exhaust_T, Cu1FanSpd6, Cu2FanSpd6, Psu2Hotspot_T, Cu1Temp1, Cu2Temp1, Psu2Inlet_T, Cu1Temp2, Cu2Temp2, Psu2Exhaust_T, Cu1Temp3, Cu2Temp3, Cu1CtrlTemp, Cu1Remote, Cu2CtrlTemp, Blank46, Blank70, Cu2Remote, Blank47, Blank71, Parm_Index_Last}
parm_index_t;

// Updated from spreadsheet: 14Sept15
typedef enum //parm_index
		{PsVccint1V0, CpSw2V5, PolMgt1V0_V, PsVintMin1V0, Brd3V3, PolMgt1V0_I, PsVintMax1V0, Pol3V3_V, CjMgt1V2, PsVccaux1V8, Pol3V3_I, PolMgt1V2_V, PsVauxMin1V8, CpSw3V3, PolMgt1V2_I, PsVauxMax1V8, CjSw3V3, CjMgt1V8, PlVbram1V0, Cu3V3, Blank54, PlVbramMin1V0, Brd5V0, Blank55,
		PlVbramMax1V0, Brd12V0, Blank56, PsVccmem1V35, Dspy12V0, L21V8, PsVmemMin1V35, CjVccint0V95, L22V5, PsVmemMax1V35, CjVintMin0V95, L2Pll1V0, BrdDdr31V35, CjVintMax0V95, L2Vdd0V95, PsDdr30V675, PolVint1V0_V, PolL2Vdd_V, PlDdr30V675, PolVint1V_I0, PolL2Vdd_I0, PlMgt1V0, PolVint1V_I1, PolL2Vdd_I1,
		PlMgt1V2, PolVint1V_It, PolL2Vdd_I2, PlMgt1V8, CjVbram0V95, PolL2Vdd_I3, CpBrd1V0, CjVramMin0V95, PolL2Vdd_I4, Pex1V0, CjVramMax0V95, PolL2Vdd_I5, RoboBrd1V2, CjVccaux1V8, PolL2Vdd_It, Nco1V8, CjVauxMin1V8, L2Avdd1V0, CpBrd1V8, CjVauxMax1V8, PolL2Avdd_V, Brd2V5, CjMgt1V0, PolL2Avdd_I,

		PolL2Vdd_T, Psu1Vin, Psu2Vin, PolVint1V0_T, Psu1Iin, Psu2Iin, BrdLocal1_T, Psu1Pin, Psu2Pin, CpDieRmt_T, Psu1Vout, Psu2Vout, CpXadcDie_T, Psu1Iout, Psu2Iout, CpAdcMinDie_T, Psu1Pout, Psu2Pout, CpAdcMaxDie_T, BrdLocal2_T,
		CjDieRmt_T, CjXadcDie_T, Psu1FanSpd, Psu2FanSpd, CjAdcMinDie_T, Psu1Efficiency, Psu2Efficiency, CjAdcMaxDie_T, Cu1FanSpd1, Cu2FanSpd1, BrdLocal3_T, Cu1FanSpd2, Cu2FanSpd2, L2DieRmt_T, Cu1FanSpd3, Cu2FanSpd3, Psu1Hotspot_T, Cu1FanSpd4, Cu2FanSpd4, Psu1Inlet_T, Cu1FanSpd5, Cu2FanSpd5,
		Psu1Exhaust_T, Cu1FanSpd6, Cu2FanSpd6, Psu2Hotspot_T, Cu1Temp1, Cu2Temp1, Psu2Inlet_T, Cu1Temp2, Cu2Temp2, Psu2Exhaust_T, Cu1Temp3, Cu2Temp3, Cu1CtrlTemp, Cu1Remote, Cu2CtrlTemp, Blank46, Blank70, Cu2Remote, Blank47, Blank71, Parm_Index_Last}
parm_index_t;

*/
// Updated from spreadsheet: 25Sept15
typedef enum //parm_index
		{PsVccint1V0, CpSw2V5, PolMgt1V0_V, PsVintMin1V0, Brd3V3, PolMgt1V0_I, PsVintMax1V0, Pol3V3_V, CjMgt1V2, PsVccaux1V8, Pol3V3_I, PolMgt1V2_V, PsVauxMin1V8, CpSw3V3, PolMgt1V2_I, PsVauxMax1V8, CjSw3V3, CjMgt1V8, PlVbram1V0, Cu3V3, Blank54, PlVbramMin1V0, Brd5V0, Blank55,
		PlVbramMax1V0, Brd12V0, Blank56, PsVccmem1V35, Dspy12V0, L21V8, PsVmemMin1V35, CjVccint0V95, L22V5, PsVmemMax1V35, CjVintMin0V95, L2Pll1V0, BrdDdr31V35, CjVintMax0V95, L2Vdd0V95, PsDdr30V675, PolVint1V0_V, PolL2Vdd_V, PlDdr30V675, PolVint1V0_I0, PolL2Vdd_I0, PlMgt1V0, PolVint1V0_I1, PolL2Vdd_I1,
		PlMgt1V2, PolVint1V_It, PolL2Vdd_I2, PlMgt1V8, CjVbram0V95, PolL2Vdd_I3, CpBrd1V0, CjVramMin0V95, PolL2Vdd_I4, Pex1V0, CjVramMax0V95, PolL2Vdd_I5, RoboBrd1V2, CjVccaux1V8, PolL2Vdd_It, Nco1V8, CjVauxMin1V8, L2Avdd1V0, CpBrd1V8, CjVauxMax1V8, PolL2Avdd_V, Brd2V5, CjMgt1V0, PolL2Avdd_I,

		PolL2Vdd_T, Psu1Vin, Psu2Vin, PolVint1V0_T, Psu1Iin, Psu2Iin, BrdLocal1_T, Psu1Pin, Psu2Pin, CpDieRmt_T, Psu1Vout, Psu2Vout, CpXadcDie_T, Psu1Iout, Psu2Iout, CpAdcMinDie_T, Psu1Pout, Psu2Pout, CpAdcMaxDie_T, BrdLocal2_T,
		CjDieRmt_T, CjXadcDie_T, Psu1FanSpd, Psu2FanSpd, CjAdcMinDie_T, Psu1Efficiency, Psu2Efficiency, CjAdcMaxDie_T, Cu1FanSpd1, Cu2FanSpd1, BrdLocal3_T, Cu1FanSpd2, Cu2FanSpd2, L2DieRmt_T, Cu1FanSpd3, Cu2FanSpd3, Psu1Hotspot_T, Cu1FanSpd4, Cu2FanSpd4, Psu1Inlet_T, Cu1FanSpd5, Cu2FanSpd5,
		Psu1Exhaust_T, Cu1FanSpd6, Cu2FanSpd6, Psu2Hotspot_T, Cu1Temp1, Cu2Temp1, Psu2Inlet_T, Cu1Temp2, Cu2Temp2, Psu2Exhaust_T, Cu1Temp3, Cu2Temp3, Cu1CtrlTemp, Cu1Remote, Cu2CtrlTemp, Blank46, Blank70, Cu2Remote, Blank47, Blank71, Parm_Index_Last}
parm_index_t;




// Variable used to store all data to be displayed to VT100 display.
float parmValue[Parm_Index_Last];



// XADC Data Structure
typedef struct
  {
   parm_index_t parmIndex;
   int      Reg_Addr;
   float 	Scale_Factor;
  } xadc_data_t;

extern xadc_data_t xadc_data[XADC_NUM_REGS];

extern xadc_data_t cj_xadc_data[NUM_CJ_REGS];


// PSU Structure
typedef struct
    {
	  parm_index_t parmIndex;
      int 	 Reg_Addr;
    } i2c_data_t;

// POL Structure
typedef struct
        {
    	parm_index_t   	parmIndex;
    	enum     		{linear11, linear16_9, linear16_12} format;
    	int   			Phase_num;;
    	int  			Device_ID;
    	int   			Reg_Addr;
        } PM_POL_t;

extern PM_POL_t   Pol_Data[NUM_POL_PARMS];


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

// Gronckle XADC Addresses
enum
	{
        Die_Temperature                     =   0x200, //1
        Vccint_PL_1V0                       =   0x204,
        Vccaux_PL_1V8                       =   0x208,
        Vp_Vn_DDR3L_Ref                     =   0x20C,
        Vbram_PL_1V0                        =   0x218,
        Vccint_PS_1V0                       =   0x234,
        Vccaux_PS_1V8                       =   0x238,
        Vccmem_PS_1V35                      =   0x23C,
        Aux0_Brd_3V3_SW                     =   0x240,
        Aux1_Brd_2V5                        =   0x244,//10
        Aux2_Brd_1V2                        =   0x248,
        Aux3_Brd_1V0_PEX                    =   0x24C, //<<<<
        Aux4_Brd_MGT_1V0                    =   0x250,
        Aux5_Brd_L2_1V8                     =   0x254,
        Aux8_Brd_2V5V_SW                    =   0x260,
        Aux9_Brd_MGT_1V2                    =   0x264,
        Aux10_Brd_5V0                       =   0x268,
        Aux11_Brd_MGT1V8                    =   0x26C,
        Aux12_Brd_L2_2V5                    =   0x270,
        Aux13_Brd_L2_PLL_VDD                =   0x274,//20
        Max_Die_Temperature                 =   0x280,
        Max_Vccint_PL_1V0                   =   0x284,
        Max_Vccaux_PL_1V8                   =   0x288,
        Max_Vbram_PL_1V0                    =   0x28C,
        Min_Die_Temperature                 =   0x290,
        Min_Vccint_PL_1V0                   =   0x294,
        Min_Vccaux_PL_1V8                   =   0x298,
        Min_Vbram_PL_1V0                    =   0x29C,
        Max_Vccint_PS_1V0                   =   0x2A0,
        Max_Vccaux_PS_1V8                   =   0x2A4,//30
        Max_Vccmem_PS_1V35                  =   0x2A8,
        Min_Vccint_PS_1V0                   =   0x2B0,
        Min_Vccaux_PS_1V8                   =   0x2B4,
        Min_Vccmem_PS_1V35                  =   0x2B8, //DDR3
        Flag_Register                       =   0x2FC,
        Config_Reg_0                        =   0x300,
        Config_Reg_1                        =   0x304,
        Config_Reg_2                        =   0x308,
        Seq_Regi_0                          =   0x320,
        Seq_Regi_1                          =   0x324,//40
        Seq_Regi_2                          =   0x328,
        Seq_Regi_3                          =   0x32C,
        Seq_Regi_4                          =   0x330,
        Seq_Regi_5                          =   0x334,
        Seq_Regi_6                          =   0x338,
        Seq_Regi_7                          =   0x33c,
        Alrm_UThld_Die_Temp_Reg_0           =   0x340,
        Alrm_UThld_Vccint_PL_Reg_1          =   0x344,
        Alrm_UThld_Vccaux_PL_Reg_2          =   0x348,
        Alrm_UThld_OT_PL_Reg_3              =   0x34C,//50
        Alrm_LThld_Die_Temp_Reg_4           =   0x350,
        Alrm_LThld_Vccint_PL_Reg_5          =   0x354,
        Alrm_LThld_Vccaux_PL_Reg_6          =   0x358,
        Alrm_LThld_OT_PL_Reg_7              =   0x35C,
        Alrm_UThld_Vbram_PL_Reg_8           =   0x360,
        Alrm_UThld_Vccint_PS_Reg_9          =   0x364,
        Alrm_UThld_Vccaux_PS_Reg_10         =   0x368,
        Alrm_UThld_Vccmem_PS_Reg_11         =   0x36C,
        Alrm_LThld_Vbram_PL_Reg_12          =   0x370,
        Alrm_LThld_Vccint_PS_Reg_13         =   0x374,//60
        Alrm_LThld_Vccaux_PS_Reg_14         =   0x378,
        Alrm_LThld_Vccmem_PS_Reg_15         =   0x37C//62
    };

// Cloudjumper XADC Addresses
enum
	{
        CJ_Die_Temperature                  =   0x0C00,
        CJ_Min_Die_Temperature              =   0x0C90,
        CJ_Max_Die_Temperature              =   0x0C80,
        CJ_Vccint_V95                       =   0x0C04,
        CJ_Min_Vccint_V95                   =   0x0C94,
        CJ_Max_Vccint_V95                   =   0x0C84,
        CJ_Vccaux_1V8                       =   0x0C08,
        CJ_Min_Vccaux_1V8                   =   0x0C98,
        CJ_Max_Vccaux_1V8                   =   0x0C88,
        CJ_Vbram_V95                        =   0x0C18,
        CJ_Min_Vbram_V95                    =   0x0C9C,
        CJ_Max_Vbram_V95                    =   0x0C8C,
        CJ_SYSMON_ADCIN_0_12V0              =   0x0C40,
        CJ_SYSMON_ADCIN_1_L2_VDD_0V9        =   0x0C44,
        CJ_SYSMON_ADCIN_2_L2_AVDD_1V0       =   0x0C48,
        CJ_SYSMON_ADCIN_3_CU_3V3            =   0x0C4C,
        CJ_SYSMON_ADCIN_4_NCO_1V8           =   0x0C50,
        CJ_SYSMON_ADCIN_5_DA_MGT_1V8        =   0x0C54,
        CJ_SYSMON_ADCIN_6_DA_MGT_1V2        =   0x0C58,
        CJ_SYSMON_ADCIN_7_DA_MGT_1V0        =   0x0C5C,
        CJ_SYSMON_ADCIN_8_PS_DDR3_VTT_V675  =   0x0C60,
        CJ_SYSMON_ADCIN_9_PL_DDR3_VTT_V675  =   0x0C64,
        CJ_SYSMON_ADCIN_10_DSPY_12V0        =   0x0C68,
        CJ_SYSMON_ADCIN_11_DA_3V3           =   0x0C6C,
        CJ_SYSMON_ADCIN_12_3V3              =   0x0C70,
        CJ_SYSMON_ADCIN_13_CP_1V8_SW        =   0x0C74,
        CJ_SYSMON_ADCIN_14_CP_1V0           =   0x0C78,
        CJ_SYSMON_ADCIN_15_DDR3_1V35        =   0x0C7C
	};

#endif //WS_DASHBOARD_H_
