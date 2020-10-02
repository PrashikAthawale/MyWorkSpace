/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Frequency
//Input:-Integer  
//Output:-void
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write Java program which accept number of rows and number of columns 
from user and display below pattern. 

Input : iRow = 4 iCol = 4 
Output : A B C D 
 A B C D 
 A B C D 
 A B C D
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	int Display(int iRow,int iCol)
	{
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.println(65+j);
				
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
		
		System.out.println("Enter Number of Rows :");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter Number of Columns :");
		int iCol=sobj.nextInt();
		
		Pattern obj=new Pattern();
		
		obj.Pattern(iRow,iCol);
			
	}
}