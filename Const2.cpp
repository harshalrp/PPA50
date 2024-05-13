#include<iostream>
using namespace std;

class Demo
{
    public:
        const int X = 11;
        const int Y = 21;
        int z;

        Demo(int i, int j, int k) : X(i), Y(j)  // initialisation List
        {
           cout<<"inside constructor "
           z = k;
        }
};

int main()
{
    Demo obj1(11,21);
    cout<<obj1.
    return 0;
}