#include<stdio.h>
int main(){
	
	int no1=10;
	int no2=10;
	int ans1=0;
	int ans2=0;
	int ans3=0;
	int ans4=0;
	
	ans1=++no1;
	printf("Value of ans1 %d\n",ans1);
	printf("Value of no1 %d\n",no1);
	
	
	ans2=no2++;
	printf("Value of ans2 %d\n",ans2);
	printf("Value of no1 %d\n",no2);
	
	ans3=no1--;
	printf("Value of ans3 %d\n",ans3);
	printf("Value of no1 %d\n",no1);
	
	
	ans4=--no2;
	printf("Value of ans4 %d\n",ans4);
	printf("Value of no1 %d\n",no2);
	
	
	
	return 0;
}