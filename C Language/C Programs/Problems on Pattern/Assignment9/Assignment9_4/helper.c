#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer
//Output:-Void
//Description:-Write a program which accepts N from user and print all odd numbers up to N. 
//Author:-Prashik Athawale
//Date:-8 August 2020
//////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{	

	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++){
		
		if(iCnt%2!=0){
			
			printf(" %d",iCnt);
		}
	}

	
}
