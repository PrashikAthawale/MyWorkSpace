#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-RangeSumEven
//Input:-Integer
//Output:-Void
//Description:-Write a program which accept range from user and return addition of all even 
//numbers in between that range. (Range should contains positive numbers only) 
//Author:-Prashik Athawale
//Date:-10 August 2020
//////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iNo1,int iNo2)
{	
	int iSum=0;
	int iCnt=0;
	
	if(iNo1>0&&iNo2>0)
	{
		for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
		{
			
			if(iCnt%2==0)
			{
				
				iSum=iSum+iCnt;
			}
		}
		
			return iSum;

	}
	if(iNo1<=0||iNo2<=0)
	{ 
		
		printf("Invaild Input");
	}
}
