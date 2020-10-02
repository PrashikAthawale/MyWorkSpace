/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Occurance
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write java program which accept N numbers from user and accept 
one another number as NO , return index of last occurrence of that NO. 

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88 
Output : 3 

Input : N : 6 
NO: 93 
Elements : 85 66 3 66 93 88 
Output : 4 

Input : N : 6 
NO: 12 
Elements : 85 11 3 15 11 111 
Output : -1
*/

import java.lang.*;
import java.util.*;


class Last
{
	int Occurance(int Arr[],int iNo,int iSize)
	{
		int iLast=0;
		for(int i=0;i<iSize;i++)
		{
			if(Arr[i]==iNo)
			{
				iLast=i;
			}
			if(iLast==i)
			{
				return iLast;
			}
			else
			{
				return -1;
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
		
		System.out.println("Enter Number:");
		int iNo=sobj.nextInt();
		
		int Arr[]=new int[iSize];
		
		System.out.println("Enter Input Numbers :");
		for(int i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Last obj=new Last();
		
		int iret=0;
		iret=obj.Occurance(Arr,iNo,iSize);
		
		System.out.print("Last Occurance index is :"+iret);
		
	}
	
}