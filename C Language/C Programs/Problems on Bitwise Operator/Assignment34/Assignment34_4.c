/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accept one number and position from user and
toggle that bit. Return modified number.

Input : 10 3
Output : 14 


Input : 5 3
Output : 1 

*/

#include<stdio.h>

int CheckBit(int iNo,int iPos)
{
	int iResult=0;
	int iMask=0; 
	iMask=0x00000001;
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo^iMask;
	
	return iResult;
	
	
}


int main()
{
	int iNo=0;
	int iPos=0;
    int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	printf("Enter the Position :");
	scanf("%d",&iPos);
	
	iRet=CheckBit(iNo,iPos);
	
	printf("Modified Number %d",iRet);
}