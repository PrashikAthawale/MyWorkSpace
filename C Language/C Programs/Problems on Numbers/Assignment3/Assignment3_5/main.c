/* 
Problem Statement:-Accept one character from user and convert case of that character.

Input : a   Output : A
Input : D   Output : d

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
	char cValue='\0';
	
	printf("Enter the Number :");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);	
	
}