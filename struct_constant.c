#include<stdio.h>

struct demo
{
	int i;
	int j
};

int main()
{
	const struct demo obj={11,21};
	
	printf("%d\n",obj.i);
	printf("%d\n",obj.j);
	return 0;
}
