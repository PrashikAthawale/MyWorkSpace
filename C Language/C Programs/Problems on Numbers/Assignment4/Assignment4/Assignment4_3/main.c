/* 
Write a program which accept number from user and display all its non factors.

Input : 12
Output : 5 7 8 9 10 11

Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				Iterate the loop unitl the counter is less than iNo/2
				Check check whether iCNt is not completely divisible by 0 
					if Yes
						then print the value on console
					increment the counter by 1	
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0; 	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	NonFact(iValue);	
	
	
	return 0;
}