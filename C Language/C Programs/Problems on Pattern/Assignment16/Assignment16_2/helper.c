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
			for(j=2;j<=(iCol*2);j++)
			{
			
				if(j%2==0)
				{
					printf("%d\t",j);
				}
			}
				printf("\n");
		}
		
		else
		{
			for(k=1;(k<=iCol*2);k++)
			{
				if(k%2!=0)
				{
					printf("%d\t",k);
				}	
			}
				printf("\n");
	 }
		
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}