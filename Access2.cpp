#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    public:
        Base()
        {   A = 10; B = 20; C = 30; }
        void Fun()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
            cout<<C<<"\n";
        }
}