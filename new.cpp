#include<iostream>

using namespace std;

int main()
{
    int Arr[5];   //static
    int *p=NULL;

   // p=(int*)malloc(sizeof(int) * 5);   //dynamic in c

    p=new int[10];     //dynamic in c++
    if(p==NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory allocated sucessfully at address:"<<p<<"\n";
    }

    //free(p); in c

    delete []p; //in c++

    return 0;
}