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
         H e l l o 
         H e l l o 
         H e l l o
		 H e l l o
*/
import java.lang.*;
import java.util.*;

class Pattern
{
	void Display(String str)
	{
		
		for(int i=0;i<str.length();i++)
		{
			for(int j=0;j<str.length();j++)
			{
				System.out.print(str.charAt(j)+"\t");
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