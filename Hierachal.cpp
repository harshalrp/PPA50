#include<iostream>
using namespace std;

class Marvellous
{
    public :
        int C;
        Marvellous()
        {
            C = 30;
            cout<<"Inside Marvellous constructor\n";
        }
        ~Marvellous()
        {   cout<<"inside marvellous destructor\n"; }
        void Sun()
        {   cout<<"inside sun of marvellous\n"; }
};
class Demo: public Marvellous
{
    public:
        int A;
        Demo()
        {
            A = 10;
            cout<<"inside Demo constructor\n";
        }
        ~Demo()
        {   cout<<"inside Demo Destructor\n";}
        void Fun()
        {   cout<<"inside fun of demo\n";   }
};
class Hello : public Marvellous
{
    public:
        int B;
        Hello()
        {
            B = 20;
            cout<<"inside Hello constructor\n"; 
        }
        ~Hello()
        {   cout<<"inside Hello Destructor\n";}
        void Gun()
        {   cout<<"inside gun of demo\n";   }
};

int main()
{
    Demo dobj;
    Hello hobj;
    
    return 0;
}
