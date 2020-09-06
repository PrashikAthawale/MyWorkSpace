/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChheckBit
//Input:-Integer
//Output:-BOOL
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which checks whether 15th bit is On or OFF.


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
	
	int iMask=0x00004000;
	
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
	   printf("15th Bit is on ");
   }
   else
   {
	   printf("15th Bit is Off ");
   }
	
}
