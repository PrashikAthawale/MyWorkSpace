/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept one number from user and toggle 7th bit of 
that number. Return modified number. 

Input : 137 
Output : 201

Input:-57
Output:-121

*/

#include<stdio.h>

int ChheckBit(int iNo)
{
	
	int iMask=0;
	
	iMask=0x00000040;
	
	int iResult=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	iResult=iNo^iMask;
	
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
