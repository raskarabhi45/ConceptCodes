#include<iostream>
using namespace std;

class Demo
{
    public:
    //Addition@2ii   (2 arguments and i for integer) 
    int Addition(int no1,int no2) //1000
    {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
    }

    //Addition@3iii
     int Addition(int no1,int no2,int no3) //2000
    {
        int Ans=0;
        Ans=no1+no2+no3;
        return Ans;
    }
    //Addition@4iiii
    int Addition(int no1,int no2,int no3,int no4) //3000
    {
        int Ans=0;
        Ans=no1+no2+no3+no4;
        return Ans;
    }
};


int main()
{
   Demo obj;
   int ret=0;
   
   // (assembly code instructions)
   // PUSH 10
   // PUSH 11
   //CALL 1000
   ret=obj.Addition(10,11);  //obj.Addition@2ii(10,11);
   cout<<ret<<"\n";
   
   // PUSH 10
   // PUSH 11
   // PUSH 21
   //CALL 2000
   ret=obj.Addition(10,11,21);//obj.Addition@3iii(10,11,21);
   cout<<ret<<"\n";
   
   // PUSH 10
   // PUSH 11
   // PUSH 21
   // PUSH 51
   //CALL 3000
   ret=obj.Addition(10,11,21,51);//obj.Addition@4iiii(10,11,21,51);
   cout<<ret<<"\n";

    return 0;
}

/*
//ALLOWED...........
//Changing number of arguments/parameters
void fun(int,int);
void fun(int,int ,int);

//changing datatype of argunment
void fun(int,int);
void fun(double,double);

//changing sequence of argument
void fun(char,int,float);
void fun(int,float,char);


//NOT ALLOWED........
//Changing return value
int fun();
float fun();

*/

