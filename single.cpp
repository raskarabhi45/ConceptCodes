#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    Base()
    {
        cout<<"BAse constructor\n";
    }
    ~Base()
    {
        cout<<"BAse destructor\n";
    }
};

class Derived:public Base
{
    public:
    int a,b,c;
    Derived()
    {
        cout<<"derived constructor\n";
    }
    ~Derived()
    {
        cout<<"derived desstructor";
    }

};

int main()
{
    Derived dobj;
    

    return 0;
}