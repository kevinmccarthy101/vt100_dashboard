

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

parmDataT parmData[NUM_SCR][NUM_PARMS] =

{
// Screen 1
{
// Name  Row Col Value Formay Row Col Unit
{Scr1_Col1_Row_1, "Scr1_Col1_Row_1", 1, 1, 0, 1, 1, 19,"V"},				{Scr1_Col2_Row_1, "Scr1_Col2_Row_1", 1, 28, 0, 0, 1, 46,"V"},				{Scr1_Col3_Row_1, "Scr1_Col3_Row_1", 1, 55, 0, 1, 1, 73,"V"},
{Scr1_Col1_Row_2, "Scr1_Col1_Row_2", 2, 1, 0, 1, 2, 19,"V"},				{Scr1_Col2_Row_2, "Scr1_Col2_Row_2", 2, 28, 0, 0, 2, 46,"V"},				{Scr1_Col3_Row_2, "Scr1_Col3_Row_2", 2, 55, 0, 0, 2, 73,"A"},
{Scr1_Col1_Row_3, "Scr1_Col1_Row_3", 3, 1, 0, 1, 3, 19,"V"},				{Scr1_Col2_Row_3, "Scr1_Col2_Row_3", 3, 28, 0, 0, 3, 46,"V"},				{Scr1_Col3_Row_3, "Scr1_Col3_Row_3", 3, 55, 0, 0, 3, 73,"V"},
{Scr1_Col1_Row_4, "Scr1_Col1_Row_4", 4, 1, 0, 1, 4, 19,"V"},				{Scr1_Col2_Row_4, "Scr1_Col2_Row_4", 4, 28, 0, 0, 4, 46,"A"},				{Scr1_Col3_Row_4, "Scr1_Col3_Row_4", 4, 55, 0, 0, 4, 73,"V"},
{Scr1_Col1_Row_5, "Scr1_Col1_Row_5", 5, 1, 0, 1, 5, 19,"V"},				{Scr1_Col2_Row_5, "Scr1_Col2_Row_5", 5, 28, 0, 0, 5, 46,"V"},				{Scr1_Col3_Row_5, "Scr1_Col3_Row_5", 5, 55, 0, 0, 5, 73,"A"},
{Scr1_Col1_Row_6, "Scr1_Col1_Row_6", 6, 1, 0, 1, 6, 19,"V"},				{Scr1_Col2_Row_6, "Scr1_Col2_Row_6", 6, 28, 0, 0, 6, 46,"V"},				{Scr1_Col3_Row_6, "Scr1_Col3_Row_6", 6, 55, 0, 0, 6, 73,"V"},
{Scr1_Col1_Row_7, "Scr1_Col1_Row_7", 7, 1, 0, 1, 7, 19,"V"},				{Scr1_Col2_Row_7, "Scr1_Col2_Row_7", 7, 28, 0, 0, 7, 46,"V"},				{Scr1_Col3_Row_7, "Scr1_Col3_Row_7", 7, 55, 0, 4, 7, 73,"X"},
{Scr1_Col1_Row_8, "Scr1_Col1_Row_8", 8, 1, 0, 1, 8, 19,"V"},				{Scr1_Col2_Row_8, "Scr1_Col2_Row_8", 8, 28, 0, 0, 8, 46,"V"},				{Scr1_Col3_Row_8, "Scr1_Col3_Row_8", 8, 55, 0, 4, 8, 73,"X"},
{Scr1_Col1_Row_9, "Scr1_Col1_Row_9", 9, 1, 0, 1, 9, 19,"V"},				{Scr1_Col2_Row_9, "Scr1_Col2_Row_9", 9, 28, 0, 0, 9, 46,"V"},				{Scr1_Col3_Row_9, "Scr1_Col3_Row_9", 9, 55, 0, 4, 9, 73,"X"},
{Scr1_Col1_Row_10, "Scr1_Col1_Row_10", 10, 1, 0, 1, 10, 19,"V"},				{Scr1_Col2_Row_10, "Scr1_Col2_Row_10", 10, 28, 0, 0, 10, 46,"V"},				{Scr1_Col3_Row_10, "Scr1_Col3_Row_10", 10, 55, 0, 0, 10, 73,"V"},
{Scr1_Col1_Row_11, "Scr1_Col1_Row_11", 11, 1, 0, 1, 11, 19,"V"},				{Scr1_Col2_Row_11, "Scr1_Col2_Row_11", 11, 28, 0, 1, 11, 46,"V"},				{Scr1_Col3_Row_11, "Scr1_Col3_Row_11", 11, 55, 0, 0, 11, 73,"V"},
{Scr1_Col1_Row_12, "Scr1_Col1_Row_12", 12, 1, 0, 1, 12, 19,"V"},				{Scr1_Col2_Row_12, "Scr1_Col2_Row_12", 12, 28, 0, 1, 12, 46,"V"},				{Scr1_Col3_Row_12, "Scr1_Col3_Row_12", 12, 55, 0, 1, 12, 73,"V"},
{Scr1_Col1_Row_13, "Scr1_Col1_Row_13", 13, 1, 0, 0, 13, 19,"V"},				{Scr1_Col2_Row_13, "Scr1_Col2_Row_13", 13, 28, 0, 1, 13, 46,"V"},				{Scr1_Col3_Row_13, "Scr1_Col3_Row_13", 13, 55, 0, 1, 13, 73,"V"},
{Scr1_Col1_Row_14, "Scr1_Col1_Row_14", 14, 1, 0, 1, 14, 19,"V"},				{Scr1_Col2_Row_14, "Scr1_Col2_Row_14", 14, 28, 0, 1, 14, 46,"V"},				{Scr1_Col3_Row_14, "Scr1_Col3_Row_14", 14, 55, 0, 1, 14, 73,"V"},
{Scr1_Col1_Row_15, "Scr1_Col1_Row_15", 15, 1, 0, 1, 15, 19,"V"},				{Scr1_Col2_Row_15, "Scr1_Col2_Row_15", 15, 28, 0, 0, 15, 46,"A"},				{Scr1_Col3_Row_15, "Scr1_Col3_Row_15", 15, 55, 0, 0, 15, 73,"A"},
{Scr1_Col1_Row_16, "Scr1_Col1_Row_16", 16, 1, 0, 0, 16, 19,"V"},				{Scr1_Col2_Row_16, "Scr1_Col2_Row_16", 16, 28, 0, 0, 16, 46,"A"},				{Scr1_Col3_Row_16, "Scr1_Col3_Row_16", 16, 55, 0, 0, 16, 73,"A"},
{Scr1_Col1_Row_17, "Scr1_Col1_Row_17", 17, 1, 0, 0, 17, 19,"V"},				{Scr1_Col2_Row_17, "Scr1_Col2_Row_17", 17, 28, 0, 0, 17, 46,"A"},				{Scr1_Col3_Row_17, "Scr1_Col3_Row_17", 17, 55, 0, 0, 17, 73,"A"},
{Scr1_Col1_Row_18, "Scr1_Col1_Row_18", 18, 1, 0, 0, 18, 19,"V"},				{Scr1_Col2_Row_18, "Scr1_Col2_Row_18", 18, 28, 0, 1, 18, 46,"V"},				{Scr1_Col3_Row_18, "Scr1_Col3_Row_18", 18, 55, 0, 0, 18, 73,"A"},
{Scr1_Col1_Row_19, "Scr1_Col1_Row_19", 19, 1, 0, 0, 19, 19,"V"},				{Scr1_Col2_Row_19, "Scr1_Col2_Row_19", 19, 28, 0, 1, 19, 46,"V"},				{Scr1_Col3_Row_19, "Scr1_Col3_Row_19", 19, 55, 0, 0, 19, 73,"A"},
{Scr1_Col1_Row_20, "Scr1_Col1_Row_20", 20, 1, 0, 0, 20, 19,"V"},				{Scr1_Col2_Row_20, "Scr1_Col2_Row_20", 20, 28, 0, 1, 20, 46,"V"},				{Scr1_Col3_Row_20, "Scr1_Col3_Row_20", 20, 55, 0, 0, 20, 73,"A"},
{Scr1_Col1_Row_21, "Scr1_Col1_Row_21", 21, 1, 0, 0, 21, 19,"V"},				{Scr1_Col2_Row_21, "Scr1_Col2_Row_21", 21, 28, 0, 0, 21, 46,"V"},				{Scr1_Col3_Row_21, "Scr1_Col3_Row_21", 21, 55, 0, 0, 21, 73,"A"},
{Scr1_Col1_Row_22, "Scr1_Col1_Row_22", 22, 1, 0, 0, 22, 19,"V"},				{Scr1_Col2_Row_22, "Scr1_Col2_Row_22", 22, 28, 0, 0, 22, 46,"V"},				{Scr1_Col3_Row_22, "Scr1_Col3_Row_22", 22, 55, 0, 1, 22, 73,"V"},
{Scr1_Col1_Row_23, "Scr1_Col1_Row_23", 23, 1, 0, 0, 23, 19,"V"},				{Scr1_Col2_Row_23, "Scr1_Col2_Row_23", 23, 28, 0, 0, 23, 46,"V"},				{Scr1_Col3_Row_23, "Scr1_Col3_Row_23", 23, 55, 0, 1, 23, 73,"V"},
{Scr1_Col1_Row_24, "Scr1_Col1_Row_24", 24, 1, 0, 0, 24, 19,"V"},				{Scr1_Col2_Row_24, "Scr1_Col2_Row_24", 24, 28, 0, 1, 24, 46,"V"},				{Scr1_Col3_Row_24, "Scr1_Col3_Row_24", 24, 55, 0, 0, 24, 73,"A"},
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
			},
						
// Screen 2
{
		      // Name  Row Col Value Formay Row Col Unit
}
		};


