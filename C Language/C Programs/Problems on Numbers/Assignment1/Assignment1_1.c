#include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Integer
//Description:- Program to divide two Numbers
////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
	int iAns=0;
	
	if(iNo2<=0)
	{
		return -1;
	}
	else
	{
		iAns=iNo1/iNo2;
		return iAns;
	}
}

int main()
{
	int iValue1=15;
	int iValue2=5;
	int iRet=0;
	
	iRet=Divide(iValue1,iValue2);
	printf("Division is %d",iRet);
	return 0;
}