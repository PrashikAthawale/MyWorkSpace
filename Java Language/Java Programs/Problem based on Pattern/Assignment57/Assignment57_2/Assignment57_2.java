/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer  
//Output:-void
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write Java program which accept number of rows and number of columns 
from user and display below pattern. 

Input : iRow = 4 iCol = 4 
Output : A B C D 
		 a b c d 
         A B C D 
         a b c d
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void Display(int iRow,int iCol)
	{
		char large='A';
		char small='B';
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((i%2)==0)
				{
					System.out.print(large+"\t");
				}
				else
				{
					System.out.print(iSmall+"\t");
				}
				
			}
				System.out.println();
			
		}
		
	}
	
}

class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter Number of Rows :");
		int iRow=sobj.nextInt();
		
		System.out.print("Enter Number of Columns :");
		int iCol=sobj.nextInt();
		
		Pattern obj=new Pattern();
		
		obj.Display(iRow,iCol);
			
	}
}