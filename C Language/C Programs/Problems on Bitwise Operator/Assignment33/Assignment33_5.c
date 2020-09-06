/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accept one number from user and ON its first 4 
bits. Return modified number. 

Input : 73 
Output : 79

Input : 1
Output :15
*/

#include<stdio.h>

int ChheckBit(int iNo)
{
	
	int iMask=0;
	
	iMask=0x0000000F;
	
	int iResult=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	iResult=iNo|iMask;
	
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
