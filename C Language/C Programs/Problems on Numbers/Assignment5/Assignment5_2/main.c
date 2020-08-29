/* 

Problem statement:-Write a program which accept one number from user and check whether that
number is greater than 100 or not.

Input : 101
Output : Greater

Input : 39
Output : Smaller


Algorithm 
		
		START
				Accept one Number from user and store it into iValue
				Check that Number
					if Number is equal to 100
						return EQUAL
					if Number is less than 100
						return FALSE
					if Number is greater than 100
						return TRUE
					
				
*/

#include"header.h"

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;
	
	printf("Enter the First Number :");
	scanf("%d",&iValue);
	
	
	iRet=ChkNum(iValue);
		
	if(iRet==TRUE){
		
		printf("Number is greater than hundred \n");
		
	}
	
	if(iRet==FALSE){
		
		printf("Number is smaller than hundred");
		
	}
	
	if(iRet==EQUAL){
		
		printf("Number is EQUAL");
	}
	

	
	return 0;
}