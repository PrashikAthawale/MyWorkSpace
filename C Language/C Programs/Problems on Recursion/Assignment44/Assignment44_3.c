/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which display below pattern. 

Output : 5 4 3 2 1

*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display() 
{
	int i=5;
	
	while(i>=1)
	{
		printf("%d",i);
		
		i--;
	}
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR()
{
	static int i=5;
	
	if(i>=1)
	{
		printf("%d",i);
		i--;
		
		DisplayR();
	}
	
}



int main()
{
	Display();
	DisplayR();
	
return 0;	
}