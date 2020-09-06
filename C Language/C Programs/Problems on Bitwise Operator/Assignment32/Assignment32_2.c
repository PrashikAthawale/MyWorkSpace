/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-BOOL
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-  Write a program which checks whether 5th & 18th bit is On or OFF.

Input:-131088
Binary:-10 0000 0000 0001 0000
output:-TRUE

Input:-1234
Binary:-100 1101 0010
output:-FALSE

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL; 

BOOL ChheckBit(int iNo)
{
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iResult=0;
	
	int iMask=0x00020010;
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


int main()
{
   int iNo=0;
   int iRet=0;
   
   printf("Enter the Number :");
   scanf("%d",&iNo);
   
   iRet=ChheckBit(iNo);
   
   if(iRet==TRUE)
   {
	   printf("5th and 18th Bit is on ");
   }
   else
   {
	   printf("5th and 18th Bit is Off ");
   }
	
}
