/* 
Write a program which accept number from user and return summation of all its
non factors.

Input : 12
Output : 50

Input : 10
Output : 37

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				create one variable as iAns and initialize it with 0
				Iterate the loop unitl the counter is less than iNo
				Check check whether iCNt is completely divisible by 0 
					if Yes
						then add the iCnt to iAns variable
					increment the counter by 1	
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0;	
	int iRet=0;
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=NonFactSum(iValue);	
	
	printf("Summation of Non-Factors is: %d\n",iRet);
	
	return 0;
}