//structure in structure
#include<stdio.h>
//First way
struct Demo
{
	int i;
	int j;
};
struct Hello
{
	float f;
	int no;
	
	struct Demo dobj;
};

int main()
{
	struct Hello hobj;
	hobj.f=10.11;
	hobj.no=11;
	hobj.dobj.i=21;
	hobj.dobj.j=21;
	
	return 0;
}

//Second way

#include<stdio.h>
//Second way
struct Hello
{
	float f;
	int no;

struct Demo
{
	int i;
	int j;
}dobj;
};


