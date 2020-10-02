/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which accept number from user and display below pattern. 

Input : 5 
Output : 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display(int iNo) 
{
	while(iNo>0)
	{
		printf("%d*",iNo);
		
		
		iNo--;
	}
	
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR(int iNo)
{
	
	if(iNo>0)
	{
		printf("%d*",iNo);
		iNo--;
		
		DisplayR(iNo);
	}
	
}



int main()
{
	int iNo=0;
	
	printf("Enter the Number: ");
	scanf("%d*",&iNo);
	
	Display(iNo);
	DisplayR(iNo);
	
return 0;	
}