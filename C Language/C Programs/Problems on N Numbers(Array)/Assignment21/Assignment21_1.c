/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Difference 
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-18 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements. 

Input N  : 6 
Elements : 85 66 3 80 93 88 
Output   : 53 (234 - 181)
 */
 
#include<stdio.h>
#include<stdlib.h>
 
#define ERRMEMORY -1
#define ERRSIZE -2

 int Difference(int arr[],int iNo)
 {
	 int i=0;
	 int iEven=0;
	 int iOdd=0;
	 
	if(arr == NULL)
    {
        return ERRMEMORY;
    }
    if(iNo <= 0)
    {
        return ERRSIZE;
    }
    
	 for(i=0;i<iNo;i++)
	 {
		 if((arr[i])%2==0)
		 {
			 
			 iEven=iEven+arr[i];
		 }
		 else
		 {
			 iOdd=iOdd+arr[i];
		 }
	 }
	 
	 return iEven-iOdd;
	 
	 
 }
 
 
 
int main()
{
	int iValue=0;
	int iRet=0;
	int iCnt=0;
	int *ptr=NULL;
	
	printf("Enter the value of N :");
	scanf("%d",&iValue);
	
	ptr= (int*)malloc(sizeof(int)*iValue);
	
	if(ptr==NULL)
	{
		printf("Error : Unable to allocate memory\n");
        return -1;
	}
	
	printf("Enter the Numbers :\n");
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);		
	}
	
	iRet=Difference(ptr,iValue);
	
	if(iRet==ERRMEMORY)
	{
	   printf("Error : Invalid Memory Address\n");
	}
	else if(iRet==ERRSIZE)
	{
		printf("Error: Invalid Size\n");
	}
	else
	{
	
		printf("Difference is :%d\n",iRet);
	}
	
	return 0;
}
