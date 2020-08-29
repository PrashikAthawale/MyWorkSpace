/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-SchoolFees
//Input:-Integer
//Output:-Float
//Author:-Prashik Athawale
//Date:-18 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Design application for school management system. 
As school is primary there are 4 standards from 1 to 4. 
School fees of each standard is different. 
For first standard fees are 8900, for second standard 12790, for 
third standard 21000 and for fourth standard fees are 23450. 
We have to accept standard from user and display the 
corresponding fees.
 
Input : 2          Output : 12790 
Input : 4          Output : 23450 
Input : 6          Output : Wrong input 

 */
 
#include<stdio.h>

int SchoolFees(int iStandard)
{
	char ch=64+iStandard;
	
	switch(ch)
	
	{
	
		case 'A':
			
			printf("Your Fees is 8900 ");
			break;
			
		case 'B':
			printf("Your Fees is 12790 ");
			break;
			
		case 'C':
			
			printf("Your Fees is 21000 ");
			break;
			
		case 'D':
			
			printf("Your Fees is 23450 ");
			break;
			
		default:
			printf("Wrong Input ");
	}


}




int main()
{
	int iValue=0;
	
	printf("Enter Standard :");
	scanf("%d",&iValue);
	
	SchoolFees(iValue);
	
	


}







 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 