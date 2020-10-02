/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Present
//Input:-String 
//Output:-boolean
//Author:-Prashik Athawale
//Date:-1 October 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a java program which accept string from user and check 
whether it contains vowels in it or not. 

Input : marvellous 
Output : TRUE 

Input : Demo
Output : TRUE 

Input : xyz 
Output : FALSE
*/

import java.lang.*;
import java.util.*;

class Vowels
{
	int iCnt=0;
	int i=0;
	
	boolean Present(String Str)
	{
		int i=0;
		int iLarge=0;
		int iSmall=0;
		
		while(i!=Str.length())
		{
			if(Str.charAt(i)=='a'||Str.charAt(i)=='e'||Str.charAt(i)=='i'||Str.charAt(i)=='o'||Str.charAt(i)=='u'||Str.charAt(i)=='A'||Str.charAt(i)=='E'||Str.charAt(i)=='I'||Str.charAt(i)=='O'||Str.charAt(i)=='U')
			{
				return true;
			}
			
			i++;
		}
			return false;
		
	}
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter the String :");
		Scanner sobj=new Scanner(System.in);
		String Str=sobj.nextLine();
			
		Vowels obj=new Vowels();
		
		boolean bRet=false;
		bRet=obj.Present(Str);
		
		System.out.println(bRet);
		
	}
	
	
}