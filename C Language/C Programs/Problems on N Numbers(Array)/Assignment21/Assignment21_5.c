/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer 
//Output:-Void
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept N numbers from user and display all such elements which are 
multiples of 11. 

Input : N : 6 
Elements : 85 66 3 55 93 88 
Output : 66 55 88

 */
 
#include<stdio.h>
#include<stdlib.h>


void Display(int arr[],int iNo)
{
	
	int iCnt=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]<0)
		{
			arr[iCnt]=-arr[iCnt];
		}
		if(arr[iCnt]==0)
		{
			return;
		}
		if((arr[iCnt]%11)==0)
		{
			printf("%d\t",arr[iCnt]);
		}
	}
	
}


int main()
{
	int iValue=0;
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
	
	printf("Output: ");
	
	Display(ptr,iValue);
	


	
	return 0;
}