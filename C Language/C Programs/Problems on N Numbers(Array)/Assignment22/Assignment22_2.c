/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DifferenceFreq
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user and return difference between frequency of 
even number and odd numbers. 

Input : N : 7 
Elements : 85 66 3 80 93 88 90 
Output : 1 (4 -3)

 */
 
#include<stdio.h>
#include<stdlib.h>


int DifferenceFreq(int arr[],int iNo)
{
	
	int iCnt=0;
	int iEfeq=0;
	int iOfeq=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if((arr[iCnt]%2)==0)
		{
			iEfeq++;
		}
		else
		{
			iOfeq++;
		}
	}
	return iEfeq-iOfeq;
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
	
	printf("Frequency of Even Numbers :%d",iRet);


	
	return 0;
}