

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

parmDataT parmData[NUM_SCR][NUM_PARMS] =

        {
         // Screen 1
            {
                // Name  Row Col Value Formay Row Col Unit
//VB_auto_fill_parmDataT_here_scr1
			},
						 
         // Screen 2
           {
		      // Name  Row Col Value Formay Row Col Unit
           }
		};   


typedef enum //parm_index
//VB_auto_fill_parm_index_t_here
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
