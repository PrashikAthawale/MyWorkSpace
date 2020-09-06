/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- .Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.


*/

#include<stdio.h>

int CountBit(int iNo)
{

	int iMask=0x00000001;
	int i=1; 
	int j=2;
	int iCnt=0;
	int iResult=0;
	
	while(i<=32)
	{
		
		
		iResult=iNo&iMask;
		
		if(iResult==iMask)
		{
			iCnt++;
		}
		
		iMask=iMask<<(j-1);
		
		i++;
		
	}
	return iCnt;

	
}

int main()
{
	int iNo=0;
	int iPos=0;
    int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	iRet=CountBit(iNo);
	
	printf("Output: %d",iRet);
}