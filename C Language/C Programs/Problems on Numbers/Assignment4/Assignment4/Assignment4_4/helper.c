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

int NonFactSum(int iNo)
{
		int iCnt=0;
		int iAns=0;

		if(iNo<0){
			
			iNo=-iNo;
		}
		
		
		for(iCnt=1;iCnt<iNo;iCnt++){
			
			if((iNo%iCnt)!=0)
			{
				
				iAns=iAns+iCnt;
				
			}
			
		}
		
		return iAns;
}

