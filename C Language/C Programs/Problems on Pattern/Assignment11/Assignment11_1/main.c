/* 
Problem Statement:-Write a program which accept range from user and display all numbers in between that range. 

Input : 23 35 
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
 
Input : 10 18 
Output : 10 11 12 13 14 15 16 17 18
 
Input : 10 10 
Output : 10
*/


#include"header.h"

int main()
{
 	int iValue1=0;
	int iValue2=0;
	
	printf("Enter first Number:");
	scanf("%d",&iValue1);
	
	
	printf("Enter Second Number:");
	scanf("%d",&iValue2);
	
	Range(iValue1	,iValue2);
	
	return 0;
 
}
	