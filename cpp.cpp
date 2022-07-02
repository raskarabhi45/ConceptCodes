#include<iostream>
using namespace std;

class interest
{
    public:
    int n;
    float p;
    static float rate;
    
    void get()
    {
        cout<<"Enter number of years and principal amount:";
        cin>>n>>p;
        rate++;
    }
     
    void display()
    {
        
        float si;
        si=(p*rate*n)/100;
        cout<<"Simple interest is:"<<si;
    }
};
float interest::rate=0;

int main()
{
    interest obj1,obj2,obj3;
    obj1.get();
    obj2.get();
    obj1.display();
    obj2.display();
   
    
   

    return 0;
}