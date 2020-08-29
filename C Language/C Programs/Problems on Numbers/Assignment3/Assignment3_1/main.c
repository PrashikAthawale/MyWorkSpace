/* 
Problem Statement:-Write a program which accept one number from user and print that number of
even numbers on screen.

Input:-7
Output:-2 4 6 8 10 12 14

Algorithm 
		
		START
				Accept one number from user and store it into iValue
				Create one counter as iCnt and initialize it with 1
				Iterate the loop until twice of given number
				Check check whether iCNt is completely divisible by 0 
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
	
	DisplayEven(iValue);	
	
}