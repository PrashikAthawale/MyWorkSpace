/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Odd
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write java program which accept N numbers from user and return 
product of all odd elements. 

Input : N : 6 
 
Elements : 15 66 3 70 10 88 
Output : 45 

Input : N : 6 
 
Elements : 44 66 72 70 10 88 
Output : 0
*/

import java.lang.*;
import java.util.*;


class Product
{
	int Odd(int Arr[],int iSize)
	{
		int iAns=1;
		
		for(int i=0;i<iSize;i++)
		{
			if(Arr[i]%2!=0)
		{
				iAns=iAns*Arr[i];
			}
		}
			return iAns;
		
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
		
		Product obj=new Product();
		
		int iret=0;
		iret= obj.Odd(Arr,iSize);
		System.out.println("Product of Odd Numbers is :"+iret);
	}
	
}