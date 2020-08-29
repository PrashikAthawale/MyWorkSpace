#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Pattern
//Input:-Integer
//Output:-void
//Description:-Accept number from user and display below pattern. 
//Author:-Prashik Athawale
//Date:-11 August 2020
//////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow,int iCol)
{
	
	int i=0;
	int j=0;
	int iAns=0;
	
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++){
			
			if(j%2!=0){
				
				printf("*\t");
			}
			else{
				
				printf("#\t");
			}
		}
		
		printf("\n");
		
	}
	
	
}
