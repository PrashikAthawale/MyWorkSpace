/* 
Problem Statement:-Write a program which accept temperature in Fahrenheit and convert it into celsius.(1celsius=(Fahrenheit-32)*(5/9))

Input: 10 
Output: -12.2222(10-32)*(5/9)

Input: 34 
Output: 1.11111(34-32)*(5/9)
*/


#include"header.h"

int main()
{
 	float fValue=0.0;
	float fAns=0.0;
	
	printf("Enter Number:");
	scanf("%f",&fValue);
	
	
	fAns=Convert(fValue);
	printf("%f",fAns);
	
	return 0;
 
}
	