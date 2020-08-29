/* 
Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)

Input : 10
Output : -29 (8 - 37)


Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				create one variable as iAns1,iAns2,iAns3 and initialize it with 0
				Iterate the loop unitl the counter is less than iNo
				Check whether iCNt is completely divisible by 0 
					if Yes
						then add the iCnt to iAns1 variable
					else
						add the iCnt to iAns2 variable
					increment the counter by 1	
				return iAns3
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the First Number :");
	scanf("%d",&iValue);
	
	
	iRet=FactDiff(iValue);	
	
	printf("Difference: %d\n",iRet);
	
	return 0;
}