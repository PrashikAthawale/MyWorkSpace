#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:-Accept two number from user and display 
//first number in second number of  time .
////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
	if((iNo%2)==0)
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
	int iValue=0;
	BOOL bRet=0;
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
	if(bRet==TRUE)
	{
		printf("Number is Even ");
	}
	else
	{
		printf("Number is Odd ") ;
	}


}