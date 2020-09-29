/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CalculateBill
//Input:-Integer
//Output:-Float
//Author:-Prashik Athawale
//Date:-18 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Design application for hotel. According to the management 
team of hotel they are giving discount on total bill amount of 
customer.If bill bill amount is less than 500 then there is no discount , if 
bill amount is less than 1500 and more than 500 they give 10% 
discount,and if the bill amount is more than 1500 then they give 15% 
discount.Our application should accept total bill amount and depends on 
the discount policy we have to return the amount after applying 
discount. 
 
Input : 1200   Output : 1080 
Input : 290    Output : 290 
Input : 3700   Output : 3145
 
 */
#include<stdio.h>

float CalculateBill(int iAmount) 
{

	float fPercentage=0;
	
	if(iAmount<500)
	{
		return iAmount;
	}
	else if(iAmount<1500&&iAmount>500)
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
	int fValue=0;
	float fRet=0;
	
	printf("Enter your Amount :");
	scanf("%d",&fValue);
	
	fRet= CalculateBill(fValue);
	
	printf("Amount to be paid is %f",fRet);
}


