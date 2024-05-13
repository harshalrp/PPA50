#include <iostream>
using namespace std;

class Base
{
    public :
        int A, B;
        Base()
        {   cout<<"inside Base constructor\n";}
        int Addition(int i, int j)
        {   return i+j; }
        virtual int Subtraction(int i, int j)
        {   return i-j; }
        virtual int multiplication(int i, int j) = 0;

};
class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {   cout<<"derived constructor\n"; }
        int Subtraction(int i, int j)
        {   return i-j; }
        int multiplication(int i, int j)
        {   return i*j; }
        virtual int Division(int i, int j)
        {   return i/j; }
};

int main()
{
   // Base bobj;
    Derived dobj;
    Base *bp = &dobj;

    cout<<bp->Addition(10,11)<<"\n";
    cout<<bp->Subtraction(10,11)<<"\n";
    cout<<bp->multiplication(10,11)<<"\n";
    //cout<<bp->Division(10,11)<<"\n";

    return 0;
}