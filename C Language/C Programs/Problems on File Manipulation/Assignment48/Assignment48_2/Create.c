/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-main
//Input:-String 
//Output:-void 
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write application which accept file name from user and create that file. 

Input : Demo.txt 
Output : File created successfully.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>




int main()
{
	char Name[30]={'\0'};
	int fd=0;
	
	printf("Enter File Name :");
	scanf("%s",&Name);
	
	
	fd=creat(Name,0777);
	
	if(fd==-1)
	{
		printf("Unable to Create");
	}
	else
	{
		printf("File Successfully Created with fd :%d",fd);
	}
	
	return 0;
	
}