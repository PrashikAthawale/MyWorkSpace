#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Pattern
//Input:-Integer
//Output:-void
//Description:-Accept number from user and display below pattern. 
//Author:-Prashik Athawale
//Date:-12 August 2020
//////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=1;
	int a=1;
	int iColA=iCol;
	int iAns=1;
	
	for(i=1;i<=iRow;i++)
	{
		iAns=j*i;
		
		if(iAns%a==0)
		{
			iAns=a;
		}
		for(j=iAns;j<=iColA;j++)
		{
				printf("%d\t",j);
				
		}a++;
		iColA=iColA+1 ;
		
			printf("\n");

	
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}