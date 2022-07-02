//specific
#include<iostream>
using namespace std;

    int Addition(int no1,int no2)
    {
        int iAns=0;
        iAns=no1+no2;
        return iAns;
    }

    float Addition(float no1,float no2)
    {
        float iAns=0;
        iAns=no1+no2;
        return iAns;
    }

    int main()
    {
        int iNo1=10,iNo2=11,iRet=0;
        iRet=Addition(iNo1,iNo2);
        cout<<"Addition is : "<<iRet<<endl;

        float a=10.8,b=11.5,fRet=0.0;
        fRet=Addition(a,b);
        cout<<"Addition is : "<<fRet<<endl;

        return 0;
    }
