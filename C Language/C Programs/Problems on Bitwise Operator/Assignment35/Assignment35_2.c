/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountBit
//Input:-Integer
//Output:-Integer
//Author:-Prashik Athawale
//Date:-6th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers. 

Input : 10 15 (1010 1111) 
Output : 2 4

*/

#include<stdio.h>

int DisplayBit(int iNo1,int iNo2)
{

	int iMask=0x00000001;
	int i=1; 
	int iResult=0;
	int iResult1=0;
	
	while(i<=32)
	{
		iResult=iNo1&iMask;
		iResult1=iNo2&iMask;
		
		if(iResult==iMask&&iResult1==iMask)
		{
			printf("%d\t",i);
		}
		
		iMask=iMask<<1;
		
		i++;	
	}
	

	
}

int main()
{
	int iNo1=0;
    int iNo2=0;
	int iPos=0;
	
	printf("Enter the Number :");
	scanf("%d",&iNo1);
	
	printf("Enter the Number :");
	scanf("%d",&iNo2);
	
	DisplayBit(iNo1,iNo2);
}