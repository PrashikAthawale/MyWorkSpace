#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Range
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept range from user and return addition of all numbers 
//in between that range.
//Author:-Prashik Athawale
//Date:-9 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Range(int iNo1,int iNo2)
{	
	int iCnt=0;
	int iAns=0;
	
	if(iNo1<=iNo2)
	{
		
		for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
		{
			
				iAns=iAns+iCnt;
		}
			
			return iAns;
	}
	
	else
	{
		
		printf("Invalid Range");
	}
}
