#include <iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo(int i, int j)
        {
            A = i;
            B = j;
        }
        Demo operator + (Demo op2)
        {
            cout<<"inside operator overloading funcction\n";
            return Demo(this->A + op2.A, this-> B + op2.B);
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(20,30);
    Demo Ans(0,0);

    Ans = obj1 + obj2;
    
    cout<<Ans.A<<"\t"<<Ans.B<<"\n";

    return 0;
}
