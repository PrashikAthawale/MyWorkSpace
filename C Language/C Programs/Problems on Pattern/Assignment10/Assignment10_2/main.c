/* 
Problem Statement:-Write a program which accept width & height of rectangle from user and calculate 
its area. (Area = Width * Height)
 
Input : 5.3  9.78 
Output : 51.834
*/


#include"header.h"

int main()
{
 	float fValue1=0.0;
	float fValue2=0.0;
	float fAns=0.0;
	
	printf("Enter Height:");
	scanf("%f",&fValue1);
	
	printf("Enter the Width:");
	scanf("%f",&fValue2);
	
	
	fAns=Area(fValue1,fValue2);
	printf(" Area of Circle :%f",fAns);
	
	return 0;
 
}
	