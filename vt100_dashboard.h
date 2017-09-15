//15Sept17

#ifndef VT100_DASHBOARD_H_
#define VT100_DASHBOARD_H_

#define     NUM_SCR			 3
#define     NUM_PARMS   	 (NUM_SCR * 24 ) //Cols, Rows


parmDataT parmData[NUM_PARMS] =
	{
		{
		// Name  Row Col Value Formay Row Col Unit
//Scr 1
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
		{
		// Name  Row Col Value Formay Row Col Unit
//Scr 2
		{Scr2_Col1_Row_1, "Scr2_Col1_Row_1", 1, 1, 1, 2, 1, 19,"C"},				{Scr2_Col2_Row_1, "Scr2_Col2_Row_1", 1, 28, 25, 2, 1, 46,"V"},				{Scr2_Col3_Row_1, "Scr2_Col3_Row_1", 1, 55, 49, 2, 1, 73,"V"},
		{Scr2_Col1_Row_2, "Scr2_Col1_Row_2", 2, 1, 2, 2, 2, 19,"C"},				{Scr2_Col2_Row_2, "Scr2_Col2_Row_2", 2, 28, 26, 0, 2, 46,"A"},				{Scr2_Col3_Row_2, "Scr2_Col3_Row_2", 2, 55, 50, 0, 2, 73,"A"},
		{Scr2_Col1_Row_3, "Scr2_Col1_Row_3", 3, 1, 3, 2, 3, 19,"C"},				{Scr2_Col2_Row_3, "Scr2_Col2_Row_3", 3, 28, 27, 2, 3, 46,"W"},				{Scr2_Col3_Row_3, "Scr2_Col3_Row_3", 3, 55, 51, 2, 3, 73,"W"},
		{Scr2_Col1_Row_4, "Scr2_Col1_Row_4", 4, 1, 4, 2, 4, 19,"C"},				{Scr2_Col2_Row_4, "Scr2_Col2_Row_4", 4, 28, 28, 0, 4, 46,"V"},				{Scr2_Col3_Row_4, "Scr2_Col3_Row_4", 4, 55, 52, 0, 4, 73,"V"},
		{Scr2_Col1_Row_5, "Scr2_Col1_Row_5", 5, 1, 5, 2, 5, 19,"C"},				{Scr2_Col2_Row_5, "Scr2_Col2_Row_5", 5, 28, 29, 0, 5, 46,"A"},				{Scr2_Col3_Row_5, "Scr2_Col3_Row_5", 5, 55, 53, 0, 5, 73,"A"},
		{Scr2_Col1_Row_6, "Scr2_Col1_Row_6", 6, 1, 6, 2, 6, 19,"C"},				{Scr2_Col2_Row_6, "Scr2_Col2_Row_6", 6, 28, 30, 2, 6, 46,"W"},				{Scr2_Col3_Row_6, "Scr2_Col3_Row_6", 6, 55, 54, 2, 6, 73,"W"},
		{Scr2_Col1_Row_7, "Scr2_Col1_Row_7", 7, 1, 7, 2, 7, 19,"C"},				{Scr2_Col2_Row_7, "Scr2_Col2_Row_7", 7, 28, 31, 2, 7, 46,"C"},				{Scr2_Col3_Row_7, "Scr2_Col3_Row_7", 7, 55, 55, 2, 7, 73,"C"},
		{Scr2_Col1_Row_8, "Scr2_Col1_Row_8", 8, 1, 8, 2, 8, 19,"C"},				{Scr2_Col2_Row_8, "Scr2_Col2_Row_8", 8, 28, 32, 2, 8, 46,"C"},				{Scr2_Col3_Row_8, "Scr2_Col3_Row_8", 8, 55, 56, 2, 8, 73,"C"},
		{Scr2_Col1_Row_9, "Scr2_Col1_Row_9", 9, 1, 9, 2, 9, 19,"C"},				{Scr2_Col2_Row_9, "Scr2_Col2_Row_9", 9, 28, 33, 2, 9, 46,"C"},				{Scr2_Col3_Row_9, "Scr2_Col3_Row_9", 9, 55, 57, 2, 9, 73,"C"},
		{Scr2_Col1_Row_10, "Scr2_Col1_Row_10", 10, 1, 10, 2, 10, 19,"C"},				{Scr2_Col2_Row_10, "Scr2_Col2_Row_10", 10, 28, 34, 3, 10, 46,"R"},				{Scr2_Col3_Row_10, "Scr2_Col3_Row_10", 10, 55, 58, 3, 10, 73,"R"},
		{Scr2_Col1_Row_11, "Scr2_Col1_Row_11", 11, 1, 11, 2, 11, 19,"C"},				{Scr2_Col2_Row_11, "Scr2_Col2_Row_11", 11, 28, 35, 0, 11, 46,"%"},				{Scr2_Col3_Row_11, "Scr2_Col3_Row_11", 11, 55, 59, 0, 11, 73,"%"},
		{Scr2_Col1_Row_12, "Scr2_Col1_Row_12", 12, 1, 12, 2, 12, 19,"C"},				{Scr2_Col2_Row_12, "Scr2_Col2_Row_12", 12, 28, 36, 3, 12, 46,"R"},				{Scr2_Col3_Row_12, "Scr2_Col3_Row_12", 12, 55, 60, 3, 12, 73,"R"},
		{Scr2_Col1_Row_13, "Scr2_Col1_Row_13", 13, 1, 13, 2, 13, 19,"C"},				{Scr2_Col2_Row_13, "Scr2_Col2_Row_13", 13, 28, 37, 3, 13, 46,"R"},				{Scr2_Col3_Row_13, "Scr2_Col3_Row_13", 13, 55, 61, 3, 13, 73,"R"},
		{Scr2_Col1_Row_14, "Scr2_Col1_Row_14", 14, 1, 14, 2, 14, 19,"C"},				{Scr2_Col2_Row_14, "Scr2_Col2_Row_14", 14, 28, 38, 3, 14, 46,"R"},				{Scr2_Col3_Row_14, "Scr2_Col3_Row_14", 14, 55, 62, 3, 14, 73,"R"},
		{Scr2_Col1_Row_15, "Scr2_Col1_Row_15", 15, 1, 15, 2, 15, 19,"C"},				{Scr2_Col2_Row_15, "Scr2_Col2_Row_15", 15, 28, 39, 3, 15, 46,"R"},				{Scr2_Col3_Row_15, "Scr2_Col3_Row_15", 15, 55, 63, 3, 15, 73,"R"},
		{Scr2_Col1_Row_16, "Scr2_Col1_Row_16", 16, 1, 16, 2, 16, 19,"C"},				{Scr2_Col2_Row_16, "Scr2_Col2_Row_16", 16, 28, 40, 3, 16, 46,"R"},				{Scr2_Col3_Row_16, "Scr2_Col3_Row_16", 16, 55, 64, 3, 16, 73,"R"},
		{Scr2_Col1_Row_17, "Scr2_Col1_Row_17", 17, 1, 17, 2, 17, 19,"C"},				{Scr2_Col2_Row_17, "Scr2_Col2_Row_17", 17, 28, 41, 3, 17, 46,"R"},				{Scr2_Col3_Row_17, "Scr2_Col3_Row_17", 17, 55, 65, 3, 17, 73,"R"},
		{Scr2_Col1_Row_18, "Scr2_Col1_Row_18", 18, 1, 18, 2, 18, 19,"C"},				{Scr2_Col2_Row_18, "Scr2_Col2_Row_18", 18, 28, 42, 2, 18, 46,"C"},				{Scr2_Col3_Row_18, "Scr2_Col3_Row_18", 18, 55, 66, 2, 18, 73,"C"},
		{Scr2_Col1_Row_19, "Scr2_Col1_Row_19", 19, 1, 19, 2, 19, 19,"C"},				{Scr2_Col2_Row_19, "Scr2_Col2_Row_19", 19, 28, 43, 2, 19, 46,"C"},				{Scr2_Col3_Row_19, "Scr2_Col3_Row_19", 19, 55, 67, 2, 19, 73,"C"},
		{Scr2_Col1_Row_20, "Scr2_Col1_Row_20", 20, 1, 20, 2, 20, 19,"C"},				{Scr2_Col2_Row_20, "Scr2_Col2_Row_20", 20, 28, 44, 2, 20, 46,"C"},				{Scr2_Col3_Row_20, "Scr2_Col3_Row_20", 20, 55, 68, 2, 20, 73,"C"},
		{Scr2_Col1_Row_21, "Scr2_Col1_Row_21", 21, 1, 21, 2, 21, 19,"C"},				{Scr2_Col2_Row_21, "Scr2_Col2_Row_21", 21, 28, 45, 2, 21, 46,"C"},				{Scr2_Col3_Row_21, "Scr2_Col3_Row_21", 21, 55, 69, 2, 21, 73,"C"},
		{Scr2_Col1_Row_22, "Scr2_Col1_Row_22", 22, 1, 22, 2, 22, 19,"C"},				{Scr2_Col2_Row_22, "Scr2_Col2_Row_22", 22, 28, 46, 2, 22, 46,"C"},				{Scr2_Col3_Row_22, "Scr2_Col3_Row_22", 22, 55, 70, 2, 22, 73,"C"},
		{Scr2_Col1_Row_23, "Scr2_Col1_Row_23", 23, 1, 23, 2, 23, 19,"C"},				{Scr2_Col2_Row_23, "Scr2_Col2_Row_23", 23, 28, 47, 4, 23, 46,"X"},				{Scr2_Col3_Row_23, "Scr2_Col3_Row_23", 23, 55, 71, 4, 23, 73,"X"},
		{Scr2_Col1_Row_24, "Scr2_Col1_Row_24", 24, 1, 24, 2, 24, 19,"C"},				{Scr2_Col2_Row_24, "Scr2_Col2_Row_24", 24, 28, 48, 4, 24, 46,"X"},				{Scr2_Col3_Row_24, "Scr2_Col3_Row_24", 24, 55, 72, 4, 24, 73,"X"},
		},
		{
		// Name  Row Col Value Formay Row Col Unit
//Scr 3
		{Scr3_Col1_Row_1, "Scr3_Col1_Row_1", 1, 1, 0, 1, 1, 19,"V"},				{Scr3_Col2_Row_1, "Scr3_Col2_Row_1", 1, 28, 0, 0, 1, 46,"V"},				{Scr3_Col3_Row_1, "Scr3_Col3_Row_1", 1, 55, 0, 1, 1, 73,"V"},
		{Scr3_Col1_Row_2, "Scr3_Col1_Row_2", 2, 1, 0, 1, 2, 19,"V"},				{Scr3_Col2_Row_2, "Scr3_Col2_Row_2", 2, 28, 0, 0, 2, 46,"V"},				{Scr3_Col3_Row_2, "Scr3_Col3_Row_2", 2, 55, 0, 0, 2, 73,"A"},
		{Scr3_Col1_Row_3, "Scr3_Col1_Row_3", 3, 1, 0, 1, 3, 19,"V"},				{Scr3_Col2_Row_3, "Scr3_Col2_Row_3", 3, 28, 0, 0, 3, 46,"V"},				{Scr3_Col3_Row_3, "Scr3_Col3_Row_3", 3, 55, 0, 0, 3, 73,"V"},
		{Scr3_Col1_Row_4, "Scr3_Col1_Row_4", 4, 1, 0, 1, 4, 19,"V"},				{Scr3_Col2_Row_4, "Scr3_Col2_Row_4", 4, 28, 0, 0, 4, 46,"A"},				{Scr3_Col3_Row_4, "Scr3_Col3_Row_4", 4, 55, 0, 0, 4, 73,"V"},
		{Scr3_Col1_Row_5, "Scr3_Col1_Row_5", 5, 1, 0, 1, 5, 19,"V"},				{Scr3_Col2_Row_5, "Scr3_Col2_Row_5", 5, 28, 0, 0, 5, 46,"V"},				{Scr3_Col3_Row_5, "Scr3_Col3_Row_5", 5, 55, 0, 0, 5, 73,"A"},
		{Scr3_Col1_Row_6, "Scr3_Col1_Row_6", 6, 1, 0, 1, 6, 19,"V"},				{Scr3_Col2_Row_6, "Scr3_Col2_Row_6", 6, 28, 0, 0, 6, 46,"V"},				{Scr3_Col3_Row_6, "Scr3_Col3_Row_6", 6, 55, 0, 0, 6, 73,"V"},
		{Scr3_Col1_Row_7, "Scr3_Col1_Row_7", 7, 1, 0, 1, 7, 19,"V"},				{Scr3_Col2_Row_7, "Scr3_Col2_Row_7", 7, 28, 0, 0, 7, 46,"V"},				{Scr3_Col3_Row_7, "Scr3_Col3_Row_7", 7, 55, 0, 4, 7, 73,"X"},
		{Scr3_Col1_Row_8, "Scr3_Col1_Row_8", 8, 1, 0, 1, 8, 19,"V"},				{Scr3_Col2_Row_8, "Scr3_Col2_Row_8", 8, 28, 0, 0, 8, 46,"V"},				{Scr3_Col3_Row_8, "Scr3_Col3_Row_8", 8, 55, 0, 4, 8, 73,"X"},
		{Scr3_Col1_Row_9, "Scr3_Col1_Row_9", 9, 1, 0, 1, 9, 19,"V"},				{Scr3_Col2_Row_9, "Scr3_Col2_Row_9", 9, 28, 0, 0, 9, 46,"V"},				{Scr3_Col3_Row_9, "Scr3_Col3_Row_9", 9, 55, 0, 4, 9, 73,"X"},
		{Scr3_Col1_Row_10, "Scr3_Col1_Row_10", 10, 1, 0, 1, 10, 19,"V"},				{Scr3_Col2_Row_10, "Scr3_Col2_Row_10", 10, 28, 0, 0, 10, 46,"V"},				{Scr3_Col3_Row_10, "Scr3_Col3_Row_10", 10, 55, 0, 0, 10, 73,"V"},
		{Scr3_Col1_Row_11, "Scr3_Col1_Row_11", 11, 1, 0, 1, 11, 19,"V"},				{Scr3_Col2_Row_11, "Scr3_Col2_Row_11", 11, 28, 0, 1, 11, 46,"V"},				{Scr3_Col3_Row_11, "Scr3_Col3_Row_11", 11, 55, 0, 0, 11, 73,"V"},
		{Scr3_Col1_Row_12, "Scr3_Col1_Row_12", 12, 1, 0, 1, 12, 19,"V"},				{Scr3_Col2_Row_12, "Scr3_Col2_Row_12", 12, 28, 0, 1, 12, 46,"V"},				{Scr3_Col3_Row_12, "Scr3_Col3_Row_12", 12, 55, 0, 1, 12, 73,"V"},
		{Scr3_Col1_Row_13, "Scr3_Col1_Row_13", 13, 1, 0, 0, 13, 19,"V"},				{Scr3_Col2_Row_13, "Scr3_Col2_Row_13", 13, 28, 0, 1, 13, 46,"V"},				{Scr3_Col3_Row_13, "Scr3_Col3_Row_13", 13, 55, 0, 1, 13, 73,"V"},
		{Scr3_Col1_Row_14, "Scr3_Col1_Row_14", 14, 1, 0, 1, 14, 19,"V"},				{Scr3_Col2_Row_14, "Scr3_Col2_Row_14", 14, 28, 0, 1, 14, 46,"V"},				{Scr3_Col3_Row_14, "Scr3_Col3_Row_14", 14, 55, 0, 1, 14, 73,"V"},
		{Scr3_Col1_Row_15, "Scr3_Col1_Row_15", 15, 1, 0, 1, 15, 19,"V"},				{Scr3_Col2_Row_15, "Scr3_Col2_Row_15", 15, 28, 0, 0, 15, 46,"A"},				{Scr3_Col3_Row_15, "Scr3_Col3_Row_15", 15, 55, 0, 0, 15, 73,"A"},
		{Scr3_Col1_Row_16, "Scr3_Col1_Row_16", 16, 1, 0, 0, 16, 19,"V"},				{Scr3_Col2_Row_16, "Scr3_Col2_Row_16", 16, 28, 0, 0, 16, 46,"A"},				{Scr3_Col3_Row_16, "Scr3_Col3_Row_16", 16, 55, 0, 0, 16, 73,"A"},
		{Scr3_Col1_Row_17, "Scr3_Col1_Row_17", 17, 1, 0, 0, 17, 19,"V"},				{Scr3_Col2_Row_17, "Scr3_Col2_Row_17", 17, 28, 0, 0, 17, 46,"A"},				{Scr3_Col3_Row_17, "Scr3_Col3_Row_17", 17, 55, 0, 0, 17, 73,"A"},
		{Scr3_Col1_Row_18, "Scr3_Col1_Row_18", 18, 1, 0, 0, 18, 19,"V"},				{Scr3_Col2_Row_18, "Scr3_Col2_Row_18", 18, 28, 0, 1, 18, 46,"V"},				{Scr3_Col3_Row_18, "Scr3_Col3_Row_18", 18, 55, 0, 0, 18, 73,"A"},
		{Scr3_Col1_Row_19, "Scr3_Col1_Row_19", 19, 1, 0, 0, 19, 19,"V"},				{Scr3_Col2_Row_19, "Scr3_Col2_Row_19", 19, 28, 0, 1, 19, 46,"V"},				{Scr3_Col3_Row_19, "Scr3_Col3_Row_19", 19, 55, 0, 0, 19, 73,"A"},
		{Scr3_Col1_Row_20, "Scr3_Col1_Row_20", 20, 1, 0, 0, 20, 19,"V"},				{Scr3_Col2_Row_20, "Scr3_Col2_Row_20", 20, 28, 0, 1, 20, 46,"V"},				{Scr3_Col3_Row_20, "Scr3_Col3_Row_20", 20, 55, 0, 0, 20, 73,"A"},
		{Scr3_Col1_Row_21, "Scr3_Col1_Row_21", 21, 1, 0, 0, 21, 19,"V"},				{Scr3_Col2_Row_21, "Scr3_Col2_Row_21", 21, 28, 0, 0, 21, 46,"V"},				{Scr3_Col3_Row_21, "Scr3_Col3_Row_21", 21, 55, 0, 0, 21, 73,"A"},
		{Scr3_Col1_Row_22, "Scr3_Col1_Row_22", 22, 1, 0, 0, 22, 19,"V"},				{Scr3_Col2_Row_22, "Scr3_Col2_Row_22", 22, 28, 0, 0, 22, 46,"V"},				{Scr3_Col3_Row_22, "Scr3_Col3_Row_22", 22, 55, 0, 1, 22, 73,"V"},
		{Scr3_Col1_Row_23, "Scr3_Col1_Row_23", 23, 1, 0, 0, 23, 19,"V"},				{Scr3_Col2_Row_23, "Scr3_Col2_Row_23", 23, 28, 0, 0, 23, 46,"V"},				{Scr3_Col3_Row_23, "Scr3_Col3_Row_23", 23, 55, 0, 1, 23, 73,"V"},
		{Scr3_Col1_Row_24, "Scr3_Col1_Row_24", 24, 1, 0, 0, 24, 19,"V"},				{Scr3_Col2_Row_24, "Scr3_Col2_Row_24", 24, 28, 0, 1, 24, 46,"V"},				{Scr3_Col3_Row_24, "Scr3_Col3_Row_24", 24, 55, 0, 0, 24, 73,"A"},
		{Scr3_Col1_Row_25, "Scr3_Col1_Row_25", 25, 1, 0, 2, 25, 19,"C"},				{Scr3_Col2_Row_25, "Scr3_Col2_Row_25", 25, 28, 25, 2, 25, 46,"V"},				{Scr3_Col3_Row_25, "Scr3_Col3_Row_25", 25, 55, 49, 2, 25, 73,"V"},
		{Scr3_Col1_Row_26, "Scr3_Col1_Row_26", 26, 1, 0, 2, 26, 19,"C"},				{Scr3_Col2_Row_26, "Scr3_Col2_Row_26", 26, 28, 26, 0, 26, 46,"A"},				{Scr3_Col3_Row_26, "Scr3_Col3_Row_26", 26, 55, 50, 0, 26, 73,"A"},
		{Scr3_Col1_Row_27, "Scr3_Col1_Row_27", 27, 1, 0, 2, 27, 19,"C"},				{Scr3_Col2_Row_27, "Scr3_Col2_Row_27", 27, 28, 27, 2, 27, 46,"W"},				{Scr3_Col3_Row_27, "Scr3_Col3_Row_27", 27, 55, 51, 2, 27, 73,"W"},
		{Scr3_Col1_Row_28, "Scr3_Col1_Row_28", 28, 1, 0, 2, 28, 19,"C"},				{Scr3_Col2_Row_28, "Scr3_Col2_Row_28", 28, 28, 28, 0, 28, 46,"V"},				{Scr3_Col3_Row_28, "Scr3_Col3_Row_28", 28, 55, 52, 0, 28, 73,"V"},
		{Scr3_Col1_Row_29, "Scr3_Col1_Row_29", 29, 1, 0, 2, 29, 19,"C"},				{Scr3_Col2_Row_29, "Scr3_Col2_Row_29", 29, 28, 29, 0, 29, 46,"A"},				{Scr3_Col3_Row_29, "Scr3_Col3_Row_29", 29, 55, 53, 0, 29, 73,"A"},
		{Scr3_Col1_Row_30, "Scr3_Col1_Row_30", 30, 1, 0, 2, 30, 19,"C"},				{Scr3_Col2_Row_30, "Scr3_Col2_Row_30", 30, 28, 30, 2, 30, 46,"W"},				{Scr3_Col3_Row_30, "Scr3_Col3_Row_30", 30, 55, 54, 2, 30, 73,"W"},
		{Scr3_Col1_Row_31, "Scr3_Col1_Row_31", 31, 1, 0, 2, 31, 19,"C"},				{Scr3_Col2_Row_31, "Scr3_Col2_Row_31", 31, 28, 31, 2, 31, 46,"C"},				{Scr3_Col3_Row_31, "Scr3_Col3_Row_31", 31, 55, 55, 2, 31, 73,"C"},
		{Scr3_Col1_Row_32, "Scr3_Col1_Row_32", 32, 1, 0, 2, 32, 19,"C"},				{Scr3_Col2_Row_32, "Scr3_Col2_Row_32", 32, 28, 32, 2, 32, 46,"C"},				{Scr3_Col3_Row_32, "Scr3_Col3_Row_32", 32, 55, 56, 2, 32, 73,"C"},
		{Scr3_Col1_Row_33, "Scr3_Col1_Row_33", 33, 1, 0, 2, 33, 19,"C"},				{Scr3_Col2_Row_33, "Scr3_Col2_Row_33", 33, 28, 33, 2, 33, 46,"C"},				{Scr3_Col3_Row_33, "Scr3_Col3_Row_33", 33, 55, 57, 2, 33, 73,"C"},
		{Scr3_Col1_Row_34, "Scr3_Col1_Row_34", 34, 1, 0, 2, 34, 19,"C"},				{Scr3_Col2_Row_34, "Scr3_Col2_Row_34", 34, 28, 34, 3, 34, 46,"R"},				{Scr3_Col3_Row_34, "Scr3_Col3_Row_34", 34, 55, 58, 3, 34, 73,"R"},
		{Scr3_Col1_Row_35, "Scr3_Col1_Row_35", 35, 1, 0, 2, 35, 19,"C"},				{Scr3_Col2_Row_35, "Scr3_Col2_Row_35", 35, 28, 35, 0, 35, 46,"%"},				{Scr3_Col3_Row_35, "Scr3_Col3_Row_35", 35, 55, 59, 0, 35, 73,"%"},
		{Scr3_Col1_Row_36, "Scr3_Col1_Row_36", 36, 1, 0, 2, 36, 19,"C"},				{Scr3_Col2_Row_36, "Scr3_Col2_Row_36", 36, 28, 36, 3, 36, 46,"R"},				{Scr3_Col3_Row_36, "Scr3_Col3_Row_36", 36, 55, 60, 3, 36, 73,"R"},
		{Scr3_Col1_Row_37, "Scr3_Col1_Row_37", 37, 1, 0, 2, 37, 19,"C"},				{Scr3_Col2_Row_37, "Scr3_Col2_Row_37", 37, 28, 37, 3, 37, 46,"R"},				{Scr3_Col3_Row_37, "Scr3_Col3_Row_37", 37, 55, 61, 3, 37, 73,"R"},
		{Scr3_Col1_Row_38, "Scr3_Col1_Row_38", 38, 1, 0, 2, 38, 19,"C"},				{Scr3_Col2_Row_38, "Scr3_Col2_Row_38", 38, 28, 38, 3, 38, 46,"R"},				{Scr3_Col3_Row_38, "Scr3_Col3_Row_38", 38, 55, 62, 3, 38, 73,"R"},
		{Scr3_Col1_Row_39, "Scr3_Col1_Row_39", 39, 1, 0, 2, 39, 19,"C"},				{Scr3_Col2_Row_39, "Scr3_Col2_Row_39", 39, 28, 39, 3, 39, 46,"R"},				{Scr3_Col3_Row_39, "Scr3_Col3_Row_39", 39, 55, 63, 3, 39, 73,"R"},
		{Scr3_Col1_Row_40, "Scr3_Col1_Row_40", 40, 1, 0, 2, 40, 19,"C"},				{Scr3_Col2_Row_40, "Scr3_Col2_Row_40", 40, 28, 40, 3, 40, 46,"R"},				{Scr3_Col3_Row_40, "Scr3_Col3_Row_40", 40, 55, 64, 3, 40, 73,"R"},
		{Scr3_Col1_Row_41, "Scr3_Col1_Row_41", 41, 1, 0, 2, 41, 19,"C"},				{Scr3_Col2_Row_41, "Scr3_Col2_Row_41", 41, 28, 41, 3, 41, 46,"R"},				{Scr3_Col3_Row_41, "Scr3_Col3_Row_41", 41, 55, 65, 3, 41, 73,"R"},
		{Scr3_Col1_Row_42, "Scr3_Col1_Row_42", 42, 1, 0, 2, 42, 19,"C"},				{Scr3_Col2_Row_42, "Scr3_Col2_Row_42", 42, 28, 42, 2, 42, 46,"C"},				{Scr3_Col3_Row_42, "Scr3_Col3_Row_42", 42, 55, 66, 2, 42, 73,"C"},
		{Scr3_Col1_Row_43, "Scr3_Col1_Row_43", 43, 1, 0, 2, 43, 19,"C"},				{Scr3_Col2_Row_43, "Scr3_Col2_Row_43", 43, 28, 43, 2, 43, 46,"C"},				{Scr3_Col3_Row_43, "Scr3_Col3_Row_43", 43, 55, 67, 2, 43, 73,"C"},
		{Scr3_Col1_Row_44, "Scr3_Col1_Row_44", 44, 1, 0, 2, 44, 19,"C"},				{Scr3_Col2_Row_44, "Scr3_Col2_Row_44", 44, 28, 44, 2, 44, 46,"C"},				{Scr3_Col3_Row_44, "Scr3_Col3_Row_44", 44, 55, 68, 2, 44, 73,"C"},
		{Scr3_Col1_Row_45, "Scr3_Col1_Row_45", 45, 1, 0, 2, 45, 19,"C"},				{Scr3_Col2_Row_45, "Scr3_Col2_Row_45", 45, 28, 45, 2, 45, 46,"C"},				{Scr3_Col3_Row_45, "Scr3_Col3_Row_45", 45, 55, 69, 2, 45, 73,"C"},
		{Scr3_Col1_Row_46, "Scr3_Col1_Row_46", 46, 1, 0, 2, 46, 19,"C"},				{Scr3_Col2_Row_46, "Scr3_Col2_Row_46", 46, 28, 46, 2, 46, 46,"C"},				{Scr3_Col3_Row_46, "Scr3_Col3_Row_46", 46, 55, 70, 2, 46, 73,"C"},
		{Scr3_Col1_Row_47, "Scr3_Col1_Row_47", 47, 1, 0, 2, 47, 19,"C"},				{Scr3_Col2_Row_47, "Scr3_Col2_Row_47", 47, 28, 47, 4, 47, 46,"X"},				{Scr3_Col3_Row_47, "Scr3_Col3_Row_47", 47, 55, 71, 4, 47, 73,"X"},
		{Scr3_Col1_Row_48, "Scr3_Col1_Row_48", 48, 1, 0, 2, 48, 19,"C"},				{Scr3_Col2_Row_48, "Scr3_Col2_Row_48", 48, 28, 48, 4, 48, 46,"X"},				{Scr3_Col3_Row_48, "Scr3_Col3_Row_48", 48, 55, 72, 4, 48, 73,"X"},
		}
	};   // paraDataT


typedef enum //parm_index
{
	Scr1_Col1_Row_1, Scr1_Col2_Row_1, Scr1_Col3_Row_1, Scr1_Col1_Row_2, Scr1_Col2_Row_2, Scr1_Col3_Row_2, Scr1_Col1_Row_3, Scr1_Col2_Row_3, Scr1_Col3_Row_3, Scr1_Col1_Row_4, Scr1_Col2_Row_4, Scr1_Col3_Row_4, Scr1_Col1_Row_5, Scr1_Col2_Row_5, Scr1_Col3_Row_5, Scr1_Col1_Row_6, Scr1_Col2_Row_6, Scr1_Col3_Row_6, Scr1_Col1_Row_7, Scr1_Col2_Row_7, Scr1_Col3_Row_7, Scr1_Col1_Row_8, Scr1_Col2_Row_8, Scr1_Col3_Row_8,
	Scr1_Col1_Row_9, Scr1_Col2_Row_9, Scr1_Col3_Row_9, Scr1_Col1_Row_10, Scr1_Col2_Row_10, , Scr1_Col1_Row_11, Scr1_Col2_Row_11, Scr1_Col3_Row_10, Scr1_Col1_Row_12, Scr1_Col2_Row_12, Scr1_Col3_Row_12, Scr1_Col1_Row_13, Scr1_Col2_Row_13, Scr1_Col3_Row_13, Scr1_Col1_Row_14, Scr1_Col2_Row_14, Scr1_Col3_Row_14, Scr1_Col1_Row_15, Scr1_Col2_Row_15, Scr1_Col3_Row_15, Scr1_Col1_Row_16, Scr1_Col2_Row_16, Scr1_Col3_Row_16,
	Scr1_Col1_Row_17, Scr1_Col2_Row_17, Scr1_Col3_Row_17, Scr1_Col1_Row_18, Scr1_Col2_Row_18, Scr1_Col3_Row_18, Scr1_Col1_Row_19, Scr1_Col2_Row_19, Scr1_Col3_Row_19, Scr1_Col1_Row_20, Scr1_Col2_Row_20, Scr1_Col3_Row_20, Scr1_Col1_Row_21, Scr1_Col2_Row_21, Scr1_Col3_Row_21, Scr1_Col1_Row_22, Scr1_Col2_Row_22, Scr1_Col3_Row_22, Scr1_Col1_Row_23, Scr1_Col2_Row_23, Scr1_Col3_Row_23, Scr1_Col1_Row_24, Scr1_Col2_Row_24, Scr1_Col3_Row_24,
	
	Scr2_Col1_Row_1, Scr2_Col2_Row_1, Scr2_Col3_Row_1, Scr2_Col1_Row_2, Scr2_Col2_Row_2, Scr2_Col3_Row_2, Scr2_Col1_Row_3, Scr2_Col2_Row_3, Scr2_Col3_Row_3, Scr2_Col1_Row_4, Scr2_Col2_Row_4, Scr2_Col3_Row_4, Scr2_Col1_Row_5, Scr2_Col2_Row_5, Scr2_Col3_Row_5, Scr2_Col1_Row_6, Scr2_Col2_Row_6, Scr2_Col3_Row_6, Scr2_Col1_Row_7, Scr2_Col2_Row_7, Scr2_Col3_Row_7, Scr2_Col1_Row_8, Scr2_Col2_Row_8, Scr2_Col3_Row_8,
	Scr2_Col1_Row_9, Scr2_Col2_Row_9, Scr2_Col3_Row_9, Scr2_Col1_Row_10, Scr2_Col2_Row_10, , Scr2_Col1_Row_11, Scr2_Col2_Row_11, Scr2_Col3_Row_10, Scr2_Col1_Row_12, Scr2_Col2_Row_12, Scr2_Col3_Row_12, Scr2_Col1_Row_13, Scr2_Col2_Row_13, Scr2_Col3_Row_13, Scr2_Col1_Row_14, Scr2_Col2_Row_14, Scr2_Col3_Row_14, Scr2_Col1_Row_15, Scr2_Col2_Row_15, Scr2_Col3_Row_15, Scr2_Col1_Row_16, Scr2_Col2_Row_16, Scr2_Col3_Row_16,
	Scr2_Col1_Row_17, Scr2_Col2_Row_17, Scr2_Col3_Row_17, Scr2_Col1_Row_18, Scr2_Col2_Row_18, Scr2_Col3_Row_18, Scr2_Col1_Row_19, Scr2_Col2_Row_19, Scr2_Col3_Row_19, Scr2_Col1_Row_20, Scr2_Col2_Row_20, Scr2_Col3_Row_20, Scr2_Col1_Row_21, Scr2_Col2_Row_21, Scr2_Col3_Row_21, Scr2_Col1_Row_22, Scr2_Col2_Row_22, Scr2_Col3_Row_22, Scr2_Col1_Row_23, Scr2_Col2_Row_23, Scr2_Col3_Row_23, Scr2_Col1_Row_24, Scr2_Col2_Row_24, Scr2_Col3_Row_24,
	
	Scr3_Col1_Row_9, Scr3_Col2_Row_9, Scr3_Col3_Row_9, Scr3_Col1_Row_10, Scr3_Col2_Row_10, Scr3_Col3_Row_11, Scr3_Col1_Row_11, Scr3_Col2_Row_11, Scr3_Col3_Row_10, Scr3_Col1_Row_12, Scr3_Col2_Row_12, Scr3_Col3_Row_12, Scr3_Col1_Row_13, Scr3_Col2_Row_13, Scr3_Col3_Row_13, Scr3_Col1_Row_14, Scr3_Col2_Row_14, Scr3_Col3_Row_14, Scr3_Col1_Row_15, Scr3_Col2_Row_15, Scr3_Col3_Row_15, Scr3_Col1_Row_16, Scr3_Col2_Row_16, Scr3_Col3_Row_16,
	Scr3_Col1_Row_17, Scr3_Col2_Row_17, Scr3_Col3_Row_17, Scr3_Col1_Row_18, Scr3_Col2_Row_18, Scr3_Col3_Row_18, Scr3_Col1_Row_19, Scr3_Col2_Row_19, Scr3_Col3_Row_19, Scr3_Col1_Row_20, Scr3_Col2_Row_20, Scr3_Col3_Row_20, Scr3_Col1_Row_21, Scr3_Col2_Row_21, Scr3_Col3_Row_21, Scr3_Col1_Row_22, Scr3_Col2_Row_22, Scr3_Col3_Row_22, Scr3_Col1_Row_23, Scr3_Col2_Row_23, Scr3_Col3_Row_23, Scr3_Col1_Row_24, Scr3_Col2_Row_24, Scr3_Col3_Row_24,
	Scr3_Col1_Row_25, Scr3_Col2_Row_25, Scr3_Col3_Row_25, Scr3_Col1_Row_26, Scr3_Col2_Row_26, Scr3_Col3_Row_26, Scr3_Col1_Row_27, Scr3_Col2_Row_27, Scr3_Col3_Row_27, Scr3_Col1_Row_28, Scr3_Col2_Row_28, Scr3_Col3_Row_28, Scr3_Col1_Row_29, Scr3_Col2_Row_29, Scr3_Col3_Row_29, Scr3_Col1_Row_30, Scr3_Col2_Row_30, Scr3_Col3_Row_30, Scr3_Col1_Row_31, Scr3_Col2_Row_31, Scr3_Col3_Row_31, Scr3_Col1_Row_32, Scr3_Col2_Row_32, Scr3_Col3_Row_32,
	Scr3_Col1_Row_33, Scr3_Col2_Row_33, Scr3_Col3_Row_33, Scr3_Col1_Row_34, Scr3_Col2_Row_34, Scr3_Col3_Row_34, Scr3_Col1_Row_35, Scr3_Col2_Row_35, Scr3_Col3_Row_35, Scr3_Col1_Row_36, Scr3_Col2_Row_36, Scr3_Col3_Row_36, Scr3_Col1_Row_37, Scr3_Col2_Row_37, Scr3_Col3_Row_37, Scr3_Col1_Row_38, Scr3_Col2_Row_38, Scr3_Col3_Row_38, Scr3_Col1_Row_39, Scr3_Col2_Row_39, Scr3_Col3_Row_39, Scr3_Col1_Row_40, Scr3_Col2_Row_40, Scr3_Col3_Row_40,
	Scr3_Col1_Row_41, Scr3_Col2_Row_41, Scr3_Col3_Row_41, Scr3_Col1_Row_42, Scr3_Col2_Row_42, Scr3_Col3_Row_42, Scr3_Col1_Row_43, Scr3_Col2_Row_43, Scr3_Col3_Row_43, Scr3_Col1_Row_44, Scr3_Col2_Row_44, Scr3_Col3_Row_44, Scr3_Col1_Row_45, Scr3_Col2_Row_45, Scr3_Col3_Row_45, Scr3_Col1_Row_46, Scr3_Col2_Row_46, Scr3_Col3_Row_46, Scr3_Col1_Row_47, Scr3_Col2_Row_47, Scr3_Col3_Row_47, Scr3_Col1_Row_48, Scr3_Col2_Row_48, Scr3_Col3_Row_48,Parm_Index_Last
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
