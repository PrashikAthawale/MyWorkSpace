/* 
Problem Statement:-write a program which accept distance in kilo meter and convert it into meter (1kilometer=1000meter)

Input:5
Output:5000

Input:-5
Output:5000

Input:2
Output:2000
*/


#include"header.h"

int main()
{
 	int iValue=0.0;
	int iAns=0.0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	
	iAns=Convert(iValue);
	printf("%d",iAns);
	
	return 0;
 
}
	