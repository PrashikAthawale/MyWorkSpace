/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-WhiteSpaces,WhiteSpacesR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-25 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which accept string from user and count white 
spaces. 

Input : HE llo WOr lD 
Output : 3
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int WhiteSpaces(char Str[]) 
{
	int iCnt=0;
	int i=0;
	
	while(Str[i]!='\0')
	{
			
			if(Str[i]==' ')
			{
				iCnt++;
			}
		i++;
	}
	
	return iCnt;

}
////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int WhiteSpacesR(char Str[])
{
	static int i=0;
	static int iCnt=0;
	
	if(Str[i]!='\0')
	{
		if(Str[i]==' ')
		{
			iCnt++;
		}
		i++;
		
		WhiteSpacesR(Str);
	}
	
	return iCnt;
}


int main()
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("Enter the String: ");
	scanf("%[^'\n']s",&Str);
	
	iRet=WhiteSpaces(Str);
	printf("NORMAL Approach\n");
	printf("White Spaces are:%d\n",iRet);
	
	iRet=WhiteSpacesR(Str);
	printf("RECURSIVE Approach\n");
	printf("White Spaces are:%d\n",iRet);

return 0;	
}