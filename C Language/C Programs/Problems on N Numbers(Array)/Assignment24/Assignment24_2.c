/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Smallest
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user and return the smallest number. 

Input : N : 6 
Elements : 85 66 3 66 93 88 
Output : 3

 */
 
#include<stdio.h>
#include<stdlib.h>


int Smallest(int arr[],int iNo)
{
	
	int iCnt=0;
	int iMin=arr[0];

	for(iCnt=1;iCnt<iNo;iCnt++)
	{	
		
		if(arr[iCnt]<iMin)
		{
			iMin=arr[iCnt];
		}
	}
	
	return iMin;	
}


int main()
{
	int iNo=0;
	int iRet=0;
	int i=0;
	int *ptr=NULL;
	
	printf("Enter the No :");
	scanf("%d",&iNo);
	
	if(iNo==0)
	{
		printf("Error :Enter Valid Input");
		return -1;
	}
	
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
	
	iRet=Smallest(ptr,iNo);
	
	printf("Smallest Number is : %d",iRet);
	
	return 0;
}