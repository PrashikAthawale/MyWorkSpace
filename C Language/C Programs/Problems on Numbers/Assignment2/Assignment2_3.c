#include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:-Accept one number from user if the number is less 
//than 10 then print "Hello" otherwise print "Demo".
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	if(iNo<=10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}

int main()
{
	int iValue=0;
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
	
	
}