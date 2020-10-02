/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Small
//Input:-String 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a java program which accept string from user and count 
number of small characters. 

Input : Marvellous 
Output : 9
*/

import java.lang.*;
import java.util.*;

class Count
{
	int iCnt=0;
	int i=0;
	
	int Small(String Str)
	{
		int i=0;
		int iCnt=0;
		
		while(i!=Str.length())
		{
			if((Str.charAt(i)>='a')&& (Str.charAt(i)<='z'))
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
		iRet=cobj.Small(Str);
		
		System.out.println("Small Letters are:"+iRet);
		
	}
	
	
}