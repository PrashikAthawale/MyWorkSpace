/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountSmall,CountSmallR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-26 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a recursive program which accept number from user and return 
smallest digit 

Input : 87983 
Output : 3
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int CountSmall(int iNo)
{
	int iDigit=0;
	int iSmall=0;
	iSmall=iNo%10;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit<iSmall)
		{
			iSmall=iDigit;
		}
		iNo=iNo/10;
		
	}
	return iSmall;
	
}

////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int CountSmallR(int iNo)
{
	int iDigit=0;
	
	const int iSize=iNo%10;
	static int iSmall=0;
	
		if(iNo!=0)
		{
			iDigit=iNo%10;
			
			if(iDigit<iSmall)
			{
				iSmall=iDigit;
			}
			
			iNo=iNo/10;
			CountSmallR(iNo);
		}
	
		return iSmall;
}

int main()
{
	int iRet=0;
	int iNo=0;
	
	printf("Enter the Number: ");
	scanf("%d",&iNo);
	
	iRet=CountSmall(iNo);
	printf("NORMAL Approach\n");
	printf("Small Digit is:%d\n",iRet);
	
	iRet=CountSmallR(iNo);
	printf("RECURSIVE Approach\n");
	printf("Small Digit is :%d\n",iRet);

return 0;	

}