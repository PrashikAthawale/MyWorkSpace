/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-BOOL
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which checks whether 7th & 15th & 21st , 28th bit 
is On or OFF.

Input:-13,52,82,752
Binary:-1000 0001 0000 0100 0000 0100 0000
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
	
	int iMask=0x08104040;
	
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
	   printf("7th & 15th & 21st , 28th  Bit is on ");
   }
   else
   {
	   printf("7th & 15th & 21st , 28th  Bit is Off ");
   }
	
}
