/* 
Problem Statement:-Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
 
Input : 5.3 
Output : 88.2026
 
Input : 10.4 
Output : 339.6224

*/


#include"header.h"

int main()
{
 	float iValue=0.0;
	float iAns=0.0;
	
	printf("Enter the Radius:");
	scanf("%f",&iValue);
	
	iAns=Area(iValue);
	printf(" Area of Circle :%f",iAns);
	
	return 0;
 
}
	