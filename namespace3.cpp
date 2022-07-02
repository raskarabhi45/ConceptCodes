#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun Marvellous\n";
    }
}     //here no semicolon bcoz it is not datatype


namespace Infosystem
{
    void fun()
    {
        std::cout<<"Inside fun Infosystems\n";
    }
}     //here no semicolon bcoz it is not datatype


int main()
{
    std::cout<<"Jay ganesh\n";

    using namespace Marvellous;
     using namespace Infosystem;
   
   //fun(); //Ambuiguity
   Infosystem::fun();
    return 0;
}