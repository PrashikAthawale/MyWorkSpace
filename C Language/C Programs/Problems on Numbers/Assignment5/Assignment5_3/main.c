/* 

Problem Statement :-Write a program which accept two numbers and check whether numbers are
equal or not.

Input : 10 10				
Output : Equal          

Input : 10 -10
Output : Not Equal

Algorithm 
		
		START
				Accept two Numbers from user and store it into iValue1 and iValue2
				Check that Number
					if iValue1 is equal to iValue2
						return TRUE
					else
						return FALSE
				Continue
				
*/

#include"header.h"

int main()
{
	int iValue1=0;
	int iValue2=0;
	BOOL iRet=FALSE;
	
	printf("Enter the First Number :");
	scanf("%d",&iValue1);
	
	printf("Enter the Second Number :");
	scanf("%d",&iValue2);
	
	iRet=ChkEql(iValue1,iValue2);
		
	if(iRet==TRUE){
		
		printf("Numbers are EQUAL \n");
		
	}
	
	if(iRet==FALSE){
		
		printf("Numbers are not EQUAL");
		
	}

	return 0;
 
}
	