#include<iostream>
using namespace std;

class Base
{
    public :
    int x,y;

    virtual void fun()
    {
        cout<<"Base fun\n";
    }
    void gun()
    {
        cout<<"Base gun\n";
    }
};

class Derived:public Base{
    public :
    int i,j;

    void sun()
    {
        cout<<"Derived sun\n";
    }
     void fun() //redefination
    {
        cout<<"derived fun\n";
    }
};
int main()
{
    Base *bp=new Derived(); //upcasting
    bp->fun();
    bp->gun();
    //bp->sun(); not allowed
    
    cout<<"Size of Base:"<<sizeof(Base)<<"\n";
    cout<<"Size of derived:"<<sizeof(Derived)<<"\n";
    return 0;
}