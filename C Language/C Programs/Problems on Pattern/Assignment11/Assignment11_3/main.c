/* 
Problem Statement: Write a program which accept range from user and return addition of all numbers 
in between that range. 

Input : 23 30 
Output : 212 

Input : 10 18 
Output : 126
 
Input : -10 2 
Output : Invalid range
*/


#include"header.h"

int main()
{
 	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	
	printf("Enter first Number:");
	scanf("%d",&iValue1);
	
	
	printf("Enter Second Number:");
	scanf("%d",&iValue2);
	
	iRet=Range(iValue1,iValue2);
		
		printf("Addition of all Numbers: %d",iRet);
	return 0;
 
}
	