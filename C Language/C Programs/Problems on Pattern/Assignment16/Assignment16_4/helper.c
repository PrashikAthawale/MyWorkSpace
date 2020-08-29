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
	int j=0;
	int k=0;
	
	if(iRow<0||iCol<0)
	{
		iRow=-iRow;
		iCol=-iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=iCol;j++)
			{
			
				printf("%d\t",j);
				
			}
				printf("\n");
		}
		
		else
		{
			for(k=1;k<=iCol;k++)
			{
					printf("%d\t",-k);
					
			}
				printf("\n");
	 }
		
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}