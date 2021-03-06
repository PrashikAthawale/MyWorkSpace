/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Largest,LargestR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-25 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a recursive program which accept number from user and return 
largest digit 

Input : 87983 
Output : 9
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int Largest(int iNo) 
{
	int iDigit=0;
	int iLarge=0;
	
	iLarge=iNo%10;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit>iLarge)
		{
			iLarge=iDigit;
		}	
		iNo=iNo/10;
	}
	
	return iLarge;

}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int LargestR(int iNo)
{
	static int iLarge=0;
	
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit>iLarge)
		{
			iLarge=iDigit;
		}
		
		iNo=iNo/10;
		
		LargestR(iNo);
		
	}
	
	return iLarge;
}


int main()
{
	int iRet=0;
	int iNo=0;
	
	printf("Enter the Number: ");
	scanf("%d",&iNo);
	
	iRet=Largest(iNo);
	printf("NORMAL Approach\n");
	printf("Largest Digit is:%d\n",iRet);
	
	iRet=LargestR(iNo);
	printf("RECURSIVE Approach\n");
	printf("Largest Digit is :%d\n",iRet);

return 0;	
}