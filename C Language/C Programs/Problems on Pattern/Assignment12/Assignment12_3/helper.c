#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Convert
//Input:-Integer
//Output:-Integer
//Description:-Write a program to find even factorial of given number.
//Author:-Prashik Athawale
//Date:-10 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{	
	int iFact=1;
	int iCnt=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}
	
	for(iCnt=iNo;iCnt>1;iCnt--)
	{
			if(iCnt%2==0)
			{
				
				iFact=iFact*iCnt;
			}
	}
	
	return iFact;

	
}
