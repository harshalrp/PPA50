#include<iostream>
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
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(20,30);

    obj1+obj2;

    return 0;
}