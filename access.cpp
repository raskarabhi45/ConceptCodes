#include<iostream>
using namespace std;
//public private
class Demo
{
    int i;
    public:
    int x;

    private:
    int y;

    public:
    Demo() //constructor should be always in public section
    {
         x=10;
         y=20;
        i=30;
    }
    void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y;  //allowed
        }
private:
void gun()
{
    cout<<"Inside private gun\n";
}    
};




int main()
{
    Demo obj;
    cout<<obj.x<<"\n";
    //cout<<obj.y<<"\n"; error
    //cout<<obj.i<<"\n";error
    obj.fun();
    //obj.gun();error
    
    
    return 0;
}
