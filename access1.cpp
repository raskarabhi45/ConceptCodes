#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;

    private:
    int j;

    protected:
    int k;

};
class Hello:public Demo
{
    public:
    int x;

    private:
    int y;

    protected:
    int z;

    public:
    void fun()
    {
        cout<<k;
    }

};

int main()
{
    cout<<sizeof(Demo)<<"\n";
    cout<<sizeof(Hello)<<"\n";

    Demo dobj;
    cout<<dobj.i<<"\n";  //A
    //dobh.j; //NA
    //dobj.k;  //NA

    Hello hobj;
    cout<<hobj.x<<"\n";  //A
   // hobj.y; //NA
   // hobj.z; //NA

    cout<<hobj.i<<"\n";//A
   //hobj.j; //NA
   //hobj.k; //NA

    return 0;
}