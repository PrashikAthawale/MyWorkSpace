/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Largest
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user and return the largest number. 

Input : N : 6 
Elements : 85 66 3 66 93 88 
Output : 93

 */
 
#include<stdio.h>
#include<stdlib.h>


int Largest(int arr[],int iNo)
{
	
	int iCnt=0;
	int iMax=arr[0];

	for(iCnt=1;iCnt<iNo;iCnt++)
	{	
		
		if(arr[iCnt]>iMax)
		{
			iMax=arr[iCnt];
		}
	}
	
	return iMax;	
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
	
	iRet=Largest(ptr,iNo);
	
	printf("Largest Number is : %d",iRet);
	
	return 0;
}