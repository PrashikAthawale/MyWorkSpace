/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-String 
//Output:-void
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a java program which accept string from user and display 
it in reverse order. 

Input : MarvellouS 
Output : SuollevraM
*/

import java.lang.*;
import java.util.*;

class Reverse
{
	
	void Display(String Str)
	{
		int i=Str.length();
		i--;
		int j=0;
		
		char temp[]=new char[i+1];
		
			
		while(i>=0)
		{
				temp[j]=Str.charAt(i);
				i--;
				j++;
			 
		}
			System.out.println(temp);
			
	}
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter the String :");
		Scanner sobj=new Scanner(System.in);
		String Str=sobj.nextLine();
			
		Reverse obj=new Reverse();
		
		obj.Display(Str);
		
		
	}
	
}


