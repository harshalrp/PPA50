#include<iostream>
using namespace std;

class Demo;

class Hello
{
    public:
        void Fun();
        void Gun();
        int Addition(int b, int a);
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        friend void Hello::Fun();
        friend void Hello::Gun();
        friend int Hello::Addition(Demo&);
};

void Hello::Fun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}

void Hello::Gun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
} 

int Hello::Addition(int d, int a)
{
    Demo obj;
    return d+a;
}

int main()
{                                                                                                       
    Hello hobj;
    Demo dobj;

    hobj.Fun();
    hobj.Gun();
    cout << "Value from Demo class: " << dobj.Addition(d+a) << "\n";
    
    return 0;
}
