#include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:-Accept one number from user and print that
//number of * on screen using "for loop".
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	Display(iValue);


}