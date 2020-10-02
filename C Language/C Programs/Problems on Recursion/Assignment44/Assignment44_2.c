/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which display below pattern. 

Output : 1 2 3 4 5 

*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display() 
{
	int i=1;
	
	while(i<=5)
	{
		printf("%d",i);
		
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
		printf("%d",i);
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