 
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

	
	if(iRow==iCol)
	{
		
		for(i=1;i<=iRow;i++)
		{
				for(j=1;j<=iCol;j++)
				{
					if(i==1||j==1||i==iRow||j==iCol||i+j==iCol+1)
					{
						printf("%d\t",j);
					}
					else if(i==j)
					{
						printf("%d\t",j);
					}
					else
					{
						printf("\t");
					}
				}printf("\n");
		}	
	}
		
	
	else
	{
		printf("Error:Enter Square Matrix");  
	}
		
		
}
	
	
	
	
	
	
	
	