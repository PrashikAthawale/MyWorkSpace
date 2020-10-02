/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DisplayChar
//Input:-String 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accepts file name and one count from user and read 
that number of characters from starting position. 

Input : Demo.txt 12 
Output : Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int DisplayChar(char Name[],int iNo)
{
	int fd=0;
	int iRet=0;
	int Arr[100]={'\0'};
	
	fd=open(Name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open or File does not Exits");
		
	}
	
	while((iRet=read(fd,Arr,iNo))!=0)
	{
		if(iRet==iNo)
		{
			write(1,Arr,iNo);
		}	
	}
	
	
}

int main()
{
	char Name[30]={'\0'};
	int iNo=0;
	
	printf("Enter File Name :");
	scanf("%s",&Name);
	
	printf("Enter Number :");
	scanf("%s",&iNo);
	
	DisplayChar(Name,iNo);
	
	return 0;
	
}