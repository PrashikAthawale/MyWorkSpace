
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
	
	if(iRow==iCol)
	{
	
		for(i=iRow;i>=1;i--)
		{
			if(i==iRow)
			{
				for(j=1;j<=iCol;j++)
				{
					printf("*\t");
				}
				printf("\n");
			}
			
			else
			{	
			  for(k=1;k<=iCol;k++)
				{
				  if(k<=i)
				  {
					printf("*\t");
				  }	
					
				  else
				  {
					printf("#\t");
				  }
				} printf("\n");
			}
			
		} 
	}
	
	else
	{
		printf("Error: Enter Square Matrix");
	}

			
}
	
	
	
	
	
	
	
	