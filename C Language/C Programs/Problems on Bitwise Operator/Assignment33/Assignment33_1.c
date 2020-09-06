/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- .Write a program which accept one number from user and off 7th bit of that 
number if it is on and vice versa. Return modified number.

Input : 79 
Output : 15

Input:-47
Output:-111

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
   
   printf(" Modified Number is :%d",iRet);
}
