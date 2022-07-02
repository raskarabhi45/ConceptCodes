#include<iostream>
using namespace std;

class Demo
{
    public:
    int i,j; //instance variable (non static)
    static int x; // class variable (static)

    Demo(int a=10,int b=20) //paramatrized with default argument
    {
        cout<<"Inside constructor\n";
        //(*this).i=a;
        this->i=a;
        this->j=b;

    }
    
    //void fun(Demo *this,int no)
    void fun(int no)
    {
        cout<<"Inside non-static fun\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
    }

    static void gun(int value)
    {
        cout<<"Inside static gun\n";
    }

};
 int Demo::x=30;

int main()
{
    cout<<Demo::x<<"\n";
    Demo::gun(11);

    Demo obj(11);
    obj.fun(21);  //fun(&obj,21); internally
    cout<<sizeof(obj)<<"\n";
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<Demo::x<<"\n";
    
    //Demo::gun(11) internally
    obj.gun(11); //chalel pn generally use kru nyee


    return 0;
}