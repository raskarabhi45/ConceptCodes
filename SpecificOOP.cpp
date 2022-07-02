//specific
#include<iostream>
using namespace std;

    class Arithmatic
    {
        public:
        int No1;
        int No2;

        Arithmatic(int a,int b)
        {
            No1=a;
            No2=b;
        }
        int Addition()
        {
            int Ans=0;
            Ans=No1+No2;
            return Ans;
        }
        int Substracion()
        {
            int Ans=0;
            Ans=No1-No2;
            return Ans;
        }
    };

    int main()
    {
        Arithmatic obj(10,11);
        
        int Ret=obj.Addition();
        cout<<"Addition is : "<<Ret<<endl;

        return 0;
    }
