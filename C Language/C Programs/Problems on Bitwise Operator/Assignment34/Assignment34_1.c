/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CheckBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which accept one number and position from user and 
check whether bit at that position is on or off. If bit is one return TURE 
otherwise return FALSE. 

Input : 10 2 
Output : TRUE

Input : 4 5 
Output : FALSE

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL CheckBit(int iNo,int iPos)
{
	int iResult=0;
	int iMask=0; 
	iMask=0x00000001;
	
	iMask=iMask<<(iPos-1);
	
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
	int iPos=0;
    int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	printf("Enter the Position :");
	scanf("%d",&iPos);
	
	iRet=CheckBit(iNo,iPos);
	
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
}