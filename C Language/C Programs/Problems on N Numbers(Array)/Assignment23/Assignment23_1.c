/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkNO
//Input:-Integer 
//Output:-Bool
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and accept one another number as NO , 
check whether NO is present or not. 

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88 
Output : TRUE 

Input : N : 6 
NO: 12 
Elements : 85 11 3 15 11 111 
Output : FALSE

 */
 
#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0

typedef int Bool;


Bool ChkNO(int arr[],int iNo,int iValue)
{
	
	Bool iCnt=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		
		if(arr[iCnt]==iValue)
		{
			return True;
		}
		
	} return False;
}


int main()
{
	Bool iValue=0;
	Bool iNo=0;
	Bool iRet=0;
	Bool i=0;
	Bool *ptr=NULL;
	
	printf("Enter the Value of N :");
	scanf("%d",&iValue);
	
	
	printf("Enter the No. :");
	scanf("%d",&iNo);
	
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
	
	printf("Enter the Elements :\n");
	
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=ChkNO(ptr,iValue,iNo);
	
	printf("Output: ");
	
	if(iRet==True)
	{
		printf("%d is Present",iNo);
	}
	else
	{
		printf("%d is not Present",iNo);
	}

	
	return 0;
}