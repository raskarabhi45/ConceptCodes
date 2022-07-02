#include<stdio.h>
#pragma pack(1) //To remove padding 
struct Demo
{
	int i;
	char ch;
	float f;
	int j;

};
int main()
{
	printf("%d\n",sizeof(struct Demo));
	return 0;
}
