/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a recursive program which display below pattern. 

Output : * * * * *

*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display() 
{
	int i=1;
	
	while(i<=5)
	{
		printf("*");
		
		i++;
	}
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR()
{
	static int i=1;
	
	if(i<=5)
	{
		printf("*");
		i++;
		
		DisplayR();
	}
	
}



int main()
{
	Display();
	DisplayR();
	
return 0;	
}