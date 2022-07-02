//To count a digit in given number
#include<stdio.h>
int main()
{
	int n,count=0; 
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
		printf("Total digits in given numbner is %d",count);
		
	}
}
	
	
	
	

	
	

