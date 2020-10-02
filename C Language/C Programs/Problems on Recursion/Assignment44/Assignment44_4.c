/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-.Write a recursive program which display below pattern. 

Output : A B C D E F

*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display() 
{
	char ch='A';
	
	while(ch<='F')
	{
		printf("%c",ch);
		
		ch++;
	}
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR()
{
	static char ch='A';
	
	if(ch<='F')
	{
		printf("%c",ch);
		ch++;
		
		DisplayR();
	}
	
}



int main()
{
	Display();
	DisplayR();
	
return 0;	
}