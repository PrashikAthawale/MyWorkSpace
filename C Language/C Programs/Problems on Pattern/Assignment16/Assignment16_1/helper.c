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
			for(j=1;j<=iCol;j++)
			{
				for(k=1;k<=9;k++)
				{
					printf("%d\t",k);
			
					if(k%iCol==0)
					{
						printf("\n");
					}
				}
			
			}
		}
		
	
}
