/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountSmall,CountSmallR
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-26 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a recursive program which accept string from user and count number 
of small characters. 

Input : HElloWOrlD 
Output : 5
*/

#include<stdio.h>

////////////////////////////////////NORMAL APPROACH///////////////////////////////////////////////////////////

int CountSmall(char Arr[])
{
	int i=0;
	int iCnt=0;
	
	
	while(Arr[i]!='\0')
	{
		
		if(Arr[i]>='a'&&Arr[i]<='z')
		{
			iCnt++;
		}	
		
		i++;
	}
	
	return iCnt;	
}


////////////////////////////////////////RECURSIVE APPROACH///////////////////////////////////////////////////////////


int CountSmallR(char Arr[])
{
	static int i=0;
	
	static int iCnt=0;
	
	if(Arr[i]!='\0')
	{
		if(Arr[i]>='a'&&Arr[i]<='z')
		{
			iCnt++;
		
		}
		i++;
		CountSmallR(Arr);
		
	}	
	
	return iCnt;
}


int main()
{
	int iRet=0;
	char Arr[30]={'\0'};
	
	printf("Enter the String: ");
	scanf("%[^'\n']s",&Arr);
	
	iRet=CountSmall(Arr);
	printf("NORMAL Approach\n");
	printf("Count is:%d\n",iRet);
	
	iRet=CountSmallR(Arr);
	printf("RECURSIVE Approach\n");
	printf("Count is :%d\n",iRet);

return 0;	
}