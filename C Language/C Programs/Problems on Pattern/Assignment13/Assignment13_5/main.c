/* 
Problem Statement:-  Accept number from user and display below pattern. 

Input : 8 
Output : 2 4 6 8 10 12 14 16
*/


#include"header.h"

int main()
{
 	
	int iValue=0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
		
	return 0;
 
}
	