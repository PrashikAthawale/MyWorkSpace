/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Display
//Input:-Integer 
//Output:-Void 
//Author:-Prashik Athawale
//Date:-30 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a java program which accept number from user and return the 
count of even digits. 

Input : 2395 
Output : 1 

Input : 1018 
Output : 2 

Input : -1018 
Output : 2 

Input : 8462 
Output : 4
*/
import java.lang.*;
import java.util.*;


class Count
{
	
	int Even(int iNo)
	{
		
		while(iNo!=0)
		{
			int iDigit=iNo%10;
			
			if((iDigit%2)==0)
			{
				int iCnt++;
			}
		}
			return iCnt;
			
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
		iRet=cobj.Even(iNo);
		
		System.out.println("Number of Even Digits :"+iRet);
		
	}
	
}