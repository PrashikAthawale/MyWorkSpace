#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DisplayEven
//Input:-Integer
//Output:-Void
//Description:- It is used to which accept one number from user 
//and print that number of even number on Screen
//Author:-Prashik Athawale
//Date:-31 July 2020
//////////////////////////////////////////////////////////////////////////////////

void DisplayEven(int iNo)
{
	int iCnt=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}
	
	if (iNo==0){
		
		printf("0\n");
	}
		
	for(iCnt=1;iCnt<=iNo*2;iCnt++)
	{
		

		if(iCnt%2==0){
				
				
				printf("%d\n",iCnt);
		}
	}

}

