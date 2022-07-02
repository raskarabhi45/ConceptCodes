///Logic building code
#include<stdio.h>
#include<string.h>
//1st logic
int strlenX(char str[])
{
   int iCnt=0;
   int iLength=0;
   
   for(iCnt=0;str[iCnt]!='\0';iCnt++)
   {
   	iLength++;
   }
   return iLength;
}
//2nd
int strlenXX(char str[])
{
	iny iCnt=0;
	int iLength=0;
	
	while(str[iCnt]!='\0')
	{
		iCnt++;
		iLength++;
	}
	return iLength
}
//3rd
////////////////////////
//
//Function name : strlenXXX
//Input:          Address of character array
//Output:         length of string in integer
//description:    It is used ti caculate length of string
//Author:         Abhishek Narendra Raskar
//Date   :        06/03/2022
//
/////////////////////////
int strlenXXX(const char *str)
{
	int iCnt =0;
	
	while(*str!='\0')
	{
	  iCnt++
	str++;
}
return iCnt;

int main()
{
	char Arr[]="Marevllous";
	int iRet=0;
	
	iRet=strlenX(Arr);
	
	printf("String length is : %d\n",iRet);
	return 0;
}
