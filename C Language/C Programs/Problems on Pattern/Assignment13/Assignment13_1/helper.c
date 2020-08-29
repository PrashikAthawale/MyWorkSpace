#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Pattern
//Input:-Integer
//Output:-void
//Description:-Accept number from user and display Alphabet till that Number 
//Author:-Prashik Athawale
//Date:-11 August 2020
//////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
	
	int i=0;
	int iAns=0;
	
	if(iNo<0){
		
		iNo=-iNo;
	}

	for(i=0;i<iNo;i++)
	{
		
		iAns=65+i;	
		
			printf("%c\t",iAns);

			 
	}
	
	
}
