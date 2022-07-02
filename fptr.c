#include<stdio.h>


int Addition(int no1,int no2)
{
	int Ans=0;
	Ans=no1+no2;
	return Ans;
}
int main()
{
	int a=10,b=20;
	int ret=0;
	
	int (*fptr)(int,int);
	
	fptr=Addition;
	printf("Address of addition\n",Addition);
	ret=fptr(a,b);
	
	printf("Addition is %d\n",ret);
	
	return 0;
}

//Function Pointer
//Addition is a function which accepts 2 parameters 1st is integer and 2nd is integer and that function returns integer
//int Addition(int,int); //Function prototype



//int (*fptr)(int,int);  //Function pointer

//fptr is a pointer which  to the function which accepts 2 parameters 1st is integer and 2nd is integer and that function returns integer.

//fptr=Addition;

//ret=fptr(a,b);


















int no=11;

int *p=&no;
