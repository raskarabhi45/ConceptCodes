#include<stdio.h>

int main()
{
	int no=11;
	
	char ch='A';
	
	printf("Value of no: %d\n",no); //11
	
	printf("Value of ch :%c\n",ch); //A
	
	printf("Address of no is: %u\n",&no); //
	
	printf("Address of ch is:%u\n",&ch);
	
	printf("Size of no: %d\n",sizeof(no));//4
	
	printf("Size of ch :%d\n",sizeof(ch));//1
	
	
	return 0;
}