typedef enum //parm_index
Scr1_Col1_Row_1, Scr1_Col2_Row_1, Scr1_Col3_Row_1, Scr1_Col1_Row_2, Scr1_Col2_Row_2, Scr1_Col3_Row_2, Scr1_Col1_Row_3, Scr1_Col2_Row_3, Scr1_Col3_Row_3, Scr1_Col1_Row_4, Scr1_Col2_Row_4, Scr1_Col3_Row_4, Scr1_Col1_Row_5, Scr1_Col2_Row_5, Scr1_Col3_Row_5, Scr1_Col1_Row_6, Scr1_Col2_Row_6, Scr1_Col3_Row_6, Scr1_Col1_Row_7, Scr1_Col2_Row_7, Scr1_Col3_Row_7, Scr1_Col1_Row_8, Scr1_Col2_Row_8, Scr1_Col3_Row_8,
Scr1_Col1_Row_9, Scr1_Col2_Row_9, Scr1_Col3_Row_9, Scr1_Col1_Row_10, Scr1_Col2_Row_10, , Scr1_Col1_Row_11, Scr1_Col2_Row_11, Scr1_Col3_Row_10, Scr1_Col1_Row_12, Scr1_Col2_Row_12, Scr1_Col3_Row_12, Scr1_Col1_Row_13, Scr1_Col2_Row_13, Scr1_Col3_Row_13, Scr1_Col1_Row_14, Scr1_Col2_Row_14, Scr1_Col3_Row_14, Scr1_Col1_Row_15, Scr1_Col2_Row_15, Scr1_Col3_Row_15, Scr1_Col1_Row_16, Scr1_Col2_Row_16, Scr1_Col3_Row_16,
Scr1_Col1_Row_17, Scr1_Col2_Row_17, Scr1_Col3_Row_17, Scr1_Col1_Row_18, Scr1_Col2_Row_18, Scr1_Col3_Row_18, Scr1_Col1_Row_19, Scr1_Col2_Row_19, Scr1_Col3_Row_19, Scr1_Col1_Row_20, Scr1_Col2_Row_20, Scr1_Col3_Row_20, Scr1_Col1_Row_21, Scr1_Col2_Row_21, Scr1_Col3_Row_21, Scr1_Col1_Row_22, Scr1_Col2_Row_22, Scr1_Col3_Row_22, Scr1_Col1_Row_23, Scr1_Col2_Row_23, Scr1_Col3_Row_23, Scr1_Col1_Row_24, Scr1_Col2_Row_24, Scr1_Col3_Row_24,




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
