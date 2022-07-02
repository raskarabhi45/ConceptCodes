#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    int add(int a,int b)  //concrete function
    {
        return a+b;
    }
    virtual int sub(int a,int b)=0; //abstract function
};

class Derived : public Base{
    public:
    int i,j;

    int sub(int a,int b)
    {
        return a-b;
    }
    int mul(int a ,int b)
    {
        return a*b;
    }
};

int main()
{
  Base *bp=new Derived();
  int ret=0;

  ret=bp->add(11,10);
  cout<<ret<<endl;

  ret=bp->sub(11,10);
  cout<<ret<<endl;

  //ret=bp->mul(11,10);  error
  //cout<<ret<<endl;
    return 0;
}