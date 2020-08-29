/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DifferenceFreq
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and return frequency of 11 form it. 

Input : N : 6 
Elements : 85 66 3 15 93 88 
Output : 0
 
Input : N : 6 
Elements : 85 11 3 15 11 111 
Output : 2

 */
 
#include<stdio.h>
#include<stdlib.h>


int DifferenceFreq(int arr[],int iNo)
{
	
	int iCnt=0;
	int ifeq=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if((arr[iCnt])==11)
		{
			ifeq++;
		}
		
	}
	return ifeq;
}


int main()
{
	int iValue=0;
	int iRet=0;
	int i=0;
	int *ptr=NULL;
	
	printf("Enter the Value of N :");
	scanf("%d",&iValue);
	
	if(iValue==0)
	{
		printf("Error :Enter Valid Input");
		return -1;
	}

	ptr=(int*)malloc(sizeof(int)*iValue);
	
	if(ptr==NULL)
	{
		
		printf("Error : Unable to allocate memory\n");
        return -1;
	}
	
	printf("Enter the Values :\n");
	
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=DifferenceFreq(ptr,iValue);
	
	printf("Frequency of 11:-%d",iRet);


	
	return 0;
}