/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkOn
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which accept one number from user and check whether 
9th or 12th bit is on or off. 

Input : 257 
Output : TRUE

Input : 111 
Output : FALSE

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkOn(int iNo)
{
	int iResult=0;
	int iResult1=0;
	
	int iMask1=0x00000100;
	int iMask2=0x00000800;
	
	iResult=iNo&iMask1;
	
	if(iResult==iMask1||iResult1==iMask2)
	{
			return TRUE;
	}
	
	
}

int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	iRet=ChkOn(iNo);
	
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}