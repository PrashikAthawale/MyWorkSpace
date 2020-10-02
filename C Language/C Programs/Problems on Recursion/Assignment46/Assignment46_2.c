/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-SumDigit,SumDigitR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which accept number from user and return 
summation of its digits. 

Input : 879 
Output : 24
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int SumDigit(int iNo) 
{
	int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		
		iNo=iNo/10;
	}
	return iSum;

}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int SumDigitR(int iNo)
{
	int iDigit=0;
	static int iSum=0;
	
	if(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		
		iNo=iNo/10;
		
		SumDigitR(iNo);
	}
	
	return iSum;
}



int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter the Number: ");
	scanf("%d*",&iNo);
	
	iRet=SumDigit(iNo);
	printf("NORMAL Approach :%d\n",iRet);
	
	iRet=SumDigitR(iNo);
	printf("RECURSIVE Approach :%d\n",iRet);

return 0;	
}