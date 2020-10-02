/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Count,CountR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-25 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-  Write a recursive program which accept string from user and count number 
of characters. 

Input : Hello 
Output : 5
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int Count(char Str[]) 
{
	int i=0;
	
	while(Str[i]!='\0')
	{
		i++;
	}
	return i;

}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int CountR(char Str[])
{
	static int i=0;
	
	if(Str[i]!='\0')
	{
		i++;
		
		CountR(Str);
	}
	
	return i;
}



int main()
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("Enter the String: ");
	scanf("%[^'\n']s",&Str);
	
	iRet=Count(Str);
	printf("NORMAL Approach :%d\n",iRet);
	
	iRet=CountR(Str);
	printf("RECURSIVE Approach :%d\n",iRet);

return 0;	
}