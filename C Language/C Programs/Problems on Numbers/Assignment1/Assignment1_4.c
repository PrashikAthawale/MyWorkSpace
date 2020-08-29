#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Integer(bool)
//Description:- Accept one Number and check whether it 
//it is divisble by 5
//
////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
	if((iNo%5)==0)
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
	bool bRet=FALSE;
	printf("Enter Number :");
	scanf("%d",&iValue);
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	
}