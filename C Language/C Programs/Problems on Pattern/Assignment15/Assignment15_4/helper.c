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
	int iAns=0;
	
	if(iRow<0||iCol<0)
	{
		
		iRow=-iRow;
		iCol=-iCol;
	}
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
			
		}
		
		printf("\n");
		
	}
	
	
}
