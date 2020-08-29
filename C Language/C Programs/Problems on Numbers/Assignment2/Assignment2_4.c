#include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:-Accept two number from user and display 
//first number in second number of  time .
////////////////////////////////////////////////////////////////

int Display(int iNo,int Freq)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=Freq;iCnt++)
	{
		printf("%d. %d \n",iCnt,iNo);
	}
}

int main()
{
	int iValue1;
	printf("Enter Number :");
	scanf("%d",&iValue1);
	
	int iValue2;
	printf("Enter Frequency :");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	return 0;

}