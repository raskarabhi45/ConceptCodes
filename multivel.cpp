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
        cout<<"derived constructor\n"
    }

};

class Derived1: public Derived
{
    public:
    int k,l;
    Derived()
    {
        cout<<"Derived1 constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived1 destructor\n";
    }
}

int main()
{
    Derived1 dobj;
    

    return 0;
}