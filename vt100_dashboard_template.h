//18Sept17

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

#define     NUM_SCR			 3
#define     NUM_PARMS   	 (NUM_SCR * 24 ) //Cols, Rows


parmDataT parmData[NUM_SCR][NUM_PARMS]] =
	{
		{
		// Name  Row Col Value Format Row Col Unit
VB_auto_fill_parmData_Screen1
		},
		{
		// Name  Row Col Value Format Row Col Unit
VB_auto_fill_parmData_Screen2
		},
		{
		// Name  Row Col Value Format Row Col Unit
VB_auto_fill_parmData_Screen3
		}    
	};   // paraDataT


typedef enum //parm_index
{
VB_auto_fill_parm_index_enum_scr1
VB_auto_fill_parm_index_enum_scr2
VB_auto_fill_parm_index_enum_scr3
} parm_index_t;


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

extern parmDataT parmData[NUM_SCR][NUM_PARMS];

// Screen Index
typedef enum {scr1, scr2, scr3, scr4} scr_t;


#endif //VT100_DASHBOARD_H_
