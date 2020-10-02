/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a recursive program which display below pattern. 

Input : 6 
Output : A B C D E F
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display(int iNo) 
{
	int i=0;
	
	while(i<iNo)
	{
		printf("%c",i+65);
		
		
		i++;
	}
	
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR(int iNo)
{

	static int i=0;
	
	if(i<iNo)
	{
		printf("%c",i+65);
		i++;
		
		DisplayR(iNo);
	}
	
}



int main()
{
	int iNo=0;
	
	printf("Enter the Number: ");
	scanf("%d",&iNo);
	
	Display(iNo);
	DisplayR(iNo);
	
return 0;	
}