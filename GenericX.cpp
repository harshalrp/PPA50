#include<iostream>
using namespace std;

template<class T>       //template header
T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

template<class T> 
T Maximum(T no1, T no2)
{
    if(no1 > no2)
    {
        return no1;
    }
    else
    {
        return no2;
    }
}
int main()
{
    int A = 11, B = 21, Ans =0;
    Ans = Addition(A,B);
    cout<<"Addition is "<<Ans<<"\n";
    Ans = Maximum(A,B);
    cout<<"Maximu number is:"<<Ans<<"\n";

    float X = 90.68f, Y = 89.98f, Ret = 0.0f;
    Ret = Addition(X,Y);
    cout<<"Addition is "<<Ans<<"\n";
    Ret = Maximum(X,Y);
    cout<<"Maximu number is:"<<Ret<<"\n";
    return 0;
}