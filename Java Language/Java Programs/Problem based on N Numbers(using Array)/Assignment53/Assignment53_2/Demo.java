/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer 
//Output:-Void 
//Author:-Prashik Athawale
//Date:-27 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write Java program which accept N numbers from user and display 
all such elements which are divisible by 5. 

Input : N : 6 
Elements : 85 66 3 80 93 88 
Output : 85 80
*/
import java.lang.*;
import java.util.*;


class Divisible
{
	
	void Display(int Arr[],int iSize)
	{
		System.out.print("Divisible Numbers are :");
		for(int i=0;i<iSize;i++)
		{
			if((Arr[i]%5)==0)
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
		System.out.println("Enter Number :");
		Scanner sobj=new Scanner(System.in);
		int iSize=sobj.nextInt();
	
		int Arr[]=new int[iSize];
	
		System.out.println("Enter Input Numbers :");
		for(int i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		
		}
	
		Divisible dobj=new Divisible();
	
		dobj.Display(Arr,iSize);
	}
	
}
