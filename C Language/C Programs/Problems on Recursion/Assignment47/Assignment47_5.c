/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Reverse,ReverseR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which accept number from user and return its 
reverse number. 

Input : 523 
Output : 325
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int Reverse(int iNo)
{
	int iDigit=0;
	int iRev=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
	
}

////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int ReverseR(int iNo)
{
	int iDigit=0;
	static int iRev=0;
	
		if(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=(iRev*10)+iDigit;
			
			iNo=iNo/10;
			ReverseR(iNo);
		}
	
		return iRev;
}

int main()
{
	int iRet=0;
	int iNo=0;
	
	printf("Enter the Number: ");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	printf("NORMAL Approach\n");
	printf("Reverse Number is:%d\n",iRet);
	
	iRet=ReverseR(iNo);
	printf("RECURSIVE Approach\n");
	printf("Reverse Number is :%d\n",iRet);

return 0;	

}