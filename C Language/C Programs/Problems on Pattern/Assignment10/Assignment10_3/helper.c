#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Float
//Output:-Void
//Description:-write a program which accept distance in kilo meter and convert it into meter (1kilometer=1000meter) 
//Author:-Prashik Athawale
//Date:-8 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Convert(int iNo)
{	

	int iRet=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}
	iRet=iNo*1000;
	
	return iRet;
	

	
}
