/* 
Problem Statement:-Accept amount in US dollar and return its corresponding value in Indian currency. 
Consider 1$ as 70 rupees. 

Input : 10 
Output : 700 

Input : 3 
Output : 210 

Input : 1200 
Output : 84000
*/


#include"header.h"

int main()
{
 	int iValue=0;
	int iRet=0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	iRet=Convert(iValue);

	printf("%d",iRet);
		
	return 0;
 
}
	