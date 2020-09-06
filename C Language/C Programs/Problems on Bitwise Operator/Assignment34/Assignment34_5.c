/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)


Input:-4026531855
Binary :-1111 0000 0000 0000 0000 0000 0000 1111
Output:-0


*/

#include<stdio.h>

int CheckBit(int iNo)
{
	int iResult=0;
	int iMask=0; 
	iMask=0xF000000F;
							
	iResult=iNo^iMask;
	
	return iResult;
	
}

int main()
{
	int iNo=0;
    int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	iRet=CheckBit(iNo);
	
	printf("Modified Number %d",iRet);
}