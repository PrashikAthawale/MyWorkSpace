/* 
Problem Statement:-Accept number of rows and number of columns from user and display below 
pattern.
 
Input : iRow = 4 iCol = 4 
Output : 
 A B C D 
 A B C D 
 A B C D 
 A B C D
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
	