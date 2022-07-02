#include<stdio.h>
int main()
{
    auto int marks=0;
	
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	printf("Your entered marks: %d\n",marks);
	
	if(marks>=60)
	{
		printf("First class\n");
	}
	else
	{
		printf("Not a first class\n");
	}
	
	return 0;
}
