/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Capital
//Input:-String 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-.Write a Java program which accept string from user and count 
number of capital characters. 

Input : Marvellous Multi OS 
Output : 4
*/

import java.lang.*;
import java.util.*;

class Count
{
	int iCnt=0;
	int i=0;
	
	int Capital(String Str)
	{
		int i=0;
		int iCnt=0;
		
		while(i!=Str.length())
		{
			if((Str.charAt(i)>='A')&& (Str.charAt(i)<='Z'))
			{
				iCnt++;
			}
			i++;
		}
			return iCnt;
		
	}
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter the String :");
		Scanner sobj=new Scanner(System.in);
		String Str=sobj.nextLine();
			
		Count cobj=new Count();
		int iRet=0;
		iRet=cobj.Capital(Str);
		
		System.out.println("Capital Letters are:"+iRet);
		
	}
	
	
}