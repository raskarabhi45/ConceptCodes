//Accept number and perform addition and substratctiom
#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    auto int iANs=0;
    iAns=iNo1+iNo2;
    return iAns;

}

int Substraction(int iNo1,int iNo2)
{
    auto int iANs=0;
    iAns=iNo1-iNo2;
    return iAns;
}
int main()
{
   auto int iValue1=0,iValue2=0,iRet=0;

   printf("enter first number\n");
   scanf("%d",&iValue1);

    printf("enter second number\n");
   scanf("%d",&iValue2);

   iRet=Addition(iValue1,iValue2);
   printf("Addition is :\n,",iRet);

   iRet=Substraction(iValue1,iValue2);
   printf("Substraction is :\n,",iRet);

    return 0;
}