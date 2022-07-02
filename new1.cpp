#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

    Demo()
    {
        cout<<"Inside default constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside desructor\n";
    }

    void fun()
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
Demo obj;        //static object creation

Demo *ptr=NULL;

ptr=new Demo;    //dynamic object creation

obj.fun();

ptr->fun();

delete ptr;

    return 0;
}