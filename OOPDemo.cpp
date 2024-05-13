#include<iostream>
using namespace std;

class Arithmatic
{   
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            no1 = 11;
            no2 = 12;
        }
        Arithmatic(int a, int b)
        {
            no1 = a;
            no2 = b;
        }
        int Subtraction()
        {
            int ans = 0;
            ans = no1 - no2; 
            return ans;
        }
        int Addition()
        {
            int ans = 0;
            ans = no1 + no2; 
            return ans;
        }
};

int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    cout<<"Entyer first number:\n";
    cin>>Value1;

    cout<<"enter second number:\n";
    cin>>Value2;

    Arithmatic obj(Value1,Value2);
    Ret = obj.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj.Subtraction();
    cout<<"subtraction is: "<<Ret<<"\n";

    return 0;
}