/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CalculateBill
//Input:-Integer
//Output:-Float
//Author:-Prashik Athawale
//Date:-18 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-  Design application for income tax department to calculate tax 
amount. According to the income tax department there is no 
income tax for the income less than 5 lakhs. 
If income is in between 5 to 10 lakhs then there will be 10% tax. 
If income is in between 10 to 20 lakhs then there will be 20% tax. 
And for more than 20 lakhs there will be 30% tax. 
We have to accept gross income from user and return the tax amount. 


Input : 600000    Output : 10000 (0 + 10000) 
Input : 450000    Output : 0 
Input : 1200000   Output : 90000 (0 + 50000 + 40000)
 
 */
#include<stdio.h>

float IncomeTax(int iAmount) 
{

	float fPercentage=0;
	
	if(iAmount<500000)
	{
		return 0;
	}
	else if(iAmount>500000&&iAmount>500)
	{
		fPercentage=(iAmount/100)*10;
		
		iAmount=iAmount-fPercentage;
		
		return iAmount;
	}
	else 
	{
		fPercentage=(iAmount/100)*15;
		
		iAmount=iAmount-fPercentage;
		
		return iAmount;
	}
	
	

	
}

int main()
{
	int iValue=0;
	float fRet=0;
	
	printf("Enter your Amount :");
	scanf("%d",&iValue);
	
	fRet= IncomeTax(iValue);
	
	printf("Amount to be paid is %f",fRet);
}

























 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 