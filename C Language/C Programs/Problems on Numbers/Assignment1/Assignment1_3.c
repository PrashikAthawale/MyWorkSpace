#include<stdio.h>

////////////////////////////////////////////////////////////////
//Author:- Prashik Athawale
//Date:-25 July 2020
//Parameters:- Integer
//Return Value:- Void
//Description:- Program to print 5 to 1 number on screen
////////////////////////////////////////////////////////////////

void Display(){
	
	int i=0;
	for(i=5;i>=1;i--){
		
		printf("%d \n",i);
	}
}

int main(){
	
	Display();
	
	return 0;
}