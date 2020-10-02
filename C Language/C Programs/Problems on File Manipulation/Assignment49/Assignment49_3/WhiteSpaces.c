/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-WhiteSpaces
//Input:-String 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accepts file name from user and count number of 
white spaces from that file. 

Input : Demo.txt 
Output : Number of white spaces are 13
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int WhiteSpaces(char Name[])
{
	int fd=0;
	int ret=0;
	int i=0;
	int iCnt=0;
	char arr[100]={'\0'};
	
	fd=open(Name,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to Open ");
		
	}
	
	while((ret=read(fd,arr,100))!=0)
	{
		while(arr[i]!='\0')
		{
			if(arr[i]==' ')
			{
				iCnt++;
			}
			
			i++;
		}
	}

	return iCnt;
		
}

int main()
{
	int iRet=0;
	char Name[30]={'\0'};
	
	printf("Enter File Name :");     
	scanf("%s",&Name);
	
	iRet=WhiteSpaces(Name);
	
	printf("Number of White Spaces :%d",iRet);
	
} 