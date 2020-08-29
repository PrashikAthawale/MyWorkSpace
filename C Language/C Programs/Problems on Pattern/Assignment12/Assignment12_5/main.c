/* 
Problem Statement:- Write a program which returns difference between Even factorial and odd factorial 
of given number. 

Input : 5 
Output : -7 (8 - 15)
 
Input : -5 
Output : -7 (8 - 15)
 
Input : 10 
Output : 2895 (3840 - 945)
*/


#include"header.h"

int main()
{
 	int iValue=0;
	int iRet=0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	iRet=FactDifference(iValue);

	printf("%d",iRet);
		
	return 0;
 
}
	