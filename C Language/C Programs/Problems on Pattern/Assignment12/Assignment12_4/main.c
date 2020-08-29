/* 
Problem Statement:- Write a program to find odd factorial of given number. 

Input : 5 
Output : 15 (5 * 3 * 1)
 
Input : -5 
Output : 15 (5 * 3 * 1) 

Input : 10 
Output : 945 (9 * 7 * 5 * 3 * 1)
*/


#include"header.h"

int main()
{
 	int iValue=0;
	int iRet=0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	iRet=FactOdd(iValue);

	printf("%d",iRet);
		
	return 0;
 
}
	