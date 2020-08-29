#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkNum
//Input:-Integer
//Output:-BOOL
//Description:- It is used to  accept one number from  user and check whether that
//number is greater than 100 or not.
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

BOOL ChkNum(int iNo)
{
	     
		 if(iNo==100){
			 
			return EQUAL;
		 }
		 else if(iNo>100){
			 
			return TRUE;
		 }
		 
		 else{
			 
			 return FALSE;
		 }
		
		
}

