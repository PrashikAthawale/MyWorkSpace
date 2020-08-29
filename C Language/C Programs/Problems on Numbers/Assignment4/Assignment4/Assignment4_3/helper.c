#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-NonFact
//Input:-Integer
//Output:-void
//Description:- It is used to  accept one number from user and  display its non Factors.
//Author:-Prashik Athawale
//Date:-3 August 2020
//////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
		if(iNo<0){
			
			iNo=-iNo;
		}
		
		int iCnt=0;
		for(iCnt=1;iCnt<iNo;iCnt++){
			
			if((iNo%iCnt)!=0)
			{
				
				printf(" Non Factors are :%d\n",iCnt);
				
			}
			
		}
}

