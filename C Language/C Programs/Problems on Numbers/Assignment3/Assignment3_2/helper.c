#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DisplayEvenFactor
//Input:-Integer
//Output:-Void
//Description:- It is used to which accept one number from user 
//and print that number of even factor on Screen
//Author:-Prashik Athawale
//Date:-31 July 2020
//////////////////////////////////////////////////////////////////////////////////

int DisplayEvenFactor(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	if(iNo==0){
		printf("0\n");
	}
	
	if(iNo==1){
		printf("1");
	}
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		
		if(iNo%iCnt==0)
		{
			printf("%d\n",iCnt);
		}
	}
	
	
}

