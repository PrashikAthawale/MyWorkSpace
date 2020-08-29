/* 
Problem Statement:- Accept number from user and display below pattern. 
Input : 4 
Output : # 1 * # 2 * # 3 * # 4 *
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
	