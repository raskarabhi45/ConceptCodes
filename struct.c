#include<stdio.h>

//structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
};

int main()
{
	
	//Structure Object Ceation
  struct Demo obj;
	//Object initialization
	obj.iNo=11;
	obj.iValue=10.11;
	obj.iValue=21;
	
	printf("%d\n",obj.iValue); //21
	printf("%d",sizeof(obj)); //12
	return 0;
}
