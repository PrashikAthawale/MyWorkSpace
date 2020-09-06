/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-BOOL
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which checks whether first and last bit is On or 
OFF. First bit means bit number 1 and last bit means bit number 32.

Input:-2147483649
Binary:-1000 0000 0000 0000 0000 0000 0000 0001
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
	
	int iMask=0x80000001;
	
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
	   printf("1th & 32th Bit is on ");
   }
   else
   {
	   printf("1th & 32th  Bit is Off ");
   }
	
}
