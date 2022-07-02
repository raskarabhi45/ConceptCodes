/calloc 

#include<stdio.h>
#include<stdlib.h>

int main()
{	

int *ptr=NULL;

ptr=(int*)realloc(NULL,sizeof(int)); // it behaves like malloc


realloc(ptr,0); //it behaves like free
	
	
}
	return 0;
}
