/* 
Problem Statement:-Write a program which accept number from user and print even factors of that
number.

Input:-24
Output:-2 4 6 8 12

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 2
				Iterate the loop until half of given number
				Check check whether iNo is completely divisible by iCnt 
					if Yes
						then print the Number on console
					increment the counter by 1	
				Continue to the Iteration
		
*/

#include"header.h"

int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	DisplayEvenFactor(iValue);	
	
}