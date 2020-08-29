/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-TouristBill
//Input:-Float
//Output:-Float
//Author:-Prashik Athawale
//Date:-18 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- We have to design application for tourist company. 
Tourist company provides cars on rent.Depends on the running of car they apply rent. 
If running is less than 100 kilometres then they charge 25 rupees per kilometre.
And if running is more than 100 kilometres then they apply 15 rupees per kilometre
after 100 kilometres.We have to accept number of kilometres from user and return the estimated rent. 

Input : 73 Output : 1825 
Input : 132 Output : 2980 
Input : 189 Output : 3835
 */
 
#include<stdio.h>

float TouristBill(float fKilometer)
{
	float fAns=0.0;
	float fBans=0.0;
	
	if(fKilometer<100)
	{
		return fKilometer*25;
	}
	
	else
	{
		fKilometer=fKilometer-100;
		
		fAns=fKilometer*15;
		fBans=100*25;
		
		return fAns+fBans;
	}


}


int main()
{
	float fValue=0.0;
	float fRet=0.0;
	
	printf("Enter the Kilometer :");
	scanf("%f",&fValue);
	
	fRet=TouristBill(fValue);
	printf(" You have to Pay :%f",fRet);
	

} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 