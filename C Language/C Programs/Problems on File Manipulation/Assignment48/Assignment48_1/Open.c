/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-main
//Input:-String 
//Output:-void 
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write application which accept file name from user and open that file in read mode. 

Input : Demo.txt 
Output : File opened successfully.
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
	
	
	fd=open(Name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("File does not Exists or Unable to Open");
	}
	else
	{
		printf("File Successfully Opened with fd :%d",fd);
	}
	
	return 0;
	
}