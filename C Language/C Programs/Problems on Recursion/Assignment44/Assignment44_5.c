/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Dislay,DislayR
//Input:-void
//Output:-Void
//Author:-Prashik Athawale
//Date:-22 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-.Write a recursive program which display below pattern. 

Output : a b c d e f
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

void Display() 
{
	char ch='a';
	
	while(ch<='f')
	{
		printf("%c",ch);
		
		ch++;
	}
	printf("\n");
}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


void DisplayR()
{
	static char ch='a';
	
	if(ch<='f')
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