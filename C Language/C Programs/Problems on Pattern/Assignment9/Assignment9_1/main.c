/* 
Problem Statement:-Write a program which accept number from user and print that number of $ & * 
on screen. 

Input : 5 
Output : $ * $ * $ * $ * $ *
 
Input : 3 
Output : $ * $ * $ *
 
Input : -3 
Output : $ * $ * $ *
*/

#include"header.h"

int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	Pattern(iValue);

	
	return 0;
 
}
	