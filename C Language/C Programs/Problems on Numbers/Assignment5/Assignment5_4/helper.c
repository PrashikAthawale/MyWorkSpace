#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Mul
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept three numbers and print its multiplication.
//Author:-Prashik Athawale
//Date:-5 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Mul(int iNo1,int iNo2,int iNo3)
{	
		int iAns=0;
	     
		 if((iNo1||iNo2)==0){
			 
			 iAns=iNo3;
			return iAns;
		 }
		
		 if((iNo1||iNo2||iNo3)==0){
			 
			return 0;
		 }
		  if((iNo1||iNo3)==0){
			 
			 iAns=iNo2;
			return iAns;
		 }
		 
		 if((iNo2||iNo3)==0){
			 
			 iAns=iNo1;
			return iAns;
		 }
		 if((iNo2)==0){
			 
			 iAns=iNo1*iNo3;
			return iAns;
		 }
		 
		 if((iNo1)==0){
			 
			 iAns=iNo2*iNo3;
			return iAns;
		 }
		 
		 if((iNo3)==0){
			 
			 iAns=iNo1*iNo2;
			return iAns;
		 }
		 
		  if((iNo1||iNo2||iNo3)!=0){
			 
			 iAns=iNo1*iNo2*iNo3;
			return iAns;
		 }
}
