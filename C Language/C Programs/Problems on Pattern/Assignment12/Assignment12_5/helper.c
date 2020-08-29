#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-FactDifference
//Input:-Integer
//Output:-Integer
//Description:-Write a program which returns difference between Even factorial and odd factorial 
//of given number. 
//Author:-Prashik Athawale
//Date:-10 August 2020
//////////////////////////////////////////////////////////////////////////////////

int FactDifference(int iNo)
{	
	int iEvenFact=1;
	int iOddFact=1;
	
	int iCnt=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}
	
	for(iCnt=iNo;iCnt>1;iCnt--)
	{
			if(iCnt%2==0)
			{
				
				iEvenFact=iEvenFact*iCnt;
			}
			else{
				
				iOddFact=iOddFact*iCnt;
			}
	}
	
	return (iEvenFact-iOddFact);

	
}
