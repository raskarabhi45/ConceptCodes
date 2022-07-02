#include<iostream>
//Anonyms namespace concept
namespace 
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}     //here no semicolon bcoz it is not datatype

int main()
{
    std::cout<<"Jay ganesh\n";

    
   
   fun();
    return 0;
}