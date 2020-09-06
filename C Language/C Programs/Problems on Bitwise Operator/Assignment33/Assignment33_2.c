/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept one number from user and off 7th and 10th 
bit of that number. Return modified number.

Input : 577
Output : 1

Input:-47
Output:-47

*/

#include<stdio.h>

int ChheckBit(int iNo)
{
	
	int iMask=0;
	
	iMask=0x00000240;
	
	int iResult=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	iResult=iNo&(~iMask);
	
	return iResult;

}


int main()
{
   int iNo=0;
   int iRet=0;
   
   printf("Enter the Number :");
   scanf("%d",&iNo);
   
   iRet=ChheckBit(iNo);
   
   printf("Modified Number is :%d",iRet);
}
