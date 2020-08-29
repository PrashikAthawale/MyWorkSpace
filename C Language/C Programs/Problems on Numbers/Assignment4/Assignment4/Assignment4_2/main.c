/* 
Write a program which accept number from user and display its factors in
decreasing order.

Input : 12
Output : 6 4 3 2 1

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				Initialize the value of counter with iNo
				Iterate the loop unitl the counter is less than iNo
				Check check whether iCNt is completely divisible by 0 
					if Yes
						then print the value on console
					decrement the counter by 1	
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0;

	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	FactDec(iValue);	
	
	
	return 0;
}