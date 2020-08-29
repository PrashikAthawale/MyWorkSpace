/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-OddMul
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and return product of all odd elements. 

Input : N : 6  
Elements : 15 66 3 70 10 88 
Output : 45 

Input : N : 6  
Elements : 44 66 72 70 10 88 
Output : 0
 */
 
#include<stdio.h>
#include<stdlib.h>


int OddMul(int arr[],int iNo)
{
	
	int iCnt=0;
	int iAns=1;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)!=0)
		{
			iAns=iAns*arr[iCnt];
		}
	}
	
	return iAns;	
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
	
	iRet=OddMul(ptr,iNo);
	
	printf("Multiplication of Odd Numbers : %d",iRet);
	
	return 0;
}