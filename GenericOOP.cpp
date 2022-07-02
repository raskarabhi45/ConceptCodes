//specific
#include<iostream>
using namespace std;

template<class T>
    class Arithmatic
    {
        public:
        T No1; 
        T No2;

        Arithmatic(T a,T b)
        {
            No1=a;
            No2=b;
        }
        T Addition()
        {
            T Ans;
            Ans=No1+No2;
            return Ans;
        }
        T Substracion()
        {
            T Ans;
            Ans=No1-No2;
            return Ans;
        }
    };

    int main()
    {
        Arithmatic <int>obj(10,11);
        int Ret=obj.Addition();
        cout<<"Addition is : "<<Ret<<endl;

        
        Arithmatic <double>dobj(10.9,11.5);
        int dRet=dobj.Addition();
        cout<<"Addition is : "<<dRet<<endl;

        return 0;
    }
