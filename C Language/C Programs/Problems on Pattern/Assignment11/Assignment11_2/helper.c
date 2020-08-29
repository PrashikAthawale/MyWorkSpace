#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Range
//Input:-Integer
//Output:-Void
//Description:-Write a program which accept range from user and display all even numbers in 
//between that range.
//Author:-Prashik Athawale
//Date:-9 August 2020
//////////////////////////////////////////////////////////////////////////////////

void Range(int iNo1,int iNo2)
{	
	int iCnt=0;
	
	if(iNo1<=iNo2)
	{
		
		for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
		{
			if(iCnt%2==0)
			{
				
				printf("%d\n",iCnt);
			}	
		}
	}
	
	else
	{
		
		printf("Invalid Range");
	}
}
