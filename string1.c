#include<stdio.h>
#include<string.h>
int main()
{
	//first way
	char Arr[5]={'a','b','c',' ','d','\0'};
	
	//second way
	char Brr[]="abcd";
	
	printf("%s\n",Arr);
	
	printf("%s\n",Brr);
	
	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);

    printf("Size of string Arr is :%d\n",sizeof(Arr));
    printf("Size of string Brr is :%d\n",sizeof(Brr));
    
	printf("Length os string is %d\n",strlen(Arr));
	printf("Length os string is %d\n",strlen(Brr));
	
	return 0;
}
