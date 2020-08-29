/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DifferenceFreq
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user check whether that numbers contains 11 in it or not. 

Input : N : 6 
Elements : 85 66 11 80 93 88 
Output : 11 is present 

Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 11 is absent

 */
 
#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0

typedef int Bool;


Bool DifferenceFreq(int arr[],int iNo)
{
	
	Bool iCnt=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if(arr[iCnt]==11)
		{
			return True;
		}
		
	} return False;
}


int main()
{
	Bool iValue=0;
	Bool iRet=0;
	Bool i=0;
	Bool *ptr=NULL;
	
	printf("Enter the Value of N :");
	scanf("%d",&iValue);
	
	if(iValue==0)
	{
		printf("Error :Enter Valid Input");
		return -1;
	}

	ptr=(Bool*)malloc(sizeof(Bool)*iValue);
	
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
	
	printf("Output: ");
	
	if(iRet==True)
	{
		printf("11 is Present");
	}
	else
	{
		printf("11 is not Present");
	}

	
	return 0;
}