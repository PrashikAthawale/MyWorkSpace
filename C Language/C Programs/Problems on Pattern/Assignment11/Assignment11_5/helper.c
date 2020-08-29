#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-RangeReverse
//Input:-Integer
//Output:-Void
//Description:-Write a program which accept accept range from user and display all numbers in 
//between that range in reverse order. 
//Author:-Prashik Athawale
//Date:-10 August 2020
//////////////////////////////////////////////////////////////////////////////////

void RangeReverse(int iNo1,int iNo2)
{	
	
	int iCnt=0;
	
	if(iNo1>iNo2){
		
		printf("Invalid Input");
	}
	
	for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
	{
		printf(" %d",iCnt);
		
	}
	

	
}
