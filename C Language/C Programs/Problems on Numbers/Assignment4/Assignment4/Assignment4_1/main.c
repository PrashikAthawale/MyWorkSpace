/* 
Write a program which accept number from user and display its multiplication of
factors.

Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)  			Input : 13
											Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				create one variable as iMult to store the multiplication of factors
				Iterate the loop until that of given number
				Check check whether iCNt is completely divisible by 0 
					if Yes
						then multiply the counter with the the initialize value in iMult
					increment the counter by 1	
					return iMult
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=MulFact(iValue);	
	
	printf("Multiplication of factors %d\n",iRet);
}