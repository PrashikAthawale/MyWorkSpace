/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer 
//Output:-void
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write java program which accept N numbers from user and accept 
Range, Display all elements from that range 

Input : N : 6 
 Start: 60 
 
 End : 90 
Elements : 85 66 3 76 93 88 
Output : 85 66 76 88 

Input : N : 6 
 Start: 30 
 
 End : 50 
Elements : 85 66 3 76 93 88 
Output :
*/

import java.lang.*;
import java.util.*;


class Range
{
	void Display(int Arr[],int iSize,int iStart,int iEnd)
	{
		
		for(int i=0;i<iSize;i++)
		{
			if((Arr[i]>=iStart)&& (Arr[i]<=iEnd))
			{
				System.out.print(Arr[i]+" ");
			}
		}
		
	}	
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter Number of Elements:");
		Scanner sobj=new Scanner(System.in);
		int iSize=sobj.nextInt();
		
		int Arr[]=new int[iSize];
		
		System.out.println("Enter Input Numbers :");
		for(int i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
				
		System.out.println("Enter Starting point of Range:");
		int iStart=sobj.nextInt();
		
		System.out.println("Enter Ending point of Range:");
		int iEnd=sobj.nextInt();
		
		Range robj=new Range();
		
		robj.Display(Arr,iSize,iStart,iEnd);
		
	}
	
}