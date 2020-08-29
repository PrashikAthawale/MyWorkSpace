#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-NonFact
//Input:-Integer
//Output:-int
//Description:- It is used to  accept one number from user and return summation of all its
//non factors.
//Author:-Prashik Athawale
//Date:-3 August 2020
//////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
		int iCnt=0;
		int iAns1=0;
		int iAns2=0;
		int iAns3=0;

		if(iNo<0){
			
			iNo=-iNo;
			
			
		}
		
		
		for(iCnt=1;iCnt<iNo;iCnt++){
			
			if((iNo%iCnt)==0)
			{
				
				iAns1=iAns1+iCnt;
				
			}
			
			else{
				iAns2=iAns2+iCnt;
			}
		}
		
		return iAns3=iAns1-iAns2;
}

