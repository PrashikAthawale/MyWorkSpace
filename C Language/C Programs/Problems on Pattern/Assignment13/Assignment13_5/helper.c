#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Pattern
//Input:-Integer
//Output:-void
//Description:-Accept number from user and display below pattern. 
//Author:-Prashik Athawale
//Date:-11 August 2020
//////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
	
	int iCnt=0;
	int iAns=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}

	for(iCnt=2;iCnt<=(iNo*2);iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d" "\t",iCnt);
		}
			 
	}
	
	
}
