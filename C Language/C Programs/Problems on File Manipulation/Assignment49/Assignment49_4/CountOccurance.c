/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountOccurence
//Input:-String 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accepts file name and one character from user and 
count number of occurrence of that characters from that file. 

Input : Demo.txt ‘M’ 
Output : Frequency of M is 7
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountOccurence(char Name[],char Value)
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
			if(arr[i]==Value)
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
	char Value='\0';
	char Name[30]={'\0'};
	
	printf("Enter File Name :");     
	scanf("%s",&Name);
	
	printf("Enter Character:");     
	scanf(" %c",&Value);
	
	iRet=CountOccurence(Name,Value);
	
	printf("Number of Occurance :%d",iRet);
	
} 