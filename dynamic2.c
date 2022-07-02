//calloc 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
int size=0;
int *ptr=NULL;

printf("Enter the number of elements that you want to allocate :");
scanf("%d",&size);
	
ptr=	calloc(size,sizeof(int)); // step1 :allocate the memory
if(ptr==NULL)
{
	printf("Unable to allocate memory\n");
}
else
{
	printf("Memory successfully allocated\n");
	
	//step2 :use the memory
	
	free(ptr); // step3: Free the memory
}
	return 0;
}
