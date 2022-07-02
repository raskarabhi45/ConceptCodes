/calloc 

#include<stdio.h>
#include<stdlib.h>

int main()
{	

int *ptr=NULL;
//Hotel mdhle tables
ptr=(int*)malloc(5,sizeof(int)); // step1 :allocate the memory
//2 extra aale
ptr=(int*)realloc(ptr,7*sizeof(int));
//4 gele
ptr=(int*)realloc(ptr,3*sizeof(int));
	
	free(ptr); // step3: Free the memory
}
	return 0;
}
