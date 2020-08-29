/* 
Problem Statement:-Write a program which accept area in square feet and convert it into square meter.(1squarefeet=0.0929Squaremeter)

Input:5 
Output:0.464515
 
Input:7 
Output:0.650321
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
	