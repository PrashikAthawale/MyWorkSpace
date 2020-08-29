#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-FactDec
//Input:-Integer
//Output:-int
//Description:- It is used to  accept one number from user and  display its factors in
//decreasing order.
//Author:-Prashik Athawale
//Date:-3 August 2020
//////////////////////////////////////////////////////////////////////////////////

int FactDec(int iNo)
{
		if(iNo<0){
			
			iNo=-iNo;
		}
		
		int iCnt=0;
		for(iCnt=(iNo-1);iCnt<iNo;iCnt--){
			
			if((iNo%iCnt)==0)
			{
				
				printf(" Decreasing order of factors are :%d\n",iCnt);
				
			}
			
		}
}

