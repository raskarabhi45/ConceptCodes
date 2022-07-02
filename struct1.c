//structure declaration
#include<stdio.h>

struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	double dValue;
};

int main()
{
	//structure object creation
	struct Demo obj;
	
	//Object initialization
	obj.iNo=11;
	obj.fValue=10.11;
	obj.iValue=21;
	obj.dValue=20.11;


printf("%d\n",obj.iValue); //21
printf("%d\n",sizeof(obj)); // 24 because of padding
return 0;

}
