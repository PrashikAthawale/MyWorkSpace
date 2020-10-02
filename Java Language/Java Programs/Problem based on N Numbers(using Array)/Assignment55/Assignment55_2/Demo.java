/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Occurance
//Input:-Integer 
//Output:-Integer
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write java program which accept N numbers from user and accept 
one another number as NO , return index of first occurrence of that 
NO. 

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88 
Output : 1 

Input : N : 6 
NO: 12 
Elements : 85 11 3 15 11 111 
Output : -1
*/
import java.lang.*;
import java.util.*;


class First
{
	int Occurance(int Arr[],int iNo,int iSize)
	{
		
		for(int i=0;i<iSize;i++)
		{
			if(Arr[i]==iNo)
			{
				return i;
			}
		}	return -1;
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
		
		First obj=new First();
		
		int iret=0;
		iret=obj.Occurance(Arr,iNo,iSize);
		
		System.out.print("First Occurance index is :"+iret);
		
	}
	
}