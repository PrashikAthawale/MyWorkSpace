/* 
Problem Statement:- Accept number from user and display below pattern. 

Input : 5 
Output : 5 # 4 # 3 # 2 # 1 #
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
	