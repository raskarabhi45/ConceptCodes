// generic
#include <iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
    T iAns = 0;
    iAns = no1 + no2;
    return iAns;
}

int main()
{
    int iNo1 = 10, iNo2 = 11, iRet = 0;
    iRet = Addition(iNo1, iNo2);
    cout << "Addition is : " << iRet << endl;

    float a = 10.8, b = 11.5, fRet = 0.0;
    fRet = Addition(a, b);
    cout << "Addition is : " << fRet << endl;

    double d1 = 17.8  , d2 = 19.5, dRet = 0.0;
    dRet = Addition(d1, d2);
    cout << "Addition is : " << dRet << endl;

    return 0;
}
