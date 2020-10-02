/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Present
//Input:-Integer 
//Output:-boolean
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write java program which accept N numbers from user and accept 
one another number as NO,check whether NO is present or not. 

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88 
Output : TRUE 

Input : N : 6 
NO: 12 
Elements : 85 11 3 15 11 111 
Output : FALSE
*/
import java.lang.*;
import java.util.*;


class Check
{
	boolean Present(int Arr[],int iNo,int iSize)
	{
		
		for(int i=0;i<iSize;i++)
		{
			if(Arr[i]==iNo)
			{
				return true;
			}
		}
			return false;	
	}	
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter N Number :");
		Scanner sobj=new Scanner(System.in);
		int iSize=sobj.nextInt();
		
		System.out.println("Enter No:");
		int iNo=sobj.nextInt();
		
		int Arr[]=new int[iSize];
		
		System.out.println("Enter Input Numbers :");
		for(int i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Check cobj=new Check();
		
		boolean iret=false;
		iret=cobj.Present(Arr,iNo,iSize);
		
		System.out.println(iret);
		
	}
	
}