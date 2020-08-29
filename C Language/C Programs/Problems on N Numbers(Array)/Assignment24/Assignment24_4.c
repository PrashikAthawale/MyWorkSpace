/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display 
//Input:-Integer 
//Output:-Void
//Author:-Prashik Athawale
//Date:-21 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-  Accept N numbers from user and display all such numbers which contains 
3 digits in it. 

Input : N : 6 
Elements : 8225 665 3 76 953 858 
Output : 665 953 858

 */
 
#include<stdio.h>
#include<stdlib.h>


void Display(int arr[],int iNo)
{
	
	int iCnt=0;
	int iCount=0;
	int iDigit=0;
	int iAns=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{	
		
		iAns=arr[iCnt];
		iCount=0;
		
		while(arr[iCnt]!=0)
		{
			
			iDigit=arr[iCnt]%10;
			if(iDigit>=0)
			{
				iCount++;
			}
				
			arr[iCnt]=arr[iCnt]/10;
			
		}
			
			if(iCount==3)
			{
				printf(" output :%d\t",iAns);
			}
	}
		
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
	
	Display(ptr,iNo);
	
	
	return 0;
}