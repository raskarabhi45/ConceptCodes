#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter first complex number\n";
    cin>>x1>>y1;

    cout<<"Enter second complex number\n";
    cin>>x2>>y2;

    x3=x1*x2-y1*y2;
    y3=x1*y2+y1*x2;

    cout<<"Value after multiplication is :"<<x3<<" + "<<y3<<"i";
    return 0;
}