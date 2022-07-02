//1 The demo of access specifier inside a single class
#include<iostream>
using namespace std;

class demo
{
    public:
    int pub;
    static int i;

    private:
    int pri;

    protected:
    int pro;

    public:
    demo()
    {
        pub=10;
        pri=20;
        pro=30;
    }
    void fun()
    {
        cout<<endl<<"public member :"<<pub<<"\n private member :"<<pri<<"\nproteted member :"<<pro<<endl;
    }
};
int demo::i=10;

int main()
{
    demo obj;
    cout<<demo::i;
    cout<<"Public member :"<<obj.pub;
   // cout<<"Private member :"<<obj.pri;
   //unable to access this private member outside class
    //cout<<"Protected member :"<<obj.pro;
    //unable to access protected member outside outside the classc

    cout<<endl<<endl<<"Accessing all the class members using fun: ";
    obj.fun();

    return 0;
}