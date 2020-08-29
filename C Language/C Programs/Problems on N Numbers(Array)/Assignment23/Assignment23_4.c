/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DisplayRange
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and accept Range, Display all elements from 
that range 

1.Input : N : 6 
 Start: 60 
 
 End : 90 
 
Elements : 85 66 3 76 93 88 

Output : 66 76 88
 
 
2.Input : N : 6 
 Start: 30 
 
 End : 50 
 
 Elements : 85 66 3 76 93 88 
Output :No Number Found between Range

 */
 
#include<stdio.h>
#include<stdlib.h>


int DisplayRange(int arr[],int iNo,int iStart,int iEnd)
{
	
	int iCnt=0;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]>iStart&&arr[iCnt]<iEnd)
		{
			printf("%d\t",arr[iCnt]);
		}
		
	}
	
	if(arr[iCnt]<=iStart||arr[iCnt]>=iEnd)
		{
			printf("No Number Found between Range");
		}
		
}


int main()
{
	int iNo=0;
	int iRet=0;
	int i=0;
	int iStart=0;
	int iEnd=0;
	int *ptr=NULL;
	
	printf("Enter the No :");
	scanf("%d",&iNo);
	
	if(iNo==0)
	{
		printf("Error :Enter Valid Input");
		return -1;
	}

	printf("Enter Start :");
	scanf("%d",&iStart);
	
	printf("Enter End :");
	scanf("%d",&iEnd);
	
	
	
	 ptr=(int*)malloc(sizeof(int)*iNo);
	
	if(ptr==NULL)
	{
		
		printf("Error : Unable to allocate memory\n");
        return -1;
	}
	
	printf("Enter the Values :\n");
	
	for(i=0;i<iNo;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=DisplayRange(ptr,iNo,iStart,iEnd);
	
	return 0;
}