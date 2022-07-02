#include<iostream>
using namespace std;

int main()
{   
    //value    0    1   2   3   4    5   6
    enum Days{ sun,mon,tue,wed,thus,fri,sat}; //memory in text section

    enum Days obj;
    
    obj=tue;

    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";

    enum Gender { Female=1,Male=2};
    cout<<"Enter your gender\n";
    cout<<"1:Female\n";
    cout<<"2:Male\n";
    int input=0;
    cin>>input;

    switch(input)
    {
        case Female:
        cout<<"Tax free limit is 300000\n";
        break;

        case Male:
        cout<<"tax free limit is 250000\n";
        break;

        default:
        cout<<"Invalid gender\n";
    }

    return 0;
}