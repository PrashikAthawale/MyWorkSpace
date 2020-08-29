/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-EvenFreq
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user and return frequency of even numbers. 

Input : N : 6 
Elements : 85 66 3 80 93 88 
Output : 3

 */
 
#include<stdio.h>
#include<stdlib.h>


int EvenFreq(int arr[],int iNo)
{
	
	int iCnt=0;
	int iFeq=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if((arr[iCnt]%2)==0)
		{
			iFeq++;
		}
	}
	return iFeq;
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
	
	iRet=EvenFreq(ptr,iValue);
	
	printf(" Frequency of Even Numbers :%d",iRet);


	
	return 0;
}