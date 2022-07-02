#include<iostream>
using namespace std;
//public private
class Demo
{
    public:
    int x;

    private:
    int y;

    public:
    Demo() //constructor should be always in public section
    {
        int x=10;
        int y=20;
    }
    void fun()
        {
            cout<<"Inside public fun\n";
        }
private:
void gun()
{
    cout<<"Inside private gun\n";
}    
};




int main()
{
    return 0;
}
