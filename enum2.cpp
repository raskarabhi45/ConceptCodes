#include<iostream>
using namespace std;

int main()
{
    enum Marvellous_Batches{PPA=0,LB=1,python=2};
   const int Fees[]={15000,16000,17000};
   const float Duration[]={3.5,4.0,3.5};
    int choice=0;

    cout<<"Select the batch that you want to join\n";
    cout<<"0:PPA\n";
    cout<<"1:Logic Building\n";
    cout<<"2:python\n";
    cin>>choice;

    switch (choice)
    {
        case PPA:
        cout<<"Thank you for selecting Pre-placement activity batch\n";
        cout<<"Duration is :"<<Duration[PPA]<<"\n";
        cout<<"Fees are :"<<Fees[PPA]<<"\n";
        break;

         case LB:
        cout<<"Thank you for selecting Logic building batch\n";
        cout<<"Duration is :"<<Duration[LB]<<"\n";
        cout<<"Fees are :"<<Fees[LB]<<"\n";
        break;

         case python:
        cout<<"Thank you for selecting python batch\n";
        cout<<"Duration is :"<<Duration[python]<<"\n";
        cout<<"Fees are :"<<Fees[python]<<"\n";
        break;

        default:
        cout<<"Sorry there is no such batch\n";
        cout<<"Thank you for visiting marvellous infosystems\n";
        cout<<"For more information contact admin:9359899826\n";

        return 0;
    }
    

}