/* 
Problem Statement:- Accept number from user and display below pattern. 

Input : 5 
Output : 1 * 2 * 3 * 4 * 5 *
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
	