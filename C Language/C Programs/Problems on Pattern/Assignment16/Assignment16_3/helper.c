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
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2!=0)
		{
			for(j=0;j<iCol;j++)
			{
			
				printf("%C\t",97+j);
				
			}
				printf("\n");
		}
		
		else
		{
			for(k=1;k<=iCol;k++)
			{
					printf("%d\t",k);
					
			}
				printf("\n");
	 }
		
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}