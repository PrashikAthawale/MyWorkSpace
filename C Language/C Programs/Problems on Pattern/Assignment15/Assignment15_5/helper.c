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
	
	
	
	if(iRow<0||iCol<0)
	{
		
		iRow=-iRow;
		iCol=-iCol;
	}
	
		for(j=1;j<=(iCol*iRow);j++)
		{
			
			printf("%d\t",j);
			
			if(j%iCol==0)
			{
					printf("\n");
			}
			
			
		}
		
		
	
}
