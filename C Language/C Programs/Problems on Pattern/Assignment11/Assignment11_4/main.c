/* 
Problem Statement:-Write a program which accept range from user and return addition of all even 
numbers in between that range. (Range should contains positive numbers only) 

Input : 23 30 
Output : 108
 
Input : 10 18 
Output : 70 

Input : -10 2 
Output : Invalid range
 
Input : 90 18 
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

	iRet=RangeSumEven(iValue1,iValue2);

	printf("%d",iRet);
		
	return 0;
 
}
	