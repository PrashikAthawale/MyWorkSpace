/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer  
//Output:-void
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write Java program which accept String from user and display 
below pattern. 

Input : Hello 
Output : H e l l o 
         H e l l 
         H e l 
         H e 
         H 
         H e 
         H e l 
         H e l l 
         H e l l 0
*/
import java.lang.*;
import java.util.*;

class Pattern
{
	void Display(String str)
	{
		
		for(int i=str.length();i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				System.out.print(str.charAt(j));
			}
				
			System.out.println();
		}
		for(int i=1;i<str.length();i++)
		{
				for(int j=0;j<=i;j++)
				{
					System.out.print(str.charAt(j));
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
		
		System.out.print("Enter String :");
		String str=sobj.nextLine();
		
		Pattern obj=new Pattern();
		
		obj.Display(str);
		
		
	}
}