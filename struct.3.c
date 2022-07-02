#include<stdio.h>

struct Demo
{
	int i;
	int j;
	struct Demo obj; //Error to not make
};


int main()
{
	struct Demo dobj;
	return 0;
}

//
#include<stdio.h>

struct Demo
{
	int i;
	int j;
	struct Demo *obj; // No Error to 
};


int main()
{
	struct Demo dobj;
	return 0;
}
