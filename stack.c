#include<stdio.h>
//Header (Used in company)
//////////////////////////////////////
//
//Function name: Addition
//Input:         Two integers
//Output:        Integer
//Description:   It is used to perform addition
//Author:        Abhishek Narendra Raskar
//Date:           05/03/2022
//
///////////////////////////////////////
//
int Addition(int iNo1,int iNo2)
{
	auto int iAns=0;
	iAns=iNo1+iNo2;
	
	return iAns;
}

//////
//Entry point function
///////
int main()
{
	auto int iValue1=0,iValue2=0;
	auto int iRet=0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter seond number\n");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("Addition is : %d\n",iRet);
	return 0;
}
