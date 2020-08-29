/* 

Problem Statement :-Write a program which accept three numbers and print its multiplication.

Input : 5 4 7
Output : 140

Input : 5 0 7
output: 35

Input : 5 0 0
Output : 5

Input : 0 0 0
output: 0

				
*/

#include"header.h"

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iValue3=0;
	
	int iRet=0;
	
	printf("Enter the First Number :");
	scanf("%d",&iValue1);
	
	printf("Enter the Second Number :");
	scanf("%d",&iValue2);
	
	printf("Enter the First Number :");
	scanf("%d",&iValue3);
	
	
	iRet=Mul(iValue1,iValue2,iValue3);
		
	printf("Multiplication of Numbers : %d\n",iRet);
	
	
	return 0;
 
}
	