#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-MulFact
//Input:-Integer
//Output:-int
//Description:- It is used to  accept one number from user and display its multiplication of factors
//and print that number of even number on Screen
//Author:-Prashik Athawale
//Date:-3 August 2020
//////////////////////////////////////////////////////////////////////////////////

int MulFact(int iNo)
{
		if(iNo<0){
			
			iNo=-iNO;
		}
		int iCnt=0;
		int iMult=1;
		for(iCnt=1;iCnt<iNo;iCnt++){
			
			if((iNo%iCnt)==0)
			{
				
				iMult=iMult*iCnt ;
				
			}
			
		}
		
		return iMult;
}

