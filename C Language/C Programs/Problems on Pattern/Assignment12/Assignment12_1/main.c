/* 
Problem Statement:Write a program which accept number from user and display below pattern.
 
Input : 5 
Output : * * * * * # # # # # 

Input : 6 
Output : * * * * * * # # # # # # #
 
Input : -5 
Output : * * * * * # # # # # 

Input : 2 
Output : * * # #
*/


#include"header.h"

int main()
{
 	int iValue=0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
		
	return 0;
 
}
	