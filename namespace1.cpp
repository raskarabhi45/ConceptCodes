#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}     //here no semicolon bcoz it is not datatype

int main()
{
    std::cout<<"Jay ganesh\n";
   
   Marvellous::fun();
    return 0;
}