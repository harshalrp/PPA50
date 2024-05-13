#include<iostream>
using namespace std;

class Aritmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            cout<<"inside default constructor\n";
            no1 = 0;
            no2 = 0;
        }
        Arithmatic(int a, int b)
        {
            cout<<"inside parameterise constructor\n";
            no1 = a;
            no2 = b;
        }
        Arithmatic(Arithmatic &ref)
        {
            cout<<"inside copy constructor\n";
            no1 = ref.no1;
            no2 = ref.no2;
        }
        ~Arithmatic()
        {
            cout<<"inside destructor\n";
        }
};

int main()
{
    Aritmatic obj1;
    Aritmatic obj2(11,22);
    Aritmatic obj3(obj2);
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

    return 0;
}