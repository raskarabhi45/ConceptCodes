#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    //1000
    void fun()             //concrete non vertual
    {
        cout<<"Base fun\n";
    }
   //2000
    virtual void gun()   //concrete vertual 
    {
        cout<<"Base gun\n";
    }
   //3000
    virtual void sun()    //concrete vertual
    {
        cout<<"Base sun\n";
    }
   //_____________
    virtual void run()=0; //abstract function(pure vertual)
    
};

class Derived : public Base{
    public:
    int i,j;
   //4000
    void fun()   //rededination (concrete) function
    {
        cout<<"derived fun\n";
    }
   //5000
    virtual void gun()   //overriding
    {
        cout<<"derived gun\n";
    }
    //6000
    void run()   //concrete function
    {
        cout<<"derived run\n";
    }

    
};

int main()
{
    //Base bobj;  Not allowed
    Derived dobj;  //Allowed

    Base *bp=NULL;
    bp=&dobj;     //upcasting

    cout<<sizeof(Base)<<"\n";  //16
    cout<<sizeof(Derived)<<"\n"; //24

    bp->fun();  //base fun
    bp->gun();  //derived gun
    bp->sun();  //Base sun
    bp->run();  //derived run

  
    return 0;
}