#include<iostream>
using namespace std;

class Arithematic
{
    public:
       int Addition(int No1, int No2)
        {
            
        }
        int Addition(int No1, int No2, int No3)
        {
            return No1 + No2 + No3;
        }
        double Addition(double No1, double No2)
        {
            return No1 + No2;
        }
        double Addition(double No1, double No2, double No3)
        {
            return No1 + No2 + No3;
        }
};
int main()
{
    Arithematic obj;

    cout<<obj.Addition(13,15)<<"\n";
    cout<<obj.Addition(34,54,23)<<"\n";
    cout<<obj.Addition(23.32,32.32,111.11)<<"\n";
    cout<<obj.Addition(45.54, 32.32)<<"\n";

    return 0;
}