/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Multiplication
//Input:-Integer 
//Output:-Integer 
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits. 

Input : 2395 
Output : -15 (2 - 17) 

Input : 1018 
Output : 6 (8 - 2) 

Input : 8440 
Output : 16 (16 - 0) 

Input : 5733 
Output : -18 (0 - 18)
*/
import java.lang.*;
import java.util.*;


class Count
{
	
	int Multiplication(int iNo)
	{
		int iAns=1;
		
		
		while(iNo!=0)
		{
			int iDigit=iNo%10;
			
			if(iDigit==0)
			{
				iDigit=1;
			}
			
			iAns=iAns*iDigit;
			
			iNo=iNo/10;
		}
			return iAns;
	}
	
}

class Demo
{
	public static void main(String arg[])
	{
		System.out.println("Enter Number :");
		Scanner sobj=new Scanner(System.in);
		int iNo=sobj.nextInt();
		
		Count cobj=new Count();
		
		int iRet=0;
		iRet=cobj.Multiplication(iNo);
		
		System.out.println("Multiplication of Digits are :"+iRet);
		
	}
	
}