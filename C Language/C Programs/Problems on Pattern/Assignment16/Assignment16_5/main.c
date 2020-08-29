/* 
Problem Statement:- Accept number of rows and number of columns from user and display 
below pattern.
 
Input : iRow = 4 iCol = 4 
Output : 
 1 2 3 4 
 2 3 4 5 
 3 4 5 6 
 4 5 6 7
 */


#include"header.h"

int main()
{
 	
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter Row:");
	scanf("%d",&iValue1);
	
	
	printf("Enter Column:");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
		
	return 0;
 
}
	