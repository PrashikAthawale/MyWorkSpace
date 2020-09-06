/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkOn
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-  Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range. 

Input : 897  9  13 
Toggle all bits from position 9 to 13 of input number ie 897.

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int ChkOn(int iNo,int iPos1,int iPos2)
{
	int iResult=0;
	int i=1;
	int iResult1=0;
	
	int iMask=0x00000001;
	
	while(iPos1<=iPos2)
	{
		iResult=iNo^iMask<<(iPos1-1);
		
		iPos1++;
	}
	return iResult;
}

int main()
{
	int iNo=0;
	int iPos1=0;
	int iPos2=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	printf("Enter First Position :");
	scanf("%d",&iPos1);
	
	printf("Enter Second Position :");
	scanf("%d",&iPos2);
	
	iRet=ChkOn(iNo,iPos1,iPos2);
	
		printf("%d",iRet);
}