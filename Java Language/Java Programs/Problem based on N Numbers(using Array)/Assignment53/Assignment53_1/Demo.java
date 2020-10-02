/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Summation
//Input:-Integer 
//Output:-Integer 
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write Java program which accept N numbers from user and return 
difference between summation of even elements and summation of 
odd elements. 

Input : N : 6 
Elements : 85 66 3 80 93 88 
Output : 53 (234 - 181)
*/

import java.lang.*;
import java.util.*;


class Difference
{
	
	int Summation(int arr[],int iSize)
	{
		int i=0;
		int iEven=0;
		int iOdd=0;
		
		for(i=0;i<iSize;i++)
		{
			
			if((arr[i]%2)==0)
			{
				iEven=iEven+arr[i];
			}
			if((arr[i]%2)!=0)
			{
				iOdd=iOdd+arr[i];
			}
			
		}
		return iEven-iOdd;
				
	}
	
}


class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter Number:");
		Scanner sobj=new Scanner(System.in);
		int iSize=sobj.nextInt();
		
		int arr[]=new int[iSize];
		
		int i=0;
		
		System.out.println("Enter Input Number ");
		for(i=0;i<iSize;i++)
		{
			arr[i]=sobj.nextInt();
		}
			
		Difference dobj=new Difference();
		
		int iRet=0;
		iRet=dobj.Summation(arr,iSize);
		System.out.println("Difference is :"+iRet);
	}
	
	
}