/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Index
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO.

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88 
Output : 3 

Input : N : 6 
NO: 93 
Elements : 85 66 3 66 93 88 
Output : 4 

Input : N : 6 
NO: 12 
Elements : 85 11 3 15 11 111 
Output : -1

 */
 
#include<stdio.h>
#include<stdlib.h>


int Index(int arr[],int iNo,int iValue)
{
	
	int iCnt=0;
	int ifeq=0;
	
	for(iCnt=iNo-1;iCnt>=0;iCnt--)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if((arr[iCnt])==iValue)
		{
			return iCnt;
		}
		
	}
	return -1;
}


int main()
{
	int iValue=0;
	int iNo=0;
	int iRet=0;
	int i=0;
	int *ptr=NULL;
	
	printf("Enter the Value of N :");
	scanf("%d",&iValue);
	
	
	printf("Enter the No :");
	scanf("%d",&iNo);
	
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
	
	iRet=Index(ptr,iValue,iNo);
	
	printf("Index of Last occurrence of %d :%d",iNo,iRet);


	
	return 0;
}