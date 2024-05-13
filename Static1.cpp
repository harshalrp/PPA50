#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2;  //non static characteristics
        static int x;  // static characteristics

        Demo()
        {
            //this->No1 = 0;
            //this->No2 = 0;
            No1 = 10;
            No2 = 20;
        }
        void Fun() //non static behaviour
        {
            cout<<"inside fun\n";
            //cout<<this
            cout<<No1<<"\n";
            cout<<x<<"\n";
        }
        static void Gun() //static behaviour
        {
            cout<<"inside gun\n";
            cout<<x<<"\n";   // static function access only static characteristics
        }
};
int Demo :: x = 11;
int main()
{
    cout<<"value of x is: "<<Demo::x<<"\n";
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    cout<<"size of object is : "<<sizeof(obj1)<<"\n";
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No2<<"\t"<<obj2.No2<<"\n";

    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    cout<<"Value of x using object is :"<<obj1.x<<"\n";
    return 0;
}