# include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:- Accept one Number from user from user and print number  
//of "*" on screen
////////////////////////////////////////////////////////////////


void Accept(int iNo){
	
	
	int icnt=0;
	for(icnt=1; icnt<=iNo;icnt++){
		
		printf("*");
	}
}

int main(){
	
	int ivalue=0;
	ivalue=5;
	Accept(ivalue);
	
}